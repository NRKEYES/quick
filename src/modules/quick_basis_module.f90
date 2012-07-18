

!
!	quick_basis_module.f90
!	new_quick
!
!	Created by Yipu Miao on 2/18/11.
!	Copyright 2011 University of Florida. All rights reserved.
!
!   Basis Module, to store basis information
module quick_basis_module

   !------------------------------------------------------------------------
   !  ATTRIBUTES  : see list below
   !  SUBROUTINES : none
   !  FUNCTIONS   : none
   !  DESCRIPTION : A quick explanation :  aexp(i,j) is the alpha
   !                exponent of the ith primitive of the jth function, and d(i,j) is
   !                is multiplicative coefficient.  quick_basis%ncenter(i) is the center upon which
   !                the ith basis function is located.  ncontract(i) is the degree of
   !                contraction of the ith basis function, and itype(i) is the ith basis
   !                function's angular momentum.  The ifirst and ilast arrays denot the
   !                first and last basis function number on a given center, i.e. if center
   !                number 8 has basis functions 7-21, ifirst(8)=7 and ilast(8) = 21.
   !                If the calculation is closed shell, nelec is the total number of electrons,
   !                otherwise it is the number of alpha electrons and nelecb is the
   !                number of basis elctrons.  The xyz and ichrg arrays denote atomic
   !                position and charge, while iattype is the atomic number of the atom, i.e.
   !                6 for carbon, etc. natom and nbasis are the number of atoms and
   !                basis functions. ibasis denotes the basis set chosen for.
   !------------------------------------------------------------------------

   use quick_gaussian_class_module
   implicit none

   type quick_basis_type
   
        type (gaussian), dimension(:), pointer :: gauss_fnc
        
        ! total shell number
        integer, pointer :: nshell
        
        ! total primitive guassian function number
        integer, pointer :: nprim
        
        ! shell kinds
        integer, pointer :: jshell
        
        ! basis kinds
        integer, pointer :: jbasis
        
        ! total basis number
        integer, pointer :: nbasis
        
        ! the first and last basis function for an atom
        integer, dimension(:),allocatable :: first_basis_function, last_basis_function
        
        ! the first and last shell basis function for an atom, only used in MP2 calculation
        integer, dimension(:),allocatable :: first_shell_basis_function, last_shell_basis_function
        
        ! central atom for a basis function
        integer, dimension(:),allocatable :: ncenter
        
        ! starting basis for a shell
        integer, allocatable, dimension (:) :: kstart
        
        ! centeral atom for a shell
        integer, allocatable, dimension (:) :: katom
        
        ! shell type: 1=s, 3=p, 4=sp, 6=d, f=10
        integer, allocatable, dimension (:) :: ktype
        
        ! primitive guassian function for a shell
        integer, allocatable, dimension (:) :: kprim
        
        ! shell number for a kind of atom
        integer, dimension(0:92)  :: kshell
   
   
        ! sum of ktype if shell<j
        integer, allocatable, dimension(:) :: Ksumtype
        integer, allocatable, dimension(:) :: Qnumber
        
        ! angular momenta quantum number for a shell
        ! s=0~0, p=1~1, sp=0~1, d=2~2, f=3~3
        integer, allocatable, dimension(:) :: Qstart
        integer, allocatable, dimension(:) :: Qfinal 
        
        ! the minimum exponent for a shell
        double precision, allocatable,dimension(:) ::  gcexpomin
        
        ! Qsbasis(i,j) and Qfbasis(i,j) stands for starting and ending basis
        ! function for shell i with angular momenta j
        integer, allocatable, dimension(:,:) :: Qsbasis,Qfbasis
        
        ! normalized coeffecient
        double precision, allocatable, dimension(:,:) :: gccoeff
        
        ! basis set factor
        double precision, allocatable, dimension(:) :: cons
        
        ! combined coeffecient for two indices
        double precision, allocatable, dimension(:,:,:,:) :: Xcoeff
        
        ! exponent
        double precision, allocatable, dimension(:,:) :: gcexpo
 
        integer, allocatable, dimension(:,:) :: KLMN  
        
        
   end type quick_basis_type
    
   type(quick_basis_type) quick_basis
   
   ! to be sub into gauss type
   type(gaussian),dimension(:), allocatable :: gauss
   integer,dimension(:),allocatable :: ncontract                                        ! to be sub
   integer, dimension(:,:), allocatable :: itype                                        ! to be sub
   double precision, dimension(:,:), allocatable :: aexp,dcoeff                         ! to be sub


   integer,target :: nshell,nprim,jshell,jbasis
   integer,target :: nbasis
   integer :: maxcontract   
   
   ! used for 2e integral indices
   integer :: IJKLtype,III,JJJ,KKK,LLL,IJtype,KLtype, intIndex

   ! used for hrr and vrr
   double precision :: Y,dnmax
   double precision :: Yaa(3),Ybb(3),Ycc(3)  ! only used for opt
   
   
   ! this is for SAD initial guess
   integer,allocatable,dimension(:) :: atombasis    ! basis number for every atom
   double precision,allocatable,dimension(:,:,:) :: atomdens    ! density matrix for ceitain atom
   
   
   double precision, allocatable, dimension(:,:) :: Apri,Kpri
   double precision, allocatable, dimension(:,:,:) :: Ppri
      
   ! they are for Schwartz cutoff
   double precision, allocatable, dimension(:,:) :: Ycutoff,cutmatrix,cutprim
   double precision, allocatable, dimension(:,:,:,:) :: Yxiaoprim !Yxiaoprim only used at shwartz cutoff


   ! for MP2 
   double precision, allocatable, dimension(:,:,:) :: orbmp2dcsub
   double precision, allocatable, dimension(:,:) :: orbmp2
   double precision, allocatable, dimension(:,:,:,:,:) :: orbmp2i331
   double precision, allocatable, dimension(:,:,:,:,:) :: orbmp2j331
   double precision, allocatable, dimension(:,:,:,:) :: orbmp2k331
   double precision, allocatable, dimension(:,:,:) :: orbmp2k331dcsub
   
   ! 
   double precision, allocatable, dimension(:,:,:) :: Yxiao,Yxiaotemp,attraxiao
   
    !only for opt
   double precision, allocatable, dimension(:,:,:,:) :: attraxiaoopt
   
   ! only for dft
   double precision, allocatable, dimension(:) :: phixiao,dphidxxiao,dphidyxiao,dphidzxiao


    interface alloc
        module procedure allocate_quick_basis
    end interface alloc

    interface dealloc
        module procedure deallocate_quick_basis
    end interface dealloc
    
    interface print
        module procedure print_quick_basis
    end interface print

