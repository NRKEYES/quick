! Ed Brothers. May 23, 2002.
! 3456789012345678901234567890123456789012345678901234567890123456789012<<STOP

subroutine hfgrad
  use allmod
  implicit double precision(a-h,o-z)

  integer II,JJ,KK,LL,NBI1,NBI2,NBJ1,NBJ2,NBK1,NBK2,NBL1,NBL2
  common /hrrstore/II,JJ,KK,LL,NBI1,NBI2,NBJ1,NBJ2,NBK1,NBK2,NBL1,NBL2

  ! The purpose of this subroutine is to calculate the gradient of
  ! the total energy with respect to nuclear displacement.  The results
  ! of this are stored in Gradient, which is organized by atom and then
  ! by direction of displacement, i.e. element 1 is the gradient of the
  ! x diplacement of atom 1, element 5 is the y displacement of atom 2.

  ! Not that this is the RHF version of the code.  It is simplest of
  ! the gradient codes in this program.

  !Xiao HE modified 09/12/2007
  call cpu_time(timer_begin%TGrad)
  DO Iatm=1,natom*3
     GRADIENT(iatm)=0.d0
  ENDDO

  ! The gradient at this level of theory is the sum of five terms.
  ! 1)  The derivative of the nuclear repulsion.  Quick derivation:
  ! Vnn = (Sum over A) (Sum over B>A) ZA ZB / RAB
  ! where A and B are atoms, Z are charges, and RAB is the interatomic
  ! seperation.  If we take the derivative, all terms not involving
  ! A fall out. Thus:
  ! Vnn/dXA = ZA (Sum over B) d/dXA (ZB /RAB)
  ! Vnn/dXA = ZA (Sum over B) ZB d/dXA (RAB^-1)
  ! Vnn/dXA = ZA (Sum over B) ZB d/dXA(((XA-XB)^2+(YA-YB)^2+(ZA-ZB)^2)^-.5)
  ! Vnn/dXA = ZA (Sum over B) ZB*-.5*((XA-XB)^2+(YA-YB)^2+(ZA-ZB)^2)^-1.5
  ! *2*(XA-XB)^1
  ! Vnn/dXA = ZA (Sum over B) ZB*-((XA-XB)^2+(YA-YB)^2+(ZA-ZB)^2)^-1.5
  ! *(XA-XB)^1
  ! Vnn/dXA = ZA (Sum over B) ZB*((XA-XB)^2+(YA-YB)^2+(ZA-ZB)^2)^-1.5
  ! *(XB-XA)
  ! Vnn/dXA = ZA (Sum over B) ZB*(XB-XA) RAB^-3

  ! Thus this term is trivial, and can calculate it here. Note also
  ! that that atom A can never equal atom B, and A-B part of the derivative
  ! for A is the negative of the BA derivative for atom B.


  DO Iatm = 1,natom*3
     DO Jatm = Iatm+1,natom
        RIJ  = (xyz(1,Iatm)-xyz(1,Jatm))*(xyz(1,Iatm)-xyz(1,Jatm)) &
             +(xyz(2,Iatm)-xyz(2,Jatm))*(xyz(2,Iatm)-xyz(2,Jatm)) &
             +(xyz(3,Iatm)-xyz(3,Jatm))*(xyz(3,Iatm)-xyz(3,Jatm))
        ZAZBdivRIJ3 = chg(Iatm)*chg(Jatm)*(RIJ**(-1.5d0))
        XBminXA = xyz(1,Jatm)-xyz(1,Iatm)
        YBminYA = xyz(2,Jatm)-xyz(2,Iatm)
        ZBminZA = xyz(3,Jatm)-xyz(3,Iatm)
        ISTART = (Iatm-1)*3
        JSTART = (Jatm-1)*3
        GRADIENT(ISTART+1) = GRADIENT(ISTART+1)+XBminXA*ZAZBdivRIJ3
        GRADIENT(ISTART+2) = GRADIENT(ISTART+2)+YBminYA*ZAZBdivRIJ3
        GRADIENT(ISTART+3) = GRADIENT(ISTART+3)+ZBminZA*ZAZBdivRIJ3
        GRADIENT(JSTART+1) = GRADIENT(JSTART+1)-XBminXA*ZAZBdivRIJ3
        GRADIENT(JSTART+2) = GRADIENT(JSTART+2)-YBminYA*ZAZBdivRIJ3
        GRADIENT(JSTART+3) = GRADIENT(JSTART+3)-ZBminZA*ZAZBdivRIJ3
     ENDDO
  ENDDO

  ! 2)  The negative of the energy weighted density matrix element i j
  ! with the derivative of the ij overlap.

  ! 3)  The derivative of the 1 electron kinetic energy term ij times
  ! the density matrix element ij.

  ! These terms are grouped together since we loop over the same terms.
  ! Also note that these are the 2-center terms.

  ! The energy weighted denisty matrix is:
  ! Q(i,j) =2*(Sum over alpha electrons a)  E(a) C(I,a) C(J,a)
  ! Where C is the alpha or beta molecular orbital coefficients, and
  ! E is the alpha or beta molecular orbital energies.
  ! We'll store this in HOLD as we don't really need it (except for hessian
  ! calculations later).

  DO I=1,nbasis
     DO J=1,nbasis
        HOLDJI = 0.d0
        DO K=1,nelec/2
           HOLDJI = HOLDJI + (E(K)*CO(J,K)*CO(I,K))
        ENDDO
        HOLD(J,I) = 2.d0*HOLDJI
     ENDDO
  ENDDO

  IF (quick_method%debug) THEN
     write(ioutfile,'(/"THE ENERGY WEIGHTED DENSITY MATRIX")')
     DO I=1,nbasis
        DO J=1,nbasis
           write (ioutfile,'("W[",I4,",",I4,"]=",F18.10)') &
                J,I,HOLD(J,I)
        ENDDO
     ENDDO
  ENDIF

  ! The contribution to the derivative of energy with respect to nuclear
  ! postion for this term is: -(Sum over i,j) Q(i,j) dS(ij)/dXA
  ! Now Q is symmetric, and dS(ij)/dXA = dS(ji)/dXA.  Furthermore, if
  ! i and j are on the same center, the term is zero. Thus we need to find
  ! the i j pairs for i and j not on the same atom.
  ! Also:  The derivative of a cartesian gtf is:

  ! d/dXA ((x-XA)^i (y-YA)^j (z-ZA)^k e^(-ar^2))
  ! = 2a((x-XA)^(i+1) (y-YA)^j (z-ZA)^k e^(-ar^2))
  ! - i ((x-XA)^(i-1) (y-YA)^j (z-ZA)^k e^(-ar^2))

  ! Note that the negative on the final term comes from the form of (x-XA).

  DO Ibas=1,nbasis
     ISTART = (ncenter(Ibas)-1) *3
     DO Jbas=ilast(ncenter(IBAS))+1,nbasis
        JSTART = (ncenter(Jbas)-1) *3
        DENSEJI = DENSE(Jbas,Ibas)

        ! We have selected our two basis functions, now loop over angular momentum.

        DO Imomentum=1,3
           dSI = 0.d0
           dSJ =0.d0
           dKEI = 0.d0
           dKEJ = 0.d0

           ! Do the Ibas derivatives first.

           itype(Imomentum,Ibas) = itype(Imomentum,Ibas)+1
           DO Icon=1,ncontract(Ibas)
              DO Jcon=1,ncontract(Jbas)
                 dSI = dSI + 2.d0*aexp(Icon,Ibas)* &
                      dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                      *overlap(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                      itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                      itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                      xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                      xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                      xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                 dKEI = dKEI + 2.d0*aexp(Icon,Ibas)* &
                      dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                      *ekinetic(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                      itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                      itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                      xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                      xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                      xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
              ENDDO
           ENDDO
           itype(Imomentum,Ibas) = itype(Imomentum,Ibas)-1
           IF (itype(Imomentum,Ibas) /= 0) THEN
              itype(Imomentum,Ibas) = itype(Imomentum,Ibas)-1
              DO Icon=1,ncontract(Ibas)
                 DO Jcon=1,ncontract(Jbas)
                    dSI = dSI - dble(itype(Imomentum,Ibas)+1)* &
                         dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                         *overlap(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                         itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                         itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                         xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                         xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                         xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                    dKEI = dKEI - dble(itype(Imomentum,Ibas)+1)* &
                         dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                         *ekinetic(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                         itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                         itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                         xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                         xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                         xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                 ENDDO
              ENDDO
              itype(Imomentum,Ibas) = itype(Imomentum,Ibas)+1
           ENDIF
           GRADIENT(ISTART+Imomentum) = GRADIENT(ISTART+Imomentum) &
                -dSI*HOLD(Jbas,Ibas)*2.d0 &
                +dKeI*DENSEJI*2.d0

           ! Now do the Jbas derivatives.

           itype(Imomentum,Jbas) = itype(Imomentum,Jbas)+1
           DO Icon=1,ncontract(Ibas)
              DO Jcon=1,ncontract(Jbas)
                 dSJ = dSJ + 2.d0*aexp(Jcon,Jbas)* &
                      dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                      *overlap(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                      itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                      itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                      xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                      xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                      xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                 dKEJ = dKEJ + 2.d0*aexp(Jcon,Jbas)* &
                      dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                      *ekinetic(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                      itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                      itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                      xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                      xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                      xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
              ENDDO
           ENDDO
           itype(Imomentum,Jbas) = itype(Imomentum,Jbas)-1
           IF (itype(Imomentum,Jbas) /= 0) THEN
              itype(Imomentum,Jbas) = itype(Imomentum,Jbas)-1
              DO Icon=1,ncontract(Ibas)
                 DO Jcon=1,ncontract(Jbas)
                    dSJ = dSJ - dble(itype(Imomentum,Jbas)+1)* &
                         dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                         *overlap(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                         itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                         itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                         xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                         xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                         xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                    dKEJ = dKEJ - dble(itype(Imomentum,Jbas)+1)* &
                         dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                         *ekinetic(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                         itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                         itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                         xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                         xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                         xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                 ENDDO
              ENDDO
              itype(Imomentum,Jbas) = itype(Imomentum,Jbas)+1
           ENDIF
           GRADIENT(JSTART+Imomentum) = GRADIENT(JSTART+Imomentum) &
                -dSJ*HOLD(Jbas,Ibas)*2.d0 &
                +dKEJ*DENSEJI*2.d0
        ENDDO
     ENDDO
  ENDDO


  ! 4)  The derivative of the 1 electron nuclear attraction term ij times
  ! the density matrix element ij.

  ! Please note that these are the three center terms.

  DO IIsh=1,jshell
     Do JJsh=IIsh,jshell
        call attrashellopt(IIsh,JJsh)
     Enddo
  Enddo

  !        write (ioutfile,'(/," ANALYTICAL GRADIENT first: ")')
  !        DO Iatm=1,natom
  !            DO Imomentum=1,3
  !                write (ioutfile,'(I5,7x,F20.10)')Iatm, &
  !                GRADIENT((Iatm-1)*3+Imomentum)
  !            ENDDO
  !        ENDDO



  ! 5)  The derivative of the 4center 2e- terms with respect to X times
  ! the coefficient found in the energy. (i.e. the multiplicative
  ! constants from the density matrix that arise as these are both
  ! the exchange and correlation integrals.

  !    call g2eshell

  ! Delta density matrix cutoff

  Do II=1,jshell
     Do JJ=II,jshell
        DNtemp=0.0d0
        call DNscreen(II,JJ,DNtemp)
        Cutmatrix(II,JJ)=DNtemp
        Cutmatrix(JJ,II)=DNtemp
     Enddo
  Enddo



  ! ntempxiao1=0
  ! ntempxiao2=0

  Do II=1,jshell
     do JJ=II,jshell
        Testtmp=Ycutoff(II,JJ)
        do KK=II,jshell
           do LL=KK,jshell
              if(katom(II).eq.katom(JJ).and.katom(II).eq.katom(KK).and.katom(II).eq.katom(LL))then
                 continue
                 !          ntempxiao1=ntempxiao1+1
              else
                 testCutoff = TESTtmp*Ycutoff(KK,LL)
                 If(testCutoff.gt.GradCUTOFF)then
                    DNmax=max(4.0d0*cutmatrix(II,JJ),4.0d0*cutmatrix(KK,LL), &
                         cutmatrix(II,LL),cutmatrix(II,KK),cutmatrix(JJ,KK),cutmatrix(JJ,LL))
                    cutoffTest=testCutoff*DNmax
                    If(cutoffTest.gt.GRADCUTOFF)then
                       !              print*,II,JJ,KK,LL
                       call shellopt
                       !              ntempxiao2=ntempxiao2+1
                    Endif
                 endif
              endif
           enddo
        enddo
     enddo
  enddo

  ! stop

  call cpu_time(timer_end%TGrad)
  timer_cumer%TGrad=timer_end%TGrad-timer_begin%TGrad+timer_cumer%TGrad
  return
end subroutine hfgrad



! Yipu Miao  11/21/2010 Add MPI option
! Ed Brothers. May 23, 2002.
! 3456789012345678901234567890123456789012345678901234567890123456789012<<STOP

subroutine mpi_hfgrad
  use allmod
  implicit double precision(a-h,o-z)

  integer II,JJ,KK,LL,NBI1,NBI2,NBJ1,NBJ2,NBK1,NBK2,NBL1,NBL2
  common /hrrstore/II,JJ,KK,LL,NBI1,NBI2,NBJ1,NBJ2,NBK1,NBK2,NBL1,NBL2
  double precision:: temp_grad(3*natom)
  include "mpif.h"

  ! The purpose of this subroutine is to calculate the gradient of
  ! the total energy with respect to nuclear displacement.  The results
  ! of this are stored in Gradient, which is organized by atom and then
  ! by direction of displacement, i.e. element 1 is the gradient of the
  ! x diplacement of atom 1, element 5 is the y displacement of atom 2.

  ! Not that this is the RHF version of the code.  It is simplest of
  ! the gradient codes in this program.

  !Xiao HE modified 09/12/2007
  call cpu_time(timer_begin%TGrad)

  DO Iatm=1,natom*3
     GRADIENT(iatm)=0.d0
  ENDDO

  ! The gradient at this level of theory is the sum of five terms.
  ! 1)  The derivative of the nuclear repulsion.  Quick derivation:
  ! Vnn = (Sum over A) (Sum over B>A) ZA ZB / RAB
  ! where A and B are atoms, Z are charges, and RAB is the interatomic
  ! seperation.  If we take the derivative, all terms not involving
  ! A fall out. Thus:
  ! Vnn/dXA = ZA (Sum over B) d/dXA (ZB /RAB)
  ! Vnn/dXA = ZA (Sum over B) ZB d/dXA (RAB^-1)
  ! Vnn/dXA = ZA (Sum over B) ZB d/dXA(((XA-XB)^2+(YA-YB)^2+(ZA-ZB)^2)^-.5)
  ! Vnn/dXA = ZA (Sum over B) ZB*-.5*((XA-XB)^2+(YA-YB)^2+(ZA-ZB)^2)^-1.5
  ! *2*(XA-XB)^1
  ! Vnn/dXA = ZA (Sum over B) ZB*-((XA-XB)^2+(YA-YB)^2+(ZA-ZB)^2)^-1.5
  ! *(XA-XB)^1
  ! Vnn/dXA = ZA (Sum over B) ZB*((XA-XB)^2+(YA-YB)^2+(ZA-ZB)^2)^-1.5
  ! *(XB-XA)
  ! Vnn/dXA = ZA (Sum over B) ZB*(XB-XA) RAB^-3

  ! Thus this term is trivial, and can calculate it here. Note also
  ! that that atom A can never equal atom B, and A-B part of the derivative
  ! for A is the negative of the BA derivative for atom B.

  DO Iatm = 1,natom*3
     DO Jatm = Iatm+1,natom
        RIJ  = (xyz(1,Iatm)-xyz(1,Jatm))*(xyz(1,Iatm)-xyz(1,Jatm)) &
             +(xyz(2,Iatm)-xyz(2,Jatm))*(xyz(2,Iatm)-xyz(2,Jatm)) &
             +(xyz(3,Iatm)-xyz(3,Jatm))*(xyz(3,Iatm)-xyz(3,Jatm))
        ZAZBdivRIJ3 = chg(Iatm)*chg(Jatm)*(RIJ**(-1.5d0))
        XBminXA = xyz(1,Jatm)-xyz(1,Iatm)
        YBminYA = xyz(2,Jatm)-xyz(2,Iatm)
        ZBminZA = xyz(3,Jatm)-xyz(3,Iatm)
        ISTART = (Iatm-1)*3
        JSTART = (Jatm-1)*3
        if (master) then
           GRADIENT(ISTART+1) = GRADIENT(ISTART+1)+XBminXA*ZAZBdivRIJ3
           GRADIENT(ISTART+2) = GRADIENT(ISTART+2)+YBminYA*ZAZBdivRIJ3
           GRADIENT(ISTART+3) = GRADIENT(ISTART+3)+ZBminZA*ZAZBdivRIJ3
           GRADIENT(JSTART+1) = GRADIENT(JSTART+1)-XBminXA*ZAZBdivRIJ3
           GRADIENT(JSTART+2) = GRADIENT(JSTART+2)-YBminYA*ZAZBdivRIJ3
           GRADIENT(JSTART+3) = GRADIENT(JSTART+3)-ZBminZA*ZAZBdivRIJ3
        endif
     ENDDO
  ENDDO



  ! 2)  The negative of the energy weighted density matrix element i j
  ! with the derivative of the ij overlap.

  ! 3)  The derivative of the 1 electron kinetic energy term ij times
  ! the density matrix element ij.

  ! These terms are grouped together since we loop over the same terms.
  ! Also note that these are the 2-center terms.

  ! The energy weighted denisty matrix is:
  ! Q(i,j) =2*(Sum over alpha electrons a)  E(a) C(I,a) C(J,a)
  ! Where C is the alpha or beta molecular orbital coefficients, and
  ! E is the alpha or beta molecular orbital energies.
  ! We'll store this in HOLD as we don't really need it (except for hessian
  ! calculations later).
  
  if (master) then
  DO I=1,nbasis
     DO J=1,nbasis
        HOLDJI = 0.d0
        DO K=1,nelec/2
           HOLDJI = HOLDJI + (E(K)*CO(J,K)*CO(I,K))
        ENDDO
        HOLD(J,I) = 2.d0*HOLDJI
     ENDDO
  ENDDO
  endif
  
  call MPI_BCAST(HOLD,nbasis*nbasis,mpi_double_precision,0,MPI_COMM_WORLD,mpierror)
  call MPI_BCAST(GRADCUTOFF,1,mpi_double_precision,0,MPI_COMM_WORLD,mpierror)
  
  IF (quick_method%debug) THEN
     write(ioutfile,'(/"THE ENERGY WEIGHTED DENSITY MATRIX")')
     DO I=1,nbasis
        DO J=1,nbasis
           write (ioutfile,'("W[",I4,",",I4,"]=",F18.10)') &
                J,I,HOLD(J,I)
        ENDDO
     ENDDO
  ENDIF

  ! The contribution to the derivative of energy with respect to nuclear
  ! postion for this term is: -(Sum over i,j) Q(i,j) dS(ij)/dXA
  ! Now Q is symmetric, and dS(ij)/dXA = dS(ji)/dXA.  Furthermore, if
  ! i and j are on the same center, the term is zero. Thus we need to find
  ! the i j pairs for i and j not on the same atom.
  ! Also:  The derivative of a cartesian gtf is:

  ! d/dXA ((x-XA)^i (y-YA)^j (z-ZA)^k e^(-ar^2))
  ! = 2a((x-XA)^(i+1) (y-YA)^j (z-ZA)^k e^(-ar^2))
  ! - i ((x-XA)^(i-1) (y-YA)^j (z-ZA)^k e^(-ar^2))

  ! Note that the negative on the final term comes from the form of (x-XA).

  do i=1,mpi_nbasisn(mpirank)
     Ibas=mpi_nbasis(mpirank,i)
     ISTART = (ncenter(Ibas)-1) *3
     DO Jbas=ilast(ncenter(IBAS))+1,nbasis
        JSTART = (ncenter(Jbas)-1) *3
        DENSEJI = DENSE(Jbas,Ibas)

        ! We have selected our two basis functions, now loop over angular momentum.

        DO Imomentum=1,3
           dSI = 0.d0
           dSJ =0.d0
           dKEI = 0.d0
           dKEJ = 0.d0

           ! Do the Ibas derivatives first.

           itype(Imomentum,Ibas) = itype(Imomentum,Ibas)+1
           DO Icon=1,ncontract(Ibas)
              DO Jcon=1,ncontract(Jbas)
                 dSI = dSI + 2.d0*aexp(Icon,Ibas)* &
                      dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                      *overlap(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                      itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                      itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                      xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                      xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                      xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                 dKEI = dKEI + 2.d0*aexp(Icon,Ibas)* &
                      dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                      *ekinetic(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                      itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                      itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                      xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                      xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                      xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
              ENDDO
           ENDDO
           itype(Imomentum,Ibas) = itype(Imomentum,Ibas)-1
           IF (itype(Imomentum,Ibas) /= 0) THEN
              itype(Imomentum,Ibas) = itype(Imomentum,Ibas)-1
              DO Icon=1,ncontract(Ibas)
                 DO Jcon=1,ncontract(Jbas)
                    dSI = dSI - dble(itype(Imomentum,Ibas)+1)* &
                         dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                         *overlap(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                         itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                         itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                         xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                         xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                         xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                    dKEI = dKEI - dble(itype(Imomentum,Ibas)+1)* &
                         dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                         *ekinetic(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                         itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                         itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                         xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                         xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                         xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                 ENDDO
              ENDDO
              itype(Imomentum,Ibas) = itype(Imomentum,Ibas)+1
           ENDIF
           GRADIENT(ISTART+Imomentum) = GRADIENT(ISTART+Imomentum) &
                -dSI*HOLD(Jbas,Ibas)*2.d0 &
                +dKeI*DENSEJI*2.d0

           ! Now do the Jbas derivatives.

           itype(Imomentum,Jbas) = itype(Imomentum,Jbas)+1
           DO Icon=1,ncontract(Ibas)
              DO Jcon=1,ncontract(Jbas)
                 dSJ = dSJ + 2.d0*aexp(Jcon,Jbas)* &
                      dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                      *overlap(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                      itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                      itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                      xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                      xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                      xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                 dKEJ = dKEJ + 2.d0*aexp(Jcon,Jbas)* &
                      dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                      *ekinetic(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                      itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                      itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                      xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                      xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                      xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
              ENDDO
           ENDDO
           itype(Imomentum,Jbas) = itype(Imomentum,Jbas)-1
           IF (itype(Imomentum,Jbas) /= 0) THEN
              itype(Imomentum,Jbas) = itype(Imomentum,Jbas)-1
              DO Icon=1,ncontract(Ibas)
                 DO Jcon=1,ncontract(Jbas)
                    dSJ = dSJ - dble(itype(Imomentum,Jbas)+1)* &
                         dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                         *overlap(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                         itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                         itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                         xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                         xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                         xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                    dKEJ = dKEJ - dble(itype(Imomentum,Jbas)+1)* &
                         dcoeff(Jcon,Jbas)*dcoeff(Icon,Ibas) &
                         *ekinetic(aexp(Jcon,Jbas),aexp(Icon,Ibas), &
                         itype(1,Jbas),itype(2,Jbas),itype(3,Jbas), &
                         itype(1,Ibas),itype(2,Ibas),itype(3,Ibas), &
                         xyz(1,ncenter(Jbas)),xyz(2,ncenter(Jbas)), &
                         xyz(3,ncenter(Jbas)),xyz(1,ncenter(Ibas)), &
                         xyz(2,ncenter(Ibas)),xyz(3,ncenter(Ibas)))
                 ENDDO
              ENDDO
              itype(Imomentum,Jbas) = itype(Imomentum,Jbas)+1
           ENDIF
           GRADIENT(JSTART+Imomentum) = GRADIENT(JSTART+Imomentum) &
                -dSJ*HOLD(Jbas,Ibas)*2.d0 &
                +dKEJ*DENSEJI*2.d0
        ENDDO
     ENDDO
  ENDDO
  !endif

  ! 4)  The derivative of the 1 electron nuclear attraction term ij times
  ! the density matrix element ij.

  ! Please note that these are the three center terms.


  do i=1,mpi_jshelln(mpirank)
     IIsh=mpi_jshell(mpirank,i)
     Do JJsh=IIsh,jshell
        call attrashellopt(IIsh,JJsh)
     Enddo
  Enddo


  Do II=1,jshell
     Do JJ=II,jshell
        DNtemp=0.0d0
        call DNscreen(II,JJ,DNtemp)
        Cutmatrix(II,JJ)=DNtemp
        Cutmatrix(JJ,II)=DNtemp
     Enddo
  Enddo



  do i=1,mpi_jshelln(mpirank)
     II=mpi_jshell(mpirank,i)
     do JJ=II,jshell
        Testtmp=Ycutoff(II,JJ)
        do KK=II,jshell
           do LL=KK,jshell
              if(katom(II).eq.katom(JJ).and.katom(II).eq.katom(KK).and.katom(II).eq.katom(LL))then
                 continue
              else
                 testCutoff = TESTtmp*Ycutoff(KK,LL)
                 If(testCutoff.gt.GradCUTOFF)then
                    DNmax=max(4.0d0*cutmatrix(II,JJ),4.0d0*cutmatrix(KK,LL), &
                         cutmatrix(II,LL),cutmatrix(II,KK),cutmatrix(JJ,KK),cutmatrix(JJ,LL))
                    cutoffTest=testCutoff*DNmax
                    If(cutoffTest.gt.GRADCUTOFF)then
                       call shellopt
                    Endif
                 endif
              endif
           enddo
        enddo
     enddo
  enddo


  ! stop

  call cpu_time(timer_end%TGrad)
  timer_cumer%TGrad=timer_end%TGrad-timer_begin%TGrad+timer_cumer%TGrad

  ! slave node will send infos
  if(.not.master) then

     do i=1,natom*3
        temp_grad(i)=GRADIENT(i)
     enddo
     ! send operator to master node
     call MPI_SEND(temp_grad,3*natom,mpi_double_precision,0,mpirank,MPI_COMM_WORLD,IERROR)
  else
     ! master node will receive infos from every nodes
     do i=1,mpisize-1
        ! receive opertors from slave nodes
        call MPI_RECV(temp_grad,3*natom,mpi_double_precision,i,i,MPI_COMM_WORLD,MPI_STATUS,IERROR)
        ! and sum them into operator
        do ii=1,natom*3
           GRADIENT(ii)=GRADIENT(ii)+temp_grad(ii)
        enddo
     enddo
  endif

  return
end subroutine mpi_hfgrad