contains

   !----------------
   ! Allocate quick basis
   !----------------
   subroutine allocate_quick_basis(self,natom_arg,nshell_arg,nbasis_arg)
        use quick_gaussian_class_module
        implicit none
        integer natom_arg,nshell_arg,nbasis_arg,i,j
        type(quick_basis_type) self
        
        allocate(self%gauss_fnc(nbasis_arg))
        allocate(self%ncenter(nbasis_arg))
        allocate(self%first_basis_function(natom_arg))
        allocate(self%last_basis_function(natom_arg))
        allocate(self%first_shell_basis_function(natom_arg))
        allocate(self%last_shell_basis_function(natom_arg))
   
        allocate(self%kstart(nshell_arg))
        allocate(self%katom(nshell_arg))
        allocate(self%ktype(nshell_arg))
        allocate(self%kprim(nshell_arg))
   
        allocate(self%Qnumber(nshell_arg))
        allocate(self%Qstart(nshell_arg))
        allocate(self%Qfinal(nshell_arg))
        allocate(self%Ksumtype(nshell_arg+1))
        allocate(self%gcexpomin(nshell_arg))
        
        allocate(self%Qsbasis(nshell_arg,0:3))
        allocate(self%Qfbasis(nshell_arg,0:3))
        
        do i = 1, nshell_arg
            do j = 0, 3
                self%Qfbasis(i,j) = 0
                self%Qfbasis(i,j) = 0
            enddo
        enddo
        
        allocate(self%gcexpo(6,nbasis_arg))
        allocate(self%gccoeff(6,nbasis_arg))
        allocate(self%cons(nbasis_arg))
        do i = 1, 6
            do j = 1, nbasis_arg
                self%gcexpo( i, j) = 0.0
                self%gccoeff( i, j) = 0.0
            enddo
        enddo
        
        do i = 1, nbasis_arg
            self%cons(i) = 0.0
        enddo
        
        allocate(self%KLMN(3,nbasis_arg))
   end subroutine allocate_quick_basis
   
   
   !----------------
   ! deallocate quick basis
   !----------------
   subroutine deallocate_quick_basis(self)
        use quick_gaussian_class_module
        implicit none
        type (quick_basis_type) self

        nullify(self%gauss_fnc)
        
        deallocate(self%ncenter)
        deallocate(self%first_basis_function)
        deallocate(self%last_basis_function)
        deallocate(self%last_shell_basis_function)
        deallocate(self%first_shell_basis_function)
        deallocate(self%kstart)
        deallocate(self%katom)
        deallocate(self%ktype)
        deallocate(self%kprim)
        deallocate(self%Qnumber)
        deallocate(self%Qstart)
        deallocate(self%Qfinal)
        deallocate(self%Ksumtype)
        deallocate(self%gcexpomin)
        deallocate(self%Qsbasis)
        deallocate(self%Qfbasis)
        deallocate(self%cons)
        deallocate(self%gcexpo)
        deallocate(self%gccoeff)

        deallocate(self%KLMN)
   end subroutine deallocate_quick_basis
   
   
   subroutine allocate_basis(quick_method_arg)
      use quick_method_module
      implicit none
      type(quick_method_type) quick_method_arg
      
      allocate(Apri(jbasis,jbasis))
      allocate(Kpri(jbasis,jbasis))
      allocate(cutprim(jbasis,jbasis))
      allocate(Ppri(3,jbasis,jbasis))
      allocate(quick_basis%Xcoeff(jbasis,jbasis,0:3,0:3))
      if(quick_method_arg%DFT)then
         allocate(phiXiao(nbasis))
         allocate(dPhidXXiao(nbasis))
         allocate(dPhidYXiao(nbasis))
         allocate(dPhidZXiao(nbasis))
      end if

   end subroutine
   
   subroutine print_quick_basis(self,ioutfile)
        implicit none
        type(quick_basis_type) self
        integer iOutFile
        
        if (ioutfile.ne.0) then
            write (iOutFile,*)
            write (iOutFile,'("============== BASIS INFOS ==============")')
            write (iOutFile,'("| BASIS FUNCTIONS = ",I4)') nbasis
            write (iOutFile,'("| NSHELL = ",I4, " NPRIM  = ", I4)') nshell,nprim
            write (iOutFile,'("| JSHELL = ",I4, " JBASIS = " ,I4)') jshell,jbasis
            write (iOutFile,*)
        endif
   end subroutine print_quick_basis
   
   subroutine normalize_basis()
      use quick_constants_module
      implicit none
      
      integer jbas,jcon,ibas,icon1,icon2,l
      double precision dconew,nxponent,xponent,gamma,xnorm
      
      do Jbas=1,nbasis
         do Jcon=1,ncontract(jbas)
            dcoeff(Jcon,Jbas)=dcoeff(Jcon,Jbas) *xnorm(aexp(Jcon,Jbas), &
                  itype(1,Jbas),itype(2,Jbas),itype(3,Jbas))
         enddo
      enddo

      do Ibas=1,nbasis
         dconew = 0.d0
         nxponent=-itype(1,Ibas)-itype(2,Ibas)-itype(3,Ibas)
         xponent=-1.5d0+dble(nxponent)
         do Icon1 = 1,ncontract(Ibas)
            do Icon2 = 1,ncontract(Ibas)
               dconew = dconew + dcoeff(Icon1,Ibas)*dcoeff(Icon2,Ibas) &
                     *(aexp(Icon1,Ibas)+aexp(Icon2,Ibas))**xponent
            enddo
         enddo
         gamma=1.d0
         do L=1,itype(1,Ibas)
            gamma = gamma * (dble(itype(1,Ibas) - L) + .5d0)
         enddo
         do L=1,itype(2,Ibas)
            gamma = gamma * (dble(itype(2,Ibas) - L) + .5d0)
         enddo
         do L=1,itype(3,Ibas)
            gamma = gamma * (dble(itype(3,Ibas) - L) + .5d0)
         enddo
         dconew = (dconew*gamma*PITO3HALF)**(-.5d0)
         do Icon1 = 1,ncontract(Ibas)
            dcoeff(Icon1,Ibas) = dconew*dcoeff(Icon1,Ibas)
         enddo
      enddo
      
    end subroutine


end module quick_basis_module
