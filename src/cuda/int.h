#include "include/h_all_files.h"
#include "include/h_all_subroutines.h"

__device__ void vertical3(int I, int J, int K, int L,
                          QUICKDouble* YVerticalTemp, QUICKDouble* store,
                          QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                          QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                          QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                          QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                          QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                          QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    
    // WRITE LAST FOR I =            0  J=           0
    LOC2(store,  0,  0, STOREDIM, STOREDIM) = VY( 0, 0, 0);
    
    if ((I+J) >=  0 && (K+L) >= 1) {
        h2_0_1(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  0 && (K+L) >= 2) {
        h2_0_2(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  0 && (K+L) >= 3) {
        h2_0_3(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  0 && (K+L) >= 4) {
        h2_0_4(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    
    if ((I+J) >=  1 && (K+L) >= 0) {
        h2_1_0(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  1 && (K+L) >= 1) {
        h2_1_1(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  1 && (K+L) >= 2) {
        h2_1_2(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  1 && (K+L) >= 3) {
        h2_1_3(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  1 && (K+L) >= 4) {
        h2_1_4(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    
    if ((I+J) >=  2 && (K+L) >= 0) {
        h2_2_0(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  2 && (K+L) >= 1) {
        h2_2_1(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  2 && (K+L) >= 2) {
        h2_2_2(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  2 && (K+L) >= 3) {
        h2_2_3(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  2 && (K+L) >= 4) {
        h2_2_4(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    
    if ((I+J) >=  3 && (K+L) >= 0) {
        h2_3_0(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  3 && (K+L) >= 1) {
        h2_3_1(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  3 && (K+L) >= 2) {
        h2_3_2(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  3 && (K+L) >= 3) {
        h2_3_3(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  3 && (K+L) >= 4) {
        h2_3_4(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    
    if ((I+J) >=  4 && (K+L) >= 0) {
        h2_4_0(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  4 && (K+L) >= 1) {
        h2_4_1(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  4 && (K+L) >= 2) {
        h2_4_2(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  4 && (K+L) >= 3) {
        h2_4_3(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  4 && (K+L) >= 4) {
        h2_4_4(YVerticalTemp, store, \
               Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
               WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    
}


__device__ void vertical_spdf(int I, int J, int K, int L,
                         QUICKDouble* YVerticalTemp, QUICKDouble* store,
                         QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                         QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                         QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                         QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                         QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                         QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    
    if ((I+J) >=  0 && (K+L) >= 5) {
        h_0_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  0 && (K+L) >= 6) {
        h_0_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    if ((I+J) >=  1 && (K+L) >= 5) {
        h_1_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  1 && (K+L) >= 6) {
        h_1_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    if ((I+J) >=  2 && (K+L) >= 5) {
        h_2_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  2 && (K+L) >= 6) {
        h_2_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    if ((I+J) >=  3 && (K+L) >= 5) {
        h_3_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  3 && (K+L) >= 6) {
        h_3_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    if ((I+J) >=  4 && (K+L) >= 5) {
        h_4_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }/*
    if ((I+J) >=  4 && (K+L) >= 6) {
        h_4_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }*/
}






__device__ void vertical_spdf2(int I, int J, int K, int L,
                              QUICKDouble* YVerticalTemp, QUICKDouble* store,
                              QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                              QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                              QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                              QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                              QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  5 && (K+L) >= 0) {
        h_5_0(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  5 && (K+L) >= 1) {
        h_5_1(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  5 && (K+L) >= 2) {
        h_5_2(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  5 && (K+L) >= 3) {
        h_5_3(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  5 && (K+L) >= 4) {
        h_5_4(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  6 && (K+L) >= 0) {
        h_6_0(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  6 && (K+L) >= 1) {
        h_6_1(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  6 && (K+L) >= 2) {
        h_6_2(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  6 && (K+L) >= 3) {
        h_6_3(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }/*
    if ((I+J) >=  6 && (K+L) >= 4) {
        h_6_4(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }*/
}






__device__ void vertical_spdf3(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  5 && (K+L) >= 5) {
        h_5_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
   /* 
    if ((I+J) >=  5 && (K+L) >= 6) {
        h_5_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }*/
}


__device__ void vertical_spdf4(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  6 && (K+L) >= 5) {
        h_6_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
/*
    if ((I+J) >=  6 && (K+L) >= 6) {
        h_6_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }*/
}

__device__ void vertical_spdf5(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    
    if ((I+J) >=  4 && (K+L) >= 6) {
        h_4_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}






__device__ void vertical_spdf6(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  6 && (K+L) >= 4) {
        h_6_4(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}




__device__ void vertical_spdf7(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  5 && (K+L) >= 6) {
        h_5_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}


__device__ void vertical_spdf8(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  6 && (K+L) >= 6) {
        h_6_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}


__device__ void vertical2(int I, int J, int K, int L,
                         QUICKDouble* YVerticalTemp, QUICKDouble* store,
                         QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                         QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                         QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                         QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                         QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                         QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    // WRITE LAST FOR I =            0  J=           0
    LOC2(store,  0,  0, STOREDIM, STOREDIM) = VY( 0, 0, 0);
    if ((I+J) >=  0 && (K+L)>= 1) {
        // Subroutine for L =            0  B =            1 , m=           0
        QUICKDouble x_0_1_0 = Qtempx * VY( 0, 0, 0) + WQtempx * VY( 0, 0, 1);
        QUICKDouble x_0_2_0 = Qtempy * VY( 0, 0, 0) + WQtempy * VY( 0, 0, 1);
        QUICKDouble x_0_3_0 = Qtempz * VY( 0, 0, 0) + WQtempz * VY( 0, 0, 1);
        
                            //if (K<=1 && I <= 1){
        // WRITE LAST FOR I =            0  J=           1
        LOC2(store,  0,  1, STOREDIM, STOREDIM) = x_0_1_0;
        LOC2(store,  0,  2, STOREDIM, STOREDIM) = x_0_2_0;
        LOC2(store,  0,  3, STOREDIM, STOREDIM) = x_0_3_0;
                            //}
        if ((I+J) >=  0 && (K+L)>= 2) {
            // Subroutine for L =            0  B =            1 , m=           1
            QUICKDouble x_0_1_1 = Qtempx * VY( 0, 0, 1) + WQtempx * VY( 0, 0, 2);
            QUICKDouble x_0_2_1 = Qtempy * VY( 0, 0, 1) + WQtempy * VY( 0, 0, 2);
            QUICKDouble x_0_3_1 = Qtempz * VY( 0, 0, 1) + WQtempz * VY( 0, 0, 2);
            
            // Subroutine for L =            0  B =            2 , m=           0
            QUICKDouble x_0_4_0 = Qtempx * x_0_2_0 + WQtempx * x_0_2_1;
            QUICKDouble x_0_5_0 = Qtempy * x_0_3_0 + WQtempy * x_0_3_1;
            QUICKDouble x_0_6_0 = Qtempx * x_0_3_0 + WQtempx * x_0_3_1;
            QUICKDouble x_0_7_0 = Qtempx * x_0_1_0 + WQtempx * x_0_1_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
            QUICKDouble x_0_8_0 = Qtempy * x_0_2_0 + WQtempy * x_0_2_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
            QUICKDouble x_0_9_0 = Qtempz * x_0_3_0 + WQtempz * x_0_3_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
            
            // WRITE LAST FOR I =            0  J=           2
            LOC2(store,  0,  4, STOREDIM, STOREDIM) = x_0_4_0;
            LOC2(store,  0,  5, STOREDIM, STOREDIM) = x_0_5_0;
            LOC2(store,  0,  6, STOREDIM, STOREDIM) = x_0_6_0;
            LOC2(store,  0,  7, STOREDIM, STOREDIM) = x_0_7_0;
            LOC2(store,  0,  8, STOREDIM, STOREDIM) = x_0_8_0;
            LOC2(store,  0,  9, STOREDIM, STOREDIM) = x_0_9_0;
            if ((I+J) >=  0 && (K+L)>= 3) {
                // Subroutine for L =            0  B =            1 , m=           2
                QUICKDouble x_0_1_2 = Qtempx * VY( 0, 0, 2) + WQtempx * VY( 0, 0, 3);
                QUICKDouble x_0_2_2 = Qtempy * VY( 0, 0, 2) + WQtempy * VY( 0, 0, 3);
                QUICKDouble x_0_3_2 = Qtempz * VY( 0, 0, 2) + WQtempz * VY( 0, 0, 3);
                
                // Subroutine for L =            0  B =            2 , m=           1
                QUICKDouble x_0_4_1 = Qtempx * x_0_2_1 + WQtempx * x_0_2_2;
                QUICKDouble x_0_5_1 = Qtempy * x_0_3_1 + WQtempy * x_0_3_2;
                QUICKDouble x_0_6_1 = Qtempx * x_0_3_1 + WQtempx * x_0_3_2;
                QUICKDouble x_0_7_1 = Qtempx * x_0_1_1 + WQtempx * x_0_1_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                QUICKDouble x_0_8_1 = Qtempy * x_0_2_1 + WQtempy * x_0_2_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                QUICKDouble x_0_9_1 = Qtempz * x_0_3_1 + WQtempz * x_0_3_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                
                // Subroutine for L =            0  B =            3 , m=           0
                QUICKDouble x_0_10_0 = Qtempx * x_0_5_0 + WQtempx * x_0_5_1;
                QUICKDouble x_0_11_0 = Qtempx * x_0_4_0 + WQtempx * x_0_4_1 + CDtemp * (x_0_2_0 -  ABcom * x_0_2_1);
                QUICKDouble x_0_12_0 = Qtempx * x_0_8_0 + WQtempx * x_0_8_1;
                QUICKDouble x_0_13_0 = Qtempx * x_0_6_0 + WQtempx * x_0_6_1 + CDtemp * (x_0_3_0 -  ABcom * x_0_3_1);
                QUICKDouble x_0_14_0 = Qtempx * x_0_9_0 + WQtempx * x_0_9_1;
                QUICKDouble x_0_15_0 = Qtempy * x_0_5_0 + WQtempy * x_0_5_1 + CDtemp * (x_0_3_0 -  ABcom * x_0_3_1);
                QUICKDouble x_0_16_0 = Qtempy * x_0_9_0 + WQtempy * x_0_9_1;
                QUICKDouble x_0_17_0 = Qtempx * x_0_7_0 + WQtempx * x_0_7_1 + CDtemp * 2 * (x_0_1_0 -  ABcom * x_0_1_1);
                QUICKDouble x_0_18_0 = Qtempy * x_0_8_0 + WQtempy * x_0_8_1 + CDtemp * 2 * (x_0_2_0 -  ABcom * x_0_2_1);
                QUICKDouble x_0_19_0 = Qtempz * x_0_9_0 + WQtempz * x_0_9_1 + CDtemp * 2 * (x_0_3_0 -  ABcom * x_0_3_1);
                
                // WRITE LAST FOR I =            0  J=           3
                LOC2(store,  0, 10, STOREDIM, STOREDIM) = x_0_10_0;
                LOC2(store,  0, 11, STOREDIM, STOREDIM) = x_0_11_0;
                LOC2(store,  0, 12, STOREDIM, STOREDIM) = x_0_12_0;
                LOC2(store,  0, 13, STOREDIM, STOREDIM) = x_0_13_0;
                LOC2(store,  0, 14, STOREDIM, STOREDIM) = x_0_14_0;
                LOC2(store,  0, 15, STOREDIM, STOREDIM) = x_0_15_0;
                LOC2(store,  0, 16, STOREDIM, STOREDIM) = x_0_16_0;
                LOC2(store,  0, 17, STOREDIM, STOREDIM) = x_0_17_0;
                LOC2(store,  0, 18, STOREDIM, STOREDIM) = x_0_18_0;
                LOC2(store,  0, 19, STOREDIM, STOREDIM) = x_0_19_0;
                if ((I+J) >=  0 && (K+L)>= 4) {
                    // Subroutine for L =            0  B =            1 , m=           3
                    QUICKDouble x_0_1_3 = Qtempx * VY( 0, 0, 3) + WQtempx * VY( 0, 0, 4);
                    QUICKDouble x_0_2_3 = Qtempy * VY( 0, 0, 3) + WQtempy * VY( 0, 0, 4);
                    QUICKDouble x_0_3_3 = Qtempz * VY( 0, 0, 3) + WQtempz * VY( 0, 0, 4);
                    
                    // Subroutine for L =            0  B =            2 , m=           2
                    QUICKDouble x_0_4_2 = Qtempx * x_0_2_2 + WQtempx * x_0_2_3;
                    QUICKDouble x_0_5_2 = Qtempy * x_0_3_2 + WQtempy * x_0_3_3;
                    QUICKDouble x_0_6_2 = Qtempx * x_0_3_2 + WQtempx * x_0_3_3;
                    QUICKDouble x_0_7_2 = Qtempx * x_0_1_2 + WQtempx * x_0_1_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    QUICKDouble x_0_8_2 = Qtempy * x_0_2_2 + WQtempy * x_0_2_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    QUICKDouble x_0_9_2 = Qtempz * x_0_3_2 + WQtempz * x_0_3_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    
                    // Subroutine for L =            0  B =            3 , m=           1
                    QUICKDouble x_0_10_1 = Qtempx * x_0_5_1 + WQtempx * x_0_5_2;
                    QUICKDouble x_0_11_1 = Qtempx * x_0_4_1 + WQtempx * x_0_4_2 + CDtemp * (x_0_2_1 -  ABcom * x_0_2_2);
                    QUICKDouble x_0_12_1 = Qtempx * x_0_8_1 + WQtempx * x_0_8_2;
                    QUICKDouble x_0_13_1 = Qtempx * x_0_6_1 + WQtempx * x_0_6_2 + CDtemp * (x_0_3_1 -  ABcom * x_0_3_2);
                    QUICKDouble x_0_14_1 = Qtempx * x_0_9_1 + WQtempx * x_0_9_2;
                    QUICKDouble x_0_15_1 = Qtempy * x_0_5_1 + WQtempy * x_0_5_2 + CDtemp * (x_0_3_1 -  ABcom * x_0_3_2);
                    QUICKDouble x_0_16_1 = Qtempy * x_0_9_1 + WQtempy * x_0_9_2;
                    QUICKDouble x_0_17_1 = Qtempx * x_0_7_1 + WQtempx * x_0_7_2 + CDtemp * 2 * (x_0_1_1 -  ABcom * x_0_1_2);
                    QUICKDouble x_0_18_1 = Qtempy * x_0_8_1 + WQtempy * x_0_8_2 + CDtemp * 2 * (x_0_2_1 -  ABcom * x_0_2_2);
                    QUICKDouble x_0_19_1 = Qtempz * x_0_9_1 + WQtempz * x_0_9_2 + CDtemp * 2 * (x_0_3_1 -  ABcom * x_0_3_2);
                    
                    // Subroutine for L =            0  B =            4 , m=           0
                    QUICKDouble x_0_20_0 = Qtempx * x_0_12_0 + WQtempx * x_0_12_1 + CDtemp * (x_0_8_0 -  ABcom * x_0_8_1);
                    QUICKDouble x_0_21_0 = Qtempx * x_0_14_0 + WQtempx * x_0_14_1 + CDtemp * (x_0_9_0 -  ABcom * x_0_9_1);
                    QUICKDouble x_0_22_0 = Qtempy * x_0_16_0 + WQtempy * x_0_16_1 + CDtemp * (x_0_9_0 -  ABcom * x_0_9_1);
                    QUICKDouble x_0_23_0 = Qtempx * x_0_10_0 + WQtempx * x_0_10_1 + CDtemp * (x_0_5_0 -  ABcom * x_0_5_1);
                    QUICKDouble x_0_24_0 = Qtempx * x_0_15_0 + WQtempx * x_0_15_1;
                    QUICKDouble x_0_25_0 = Qtempx * x_0_16_0 + WQtempx * x_0_16_1;
                    QUICKDouble x_0_26_0 = Qtempx * x_0_13_0 + WQtempx * x_0_13_1 + CDtemp * 2 * (x_0_6_0 -  ABcom * x_0_6_1);
                    QUICKDouble x_0_27_0 = Qtempx * x_0_19_0 + WQtempx * x_0_19_1;
                    QUICKDouble x_0_28_0 = Qtempx * x_0_11_0 + WQtempx * x_0_11_1 + CDtemp * 2 * (x_0_4_0 -  ABcom * x_0_4_1);
                    QUICKDouble x_0_29_0 = Qtempx * x_0_18_0 + WQtempx * x_0_18_1;
                    QUICKDouble x_0_30_0 = Qtempy * x_0_15_0 + WQtempy * x_0_15_1 + CDtemp * 2 * (x_0_5_0 -  ABcom * x_0_5_1);
                    QUICKDouble x_0_31_0 = Qtempy * x_0_19_0 + WQtempy * x_0_19_1;
                    QUICKDouble x_0_32_0 = Qtempx * x_0_17_0 + WQtempx * x_0_17_1 + CDtemp * 3 * (x_0_7_0 -  ABcom * x_0_7_1);
                    QUICKDouble x_0_33_0 = Qtempy * x_0_18_0 + WQtempy * x_0_18_1 + CDtemp * 3 * (x_0_8_0 -  ABcom * x_0_8_1);
                    QUICKDouble x_0_34_0 = Qtempz * x_0_19_0 + WQtempz * x_0_19_1 + CDtemp * 3 * (x_0_9_0 -  ABcom * x_0_9_1);
                    
                    // WRITE LAST FOR I =            0  J=           4
                    LOC2(store,  0, 20, STOREDIM, STOREDIM) = x_0_20_0;
                    LOC2(store,  0, 21, STOREDIM, STOREDIM) = x_0_21_0;
                    LOC2(store,  0, 22, STOREDIM, STOREDIM) = x_0_22_0;
                    LOC2(store,  0, 23, STOREDIM, STOREDIM) = x_0_23_0;
                    LOC2(store,  0, 24, STOREDIM, STOREDIM) = x_0_24_0;
                    LOC2(store,  0, 25, STOREDIM, STOREDIM) = x_0_25_0;
                    LOC2(store,  0, 26, STOREDIM, STOREDIM) = x_0_26_0;
                    LOC2(store,  0, 27, STOREDIM, STOREDIM) = x_0_27_0;
                    LOC2(store,  0, 28, STOREDIM, STOREDIM) = x_0_28_0;
                    LOC2(store,  0, 29, STOREDIM, STOREDIM) = x_0_29_0;
                    LOC2(store,  0, 30, STOREDIM, STOREDIM) = x_0_30_0;
                    LOC2(store,  0, 31, STOREDIM, STOREDIM) = x_0_31_0;
                    LOC2(store,  0, 32, STOREDIM, STOREDIM) = x_0_32_0;
                    LOC2(store,  0, 33, STOREDIM, STOREDIM) = x_0_33_0;
                    LOC2(store,  0, 34, STOREDIM, STOREDIM) = x_0_34_0;
                }
            }
        }
    }
    if ((I+J) >=  1 && (K+L)>= 0) {
        // Subroutine for L =            1  B =            0 , m=           0
        QUICKDouble x_1_0_0 = Ptempx * VY( 0, 0, 0) + WPtempx * VY( 0, 0, 1);
        QUICKDouble x_2_0_0 = Ptempy * VY( 0, 0, 0) + WPtempy * VY( 0, 0, 1);
        QUICKDouble x_3_0_0 = Ptempz * VY( 0, 0, 0) + WPtempz * VY( 0, 0, 1);
        // WRITE LAST FOR I =            1  J=           0
        LOC2(store,  1,  0, STOREDIM, STOREDIM) = x_1_0_0;
        LOC2(store,  2,  0, STOREDIM, STOREDIM) = x_2_0_0;
        LOC2(store,  3,  0, STOREDIM, STOREDIM) = x_3_0_0;
        if ((I+J) >=  1 && (K+L)>= 1) {
            // Subroutine for L =            0  B =            1 , m=           0
            QUICKDouble x_0_1_0 = Qtempx * VY( 0, 0, 0) + WQtempx * VY( 0, 0, 1);
            QUICKDouble x_0_2_0 = Qtempy * VY( 0, 0, 0) + WQtempy * VY( 0, 0, 1);
            QUICKDouble x_0_3_0 = Qtempz * VY( 0, 0, 0) + WQtempz * VY( 0, 0, 1);
            
            // Subroutine for L =            0  B =            1 , m=           1
            QUICKDouble x_0_1_1 = Qtempx * VY( 0, 0, 1) + WQtempx * VY( 0, 0, 2);
            QUICKDouble x_0_2_1 = Qtempy * VY( 0, 0, 1) + WQtempy * VY( 0, 0, 2);
            QUICKDouble x_0_3_1 = Qtempz * VY( 0, 0, 1) + WQtempz * VY( 0, 0, 2);
            
            // Subroutine for L =            1  B =            1 , m=           0
            
            // WRITE LAST FOR I =            1  J=           1
            LOC2(store,  1,  1, STOREDIM, STOREDIM) = (  Ptempx * x_0_1_0 + WPtempx * x_0_1_1 + ABCDtemp * VY( 0, 0, 1));
            LOC2(store,  1,  2, STOREDIM, STOREDIM) = (  Ptempx * x_0_2_0 + WPtempx * x_0_2_1);
            LOC2(store,  1,  3, STOREDIM, STOREDIM) = (  Ptempx * x_0_3_0 + WPtempx * x_0_3_1);
            LOC2(store,  2,  1, STOREDIM, STOREDIM) = (  Ptempy * x_0_1_0 + WPtempy * x_0_1_1);
            LOC2(store,  2,  2, STOREDIM, STOREDIM) = (  Ptempy * x_0_2_0 + WPtempy * x_0_2_1 + ABCDtemp * VY( 0, 0, 1));
            LOC2(store,  2,  3, STOREDIM, STOREDIM) = (  Ptempy * x_0_3_0 + WPtempy * x_0_3_1);
            LOC2(store,  3,  1, STOREDIM, STOREDIM) = (  Ptempz * x_0_1_0 + WPtempz * x_0_1_1);
            LOC2(store,  3,  2, STOREDIM, STOREDIM) = (  Ptempz * x_0_2_0 + WPtempz * x_0_2_1);
            LOC2(store,  3,  3, STOREDIM, STOREDIM) = (  Ptempz * x_0_3_0 + WPtempz * x_0_3_1 + ABCDtemp * VY( 0, 0, 1));
            if ((I+J) >=  1 && (K+L)>= 2) {
                // Subroutine for L =            0  B =            1 , m=           2
                QUICKDouble x_0_1_2 = Qtempx * VY( 0, 0, 2) + WQtempx * VY( 0, 0, 3);
                QUICKDouble x_0_2_2 = Qtempy * VY( 0, 0, 2) + WQtempy * VY( 0, 0, 3);
                QUICKDouble x_0_3_2 = Qtempz * VY( 0, 0, 2) + WQtempz * VY( 0, 0, 3);
                
                // Subroutine for L =            0  B =            2 , m=           0
                QUICKDouble x_0_4_0 = Qtempx * x_0_2_0 + WQtempx * x_0_2_1;
                QUICKDouble x_0_5_0 = Qtempy * x_0_3_0 + WQtempy * x_0_3_1;
                QUICKDouble x_0_6_0 = Qtempx * x_0_3_0 + WQtempx * x_0_3_1;
                QUICKDouble x_0_7_0 = Qtempx * x_0_1_0 + WQtempx * x_0_1_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                QUICKDouble x_0_8_0 = Qtempy * x_0_2_0 + WQtempy * x_0_2_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                QUICKDouble x_0_9_0 = Qtempz * x_0_3_0 + WQtempz * x_0_3_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                
                // Subroutine for L =            0  B =            2 , m=           1
                QUICKDouble x_0_4_1 = Qtempx * x_0_2_1 + WQtempx * x_0_2_2;
                QUICKDouble x_0_5_1 = Qtempy * x_0_3_1 + WQtempy * x_0_3_2;
                QUICKDouble x_0_6_1 = Qtempx * x_0_3_1 + WQtempx * x_0_3_2;
                QUICKDouble x_0_7_1 = Qtempx * x_0_1_1 + WQtempx * x_0_1_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                QUICKDouble x_0_8_1 = Qtempy * x_0_2_1 + WQtempy * x_0_2_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                QUICKDouble x_0_9_1 = Qtempz * x_0_3_1 + WQtempz * x_0_3_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                
                // Subroutine for L =            1  B =            2 , m=           0
                QUICKDouble x_1_4_0 = Ptempx * x_0_4_0 + WPtempx * x_0_4_1 + ABCDtemp * x_0_2_1;
                QUICKDouble x_1_5_0 = Ptempx * x_0_5_0 + WPtempx * x_0_5_1;
                QUICKDouble x_1_6_0 = Ptempx * x_0_6_0 + WPtempx * x_0_6_1 + ABCDtemp * x_0_3_1;
                QUICKDouble x_1_7_0 = Ptempx * x_0_7_0 + WPtempx * x_0_7_1 + 2 * ABCDtemp * x_0_1_1;
                QUICKDouble x_1_8_0 = Ptempx * x_0_8_0 + WPtempx * x_0_8_1;
                QUICKDouble x_1_9_0 = Ptempx * x_0_9_0 + WPtempx * x_0_9_1;
                QUICKDouble x_2_4_0 = Ptempy * x_0_4_0 + WPtempy * x_0_4_1 + ABCDtemp * x_0_1_1;
                QUICKDouble x_2_5_0 = Ptempy * x_0_5_0 + WPtempy * x_0_5_1 + ABCDtemp * x_0_3_1;
                QUICKDouble x_2_6_0 = Ptempy * x_0_6_0 + WPtempy * x_0_6_1;
                QUICKDouble x_2_7_0 = Ptempy * x_0_7_0 + WPtempy * x_0_7_1;
                QUICKDouble x_2_8_0 = Ptempy * x_0_8_0 + WPtempy * x_0_8_1 + 2 * ABCDtemp * x_0_2_1;
                QUICKDouble x_2_9_0 = Ptempy * x_0_9_0 + WPtempy * x_0_9_1;
                QUICKDouble x_3_4_0 = Ptempz * x_0_4_0 + WPtempz * x_0_4_1;
                QUICKDouble x_3_5_0 = Ptempz * x_0_5_0 + WPtempz * x_0_5_1 + ABCDtemp * x_0_2_1;
                QUICKDouble x_3_6_0 = Ptempz * x_0_6_0 + WPtempz * x_0_6_1 + ABCDtemp * x_0_1_1;
                QUICKDouble x_3_7_0 = Ptempz * x_0_7_0 + WPtempz * x_0_7_1;
                QUICKDouble x_3_8_0 = Ptempz * x_0_8_0 + WPtempz * x_0_8_1;
                QUICKDouble x_3_9_0 = Ptempz * x_0_9_0 + WPtempz * x_0_9_1 + 2 * ABCDtemp * x_0_3_1;
                
                // WRITE LAST FOR I =            1  J=           2
                LOC2(store,  1,  4, STOREDIM, STOREDIM) = x_1_4_0;
                LOC2(store,  1,  5, STOREDIM, STOREDIM) = x_1_5_0;
                LOC2(store,  1,  6, STOREDIM, STOREDIM) = x_1_6_0;
                LOC2(store,  1,  7, STOREDIM, STOREDIM) = x_1_7_0;
                LOC2(store,  1,  8, STOREDIM, STOREDIM) = x_1_8_0;
                LOC2(store,  1,  9, STOREDIM, STOREDIM) = x_1_9_0;
                LOC2(store,  2,  4, STOREDIM, STOREDIM) = x_2_4_0;
                LOC2(store,  2,  5, STOREDIM, STOREDIM) = x_2_5_0;
                LOC2(store,  2,  6, STOREDIM, STOREDIM) = x_2_6_0;
                LOC2(store,  2,  7, STOREDIM, STOREDIM) = x_2_7_0;
                LOC2(store,  2,  8, STOREDIM, STOREDIM) = x_2_8_0;
                LOC2(store,  2,  9, STOREDIM, STOREDIM) = x_2_9_0;
                LOC2(store,  3,  4, STOREDIM, STOREDIM) = x_3_4_0;
                LOC2(store,  3,  5, STOREDIM, STOREDIM) = x_3_5_0;
                LOC2(store,  3,  6, STOREDIM, STOREDIM) = x_3_6_0;
                LOC2(store,  3,  7, STOREDIM, STOREDIM) = x_3_7_0;
                LOC2(store,  3,  8, STOREDIM, STOREDIM) = x_3_8_0;
                LOC2(store,  3,  9, STOREDIM, STOREDIM) = x_3_9_0;
                if ((I+J) >=  1 && (K+L)>= 3) {
                    // Subroutine for L =            0  B =            1 , m=           3
                    QUICKDouble x_0_1_3 = Qtempx * VY( 0, 0, 3) + WQtempx * VY( 0, 0, 4);
                    QUICKDouble x_0_2_3 = Qtempy * VY( 0, 0, 3) + WQtempy * VY( 0, 0, 4);
                    QUICKDouble x_0_3_3 = Qtempz * VY( 0, 0, 3) + WQtempz * VY( 0, 0, 4);
                    
                    // Subroutine for L =            0  B =            2 , m=           2
                    QUICKDouble x_0_4_2 = Qtempx * x_0_2_2 + WQtempx * x_0_2_3;
                    QUICKDouble x_0_5_2 = Qtempy * x_0_3_2 + WQtempy * x_0_3_3;
                    QUICKDouble x_0_6_2 = Qtempx * x_0_3_2 + WQtempx * x_0_3_3;
                    QUICKDouble x_0_7_2 = Qtempx * x_0_1_2 + WQtempx * x_0_1_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    QUICKDouble x_0_8_2 = Qtempy * x_0_2_2 + WQtempy * x_0_2_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    QUICKDouble x_0_9_2 = Qtempz * x_0_3_2 + WQtempz * x_0_3_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    
                    // Subroutine for L =            0  B =            3 , m=           0
                    QUICKDouble x_0_10_0 = Qtempx * x_0_5_0 + WQtempx * x_0_5_1;
                    QUICKDouble x_0_11_0 = Qtempx * x_0_4_0 + WQtempx * x_0_4_1 + CDtemp * (x_0_2_0 -  ABcom * x_0_2_1);
                    QUICKDouble x_0_12_0 = Qtempx * x_0_8_0 + WQtempx * x_0_8_1;
                    QUICKDouble x_0_13_0 = Qtempx * x_0_6_0 + WQtempx * x_0_6_1 + CDtemp * (x_0_3_0 -  ABcom * x_0_3_1);
                    QUICKDouble x_0_14_0 = Qtempx * x_0_9_0 + WQtempx * x_0_9_1;
                    QUICKDouble x_0_15_0 = Qtempy * x_0_5_0 + WQtempy * x_0_5_1 + CDtemp * (x_0_3_0 -  ABcom * x_0_3_1);
                    QUICKDouble x_0_16_0 = Qtempy * x_0_9_0 + WQtempy * x_0_9_1;
                    QUICKDouble x_0_17_0 = Qtempx * x_0_7_0 + WQtempx * x_0_7_1 + CDtemp * 2 * (x_0_1_0 -  ABcom * x_0_1_1);
                    QUICKDouble x_0_18_0 = Qtempy * x_0_8_0 + WQtempy * x_0_8_1 + CDtemp * 2 * (x_0_2_0 -  ABcom * x_0_2_1);
                    QUICKDouble x_0_19_0 = Qtempz * x_0_9_0 + WQtempz * x_0_9_1 + CDtemp * 2 * (x_0_3_0 -  ABcom * x_0_3_1);
                    
                    // Subroutine for L =            0  B =            3 , m=           1
                    QUICKDouble x_0_10_1 = Qtempx * x_0_5_1 + WQtempx * x_0_5_2;
                    QUICKDouble x_0_11_1 = Qtempx * x_0_4_1 + WQtempx * x_0_4_2 + CDtemp * (x_0_2_1 -  ABcom * x_0_2_2);
                    QUICKDouble x_0_12_1 = Qtempx * x_0_8_1 + WQtempx * x_0_8_2;
                    QUICKDouble x_0_13_1 = Qtempx * x_0_6_1 + WQtempx * x_0_6_2 + CDtemp * (x_0_3_1 -  ABcom * x_0_3_2);
                    QUICKDouble x_0_14_1 = Qtempx * x_0_9_1 + WQtempx * x_0_9_2;
                    QUICKDouble x_0_15_1 = Qtempy * x_0_5_1 + WQtempy * x_0_5_2 + CDtemp * (x_0_3_1 -  ABcom * x_0_3_2);
                    QUICKDouble x_0_16_1 = Qtempy * x_0_9_1 + WQtempy * x_0_9_2;
                    QUICKDouble x_0_17_1 = Qtempx * x_0_7_1 + WQtempx * x_0_7_2 + CDtemp * 2 * (x_0_1_1 -  ABcom * x_0_1_2);
                    QUICKDouble x_0_18_1 = Qtempy * x_0_8_1 + WQtempy * x_0_8_2 + CDtemp * 2 * (x_0_2_1 -  ABcom * x_0_2_2);
                    QUICKDouble x_0_19_1 = Qtempz * x_0_9_1 + WQtempz * x_0_9_2 + CDtemp * 2 * (x_0_3_1 -  ABcom * x_0_3_2);
                    
                    // Subroutine for L =            1  B =            3 , m=           0
                    QUICKDouble x_1_10_0 = Ptempx * x_0_10_0 + WPtempx * x_0_10_1 + ABCDtemp * x_0_5_1;
                    QUICKDouble x_1_11_0 = Ptempx * x_0_11_0 + WPtempx * x_0_11_1 + 2 * ABCDtemp * x_0_4_1;
                    QUICKDouble x_1_12_0 = Ptempx * x_0_12_0 + WPtempx * x_0_12_1 + ABCDtemp * x_0_8_1;
                    QUICKDouble x_1_13_0 = Ptempx * x_0_13_0 + WPtempx * x_0_13_1 + 2 * ABCDtemp * x_0_6_1;
                    QUICKDouble x_1_14_0 = Ptempx * x_0_14_0 + WPtempx * x_0_14_1 + ABCDtemp * x_0_9_1;
                    QUICKDouble x_1_15_0 = Ptempx * x_0_15_0 + WPtempx * x_0_15_1;
                    QUICKDouble x_1_16_0 = Ptempx * x_0_16_0 + WPtempx * x_0_16_1;
                    QUICKDouble x_1_17_0 = Ptempx * x_0_17_0 + WPtempx * x_0_17_1 + 3 * ABCDtemp * x_0_7_1;
                    QUICKDouble x_1_18_0 = Ptempx * x_0_18_0 + WPtempx * x_0_18_1;
                    QUICKDouble x_1_19_0 = Ptempx * x_0_19_0 + WPtempx * x_0_19_1;
                    QUICKDouble x_2_10_0 = Ptempy * x_0_10_0 + WPtempy * x_0_10_1 + ABCDtemp * x_0_6_1;
                    QUICKDouble x_2_11_0 = Ptempy * x_0_11_0 + WPtempy * x_0_11_1 + ABCDtemp * x_0_7_1;
                    QUICKDouble x_2_12_0 = Ptempy * x_0_12_0 + WPtempy * x_0_12_1 + 2 * ABCDtemp * x_0_4_1;
                    QUICKDouble x_2_13_0 = Ptempy * x_0_13_0 + WPtempy * x_0_13_1;
                    QUICKDouble x_2_14_0 = Ptempy * x_0_14_0 + WPtempy * x_0_14_1;
                    QUICKDouble x_2_15_0 = Ptempy * x_0_15_0 + WPtempy * x_0_15_1 + 2 * ABCDtemp * x_0_5_1;
                    QUICKDouble x_2_16_0 = Ptempy * x_0_16_0 + WPtempy * x_0_16_1 + ABCDtemp * x_0_9_1;
                    QUICKDouble x_2_17_0 = Ptempy * x_0_17_0 + WPtempy * x_0_17_1;
                    QUICKDouble x_2_18_0 = Ptempy * x_0_18_0 + WPtempy * x_0_18_1 + 3 * ABCDtemp * x_0_8_1;
                    QUICKDouble x_2_19_0 = Ptempy * x_0_19_0 + WPtempy * x_0_19_1;
                    QUICKDouble x_3_10_0 = Ptempz * x_0_10_0 + WPtempz * x_0_10_1 + ABCDtemp * x_0_4_1;
                    QUICKDouble x_3_11_0 = Ptempz * x_0_11_0 + WPtempz * x_0_11_1;
                    QUICKDouble x_3_12_0 = Ptempz * x_0_12_0 + WPtempz * x_0_12_1;
                    QUICKDouble x_3_13_0 = Ptempz * x_0_13_0 + WPtempz * x_0_13_1 + ABCDtemp * x_0_7_1;
                    QUICKDouble x_3_14_0 = Ptempz * x_0_14_0 + WPtempz * x_0_14_1 + 2 * ABCDtemp * x_0_6_1;
                    QUICKDouble x_3_15_0 = Ptempz * x_0_15_0 + WPtempz * x_0_15_1 + ABCDtemp * x_0_8_1;
                    QUICKDouble x_3_16_0 = Ptempz * x_0_16_0 + WPtempz * x_0_16_1 + 2 * ABCDtemp * x_0_5_1;
                    QUICKDouble x_3_17_0 = Ptempz * x_0_17_0 + WPtempz * x_0_17_1;
                    QUICKDouble x_3_18_0 = Ptempz * x_0_18_0 + WPtempz * x_0_18_1;
                    QUICKDouble x_3_19_0 = Ptempz * x_0_19_0 + WPtempz * x_0_19_1 + 3 * ABCDtemp * x_0_9_1;
                    
                    // WRITE LAST FOR I =            1  J=           3
                    LOC2(store,  1, 10, STOREDIM, STOREDIM) = x_1_10_0;
                    LOC2(store,  1, 11, STOREDIM, STOREDIM) = x_1_11_0;
                    LOC2(store,  1, 12, STOREDIM, STOREDIM) = x_1_12_0;
                    LOC2(store,  1, 13, STOREDIM, STOREDIM) = x_1_13_0;
                    LOC2(store,  1, 14, STOREDIM, STOREDIM) = x_1_14_0;
                    LOC2(store,  1, 15, STOREDIM, STOREDIM) = x_1_15_0;
                    LOC2(store,  1, 16, STOREDIM, STOREDIM) = x_1_16_0;
                    LOC2(store,  1, 17, STOREDIM, STOREDIM) = x_1_17_0;
                    LOC2(store,  1, 18, STOREDIM, STOREDIM) = x_1_18_0;
                    LOC2(store,  1, 19, STOREDIM, STOREDIM) = x_1_19_0;
                    LOC2(store,  2, 10, STOREDIM, STOREDIM) = x_2_10_0;
                    LOC2(store,  2, 11, STOREDIM, STOREDIM) = x_2_11_0;
                    LOC2(store,  2, 12, STOREDIM, STOREDIM) = x_2_12_0;
                    LOC2(store,  2, 13, STOREDIM, STOREDIM) = x_2_13_0;
                    LOC2(store,  2, 14, STOREDIM, STOREDIM) = x_2_14_0;
                    LOC2(store,  2, 15, STOREDIM, STOREDIM) = x_2_15_0;
                    LOC2(store,  2, 16, STOREDIM, STOREDIM) = x_2_16_0;
                    LOC2(store,  2, 17, STOREDIM, STOREDIM) = x_2_17_0;
                    LOC2(store,  2, 18, STOREDIM, STOREDIM) = x_2_18_0;
                    LOC2(store,  2, 19, STOREDIM, STOREDIM) = x_2_19_0;
                    LOC2(store,  3, 10, STOREDIM, STOREDIM) = x_3_10_0;
                    LOC2(store,  3, 11, STOREDIM, STOREDIM) = x_3_11_0;
                    LOC2(store,  3, 12, STOREDIM, STOREDIM) = x_3_12_0;
                    LOC2(store,  3, 13, STOREDIM, STOREDIM) = x_3_13_0;
                    LOC2(store,  3, 14, STOREDIM, STOREDIM) = x_3_14_0;
                    LOC2(store,  3, 15, STOREDIM, STOREDIM) = x_3_15_0;
                    LOC2(store,  3, 16, STOREDIM, STOREDIM) = x_3_16_0;
                    LOC2(store,  3, 17, STOREDIM, STOREDIM) = x_3_17_0;
                    LOC2(store,  3, 18, STOREDIM, STOREDIM) = x_3_18_0;
                    LOC2(store,  3, 19, STOREDIM, STOREDIM) = x_3_19_0;
                    if ((I+J) >=  1 && (K+L)>= 4) {
                        // Subroutine for L =            0  B =            1 , m=           4
                        QUICKDouble x_0_1_4 = Qtempx * VY( 0, 0, 4) + WQtempx * VY( 0, 0, 5);
                        QUICKDouble x_0_2_4 = Qtempy * VY( 0, 0, 4) + WQtempy * VY( 0, 0, 5);
                        QUICKDouble x_0_3_4 = Qtempz * VY( 0, 0, 4) + WQtempz * VY( 0, 0, 5);
                        
                        // Subroutine for L =            0  B =            2 , m=           3
                        QUICKDouble x_0_4_3 = Qtempx * x_0_2_3 + WQtempx * x_0_2_4;
                        QUICKDouble x_0_5_3 = Qtempy * x_0_3_3 + WQtempy * x_0_3_4;
                        QUICKDouble x_0_6_3 = Qtempx * x_0_3_3 + WQtempx * x_0_3_4;
                        QUICKDouble x_0_7_3 = Qtempx * x_0_1_3 + WQtempx * x_0_1_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                        QUICKDouble x_0_8_3 = Qtempy * x_0_2_3 + WQtempy * x_0_2_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                        QUICKDouble x_0_9_3 = Qtempz * x_0_3_3 + WQtempz * x_0_3_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                        
                        // Subroutine for L =            0  B =            3 , m=           2
                        QUICKDouble x_0_10_2 = Qtempx * x_0_5_2 + WQtempx * x_0_5_3;
                        QUICKDouble x_0_11_2 = Qtempx * x_0_4_2 + WQtempx * x_0_4_3 + CDtemp * (x_0_2_2 -  ABcom * x_0_2_3);
                        QUICKDouble x_0_12_2 = Qtempx * x_0_8_2 + WQtempx * x_0_8_3;
                        QUICKDouble x_0_13_2 = Qtempx * x_0_6_2 + WQtempx * x_0_6_3 + CDtemp * (x_0_3_2 -  ABcom * x_0_3_3);
                        QUICKDouble x_0_14_2 = Qtempx * x_0_9_2 + WQtempx * x_0_9_3;
                        QUICKDouble x_0_15_2 = Qtempy * x_0_5_2 + WQtempy * x_0_5_3 + CDtemp * (x_0_3_2 -  ABcom * x_0_3_3);
                        QUICKDouble x_0_16_2 = Qtempy * x_0_9_2 + WQtempy * x_0_9_3;
                        QUICKDouble x_0_17_2 = Qtempx * x_0_7_2 + WQtempx * x_0_7_3 + CDtemp * 2 * (x_0_1_2 -  ABcom * x_0_1_3);
                        QUICKDouble x_0_18_2 = Qtempy * x_0_8_2 + WQtempy * x_0_8_3 + CDtemp * 2 * (x_0_2_2 -  ABcom * x_0_2_3);
                        QUICKDouble x_0_19_2 = Qtempz * x_0_9_2 + WQtempz * x_0_9_3 + CDtemp * 2 * (x_0_3_2 -  ABcom * x_0_3_3);
                        
                        // Subroutine for L =            0  B =            4 , m=           0
                        QUICKDouble x_0_20_0 = Qtempx * x_0_12_0 + WQtempx * x_0_12_1 + CDtemp * (x_0_8_0 -  ABcom * x_0_8_1);
                        QUICKDouble x_0_21_0 = Qtempx * x_0_14_0 + WQtempx * x_0_14_1 + CDtemp * (x_0_9_0 -  ABcom * x_0_9_1);
                        QUICKDouble x_0_22_0 = Qtempy * x_0_16_0 + WQtempy * x_0_16_1 + CDtemp * (x_0_9_0 -  ABcom * x_0_9_1);
                        QUICKDouble x_0_23_0 = Qtempx * x_0_10_0 + WQtempx * x_0_10_1 + CDtemp * (x_0_5_0 -  ABcom * x_0_5_1);
                        QUICKDouble x_0_24_0 = Qtempx * x_0_15_0 + WQtempx * x_0_15_1;
                        QUICKDouble x_0_25_0 = Qtempx * x_0_16_0 + WQtempx * x_0_16_1;
                        QUICKDouble x_0_26_0 = Qtempx * x_0_13_0 + WQtempx * x_0_13_1 + CDtemp * 2 * (x_0_6_0 -  ABcom * x_0_6_1);
                        QUICKDouble x_0_27_0 = Qtempx * x_0_19_0 + WQtempx * x_0_19_1;
                        QUICKDouble x_0_28_0 = Qtempx * x_0_11_0 + WQtempx * x_0_11_1 + CDtemp * 2 * (x_0_4_0 -  ABcom * x_0_4_1);
                        QUICKDouble x_0_29_0 = Qtempx * x_0_18_0 + WQtempx * x_0_18_1;
                        QUICKDouble x_0_30_0 = Qtempy * x_0_15_0 + WQtempy * x_0_15_1 + CDtemp * 2 * (x_0_5_0 -  ABcom * x_0_5_1);
                        QUICKDouble x_0_31_0 = Qtempy * x_0_19_0 + WQtempy * x_0_19_1;
                        QUICKDouble x_0_32_0 = Qtempx * x_0_17_0 + WQtempx * x_0_17_1 + CDtemp * 3 * (x_0_7_0 -  ABcom * x_0_7_1);
                        QUICKDouble x_0_33_0 = Qtempy * x_0_18_0 + WQtempy * x_0_18_1 + CDtemp * 3 * (x_0_8_0 -  ABcom * x_0_8_1);
                        QUICKDouble x_0_34_0 = Qtempz * x_0_19_0 + WQtempz * x_0_19_1 + CDtemp * 3 * (x_0_9_0 -  ABcom * x_0_9_1);
                        
                        // Subroutine for L =            0  B =            4 , m=           1
                        QUICKDouble x_0_20_1 = Qtempx * x_0_12_1 + WQtempx * x_0_12_2 + CDtemp * (x_0_8_1 -  ABcom * x_0_8_2);
                        QUICKDouble x_0_21_1 = Qtempx * x_0_14_1 + WQtempx * x_0_14_2 + CDtemp * (x_0_9_1 -  ABcom * x_0_9_2);
                        QUICKDouble x_0_22_1 = Qtempy * x_0_16_1 + WQtempy * x_0_16_2 + CDtemp * (x_0_9_1 -  ABcom * x_0_9_2);
                        QUICKDouble x_0_23_1 = Qtempx * x_0_10_1 + WQtempx * x_0_10_2 + CDtemp * (x_0_5_1 -  ABcom * x_0_5_2);
                        QUICKDouble x_0_24_1 = Qtempx * x_0_15_1 + WQtempx * x_0_15_2;
                        QUICKDouble x_0_25_1 = Qtempx * x_0_16_1 + WQtempx * x_0_16_2;
                        QUICKDouble x_0_26_1 = Qtempx * x_0_13_1 + WQtempx * x_0_13_2 + CDtemp * 2 * (x_0_6_1 -  ABcom * x_0_6_2);
                        QUICKDouble x_0_27_1 = Qtempx * x_0_19_1 + WQtempx * x_0_19_2;
                        QUICKDouble x_0_28_1 = Qtempx * x_0_11_1 + WQtempx * x_0_11_2 + CDtemp * 2 * (x_0_4_1 -  ABcom * x_0_4_2);
                        QUICKDouble x_0_29_1 = Qtempx * x_0_18_1 + WQtempx * x_0_18_2;
                        QUICKDouble x_0_30_1 = Qtempy * x_0_15_1 + WQtempy * x_0_15_2 + CDtemp * 2 * (x_0_5_1 -  ABcom * x_0_5_2);
                        QUICKDouble x_0_31_1 = Qtempy * x_0_19_1 + WQtempy * x_0_19_2;
                        QUICKDouble x_0_32_1 = Qtempx * x_0_17_1 + WQtempx * x_0_17_2 + CDtemp * 3 * (x_0_7_1 -  ABcom * x_0_7_2);
                        QUICKDouble x_0_33_1 = Qtempy * x_0_18_1 + WQtempy * x_0_18_2 + CDtemp * 3 * (x_0_8_1 -  ABcom * x_0_8_2);
                        QUICKDouble x_0_34_1 = Qtempz * x_0_19_1 + WQtempz * x_0_19_2 + CDtemp * 3 * (x_0_9_1 -  ABcom * x_0_9_2);
                        
                        // Subroutine for L =            1  B =            4 , m=           0
                        QUICKDouble x_1_20_0 = Ptempx * x_0_20_0 + WPtempx * x_0_20_1 + 2 * ABCDtemp * x_0_12_1;
                        QUICKDouble x_1_21_0 = Ptempx * x_0_21_0 + WPtempx * x_0_21_1 + 2 * ABCDtemp * x_0_14_1;
                        QUICKDouble x_1_22_0 = Ptempx * x_0_22_0 + WPtempx * x_0_22_1;
                        QUICKDouble x_1_23_0 = Ptempx * x_0_23_0 + WPtempx * x_0_23_1 + 2 * ABCDtemp * x_0_10_1;
                        QUICKDouble x_1_24_0 = Ptempx * x_0_24_0 + WPtempx * x_0_24_1 + ABCDtemp * x_0_15_1;
                        QUICKDouble x_1_25_0 = Ptempx * x_0_25_0 + WPtempx * x_0_25_1 + ABCDtemp * x_0_16_1;
                        QUICKDouble x_1_26_0 = Ptempx * x_0_26_0 + WPtempx * x_0_26_1 + 3 * ABCDtemp * x_0_13_1;
                        QUICKDouble x_1_27_0 = Ptempx * x_0_27_0 + WPtempx * x_0_27_1 + ABCDtemp * x_0_19_1;
                        QUICKDouble x_1_28_0 = Ptempx * x_0_28_0 + WPtempx * x_0_28_1 + 3 * ABCDtemp * x_0_11_1;
                        QUICKDouble x_1_29_0 = Ptempx * x_0_29_0 + WPtempx * x_0_29_1 + ABCDtemp * x_0_18_1;
                        QUICKDouble x_1_30_0 = Ptempx * x_0_30_0 + WPtempx * x_0_30_1;
                        QUICKDouble x_1_31_0 = Ptempx * x_0_31_0 + WPtempx * x_0_31_1;
                        QUICKDouble x_1_32_0 = Ptempx * x_0_32_0 + WPtempx * x_0_32_1 + 4 * ABCDtemp * x_0_17_1;
                        QUICKDouble x_1_33_0 = Ptempx * x_0_33_0 + WPtempx * x_0_33_1;
                        QUICKDouble x_1_34_0 = Ptempx * x_0_34_0 + WPtempx * x_0_34_1;
                        QUICKDouble x_2_20_0 = Ptempy * x_0_20_0 + WPtempy * x_0_20_1 + 2 * ABCDtemp * x_0_11_1;
                        QUICKDouble x_2_21_0 = Ptempy * x_0_21_0 + WPtempy * x_0_21_1;
                        QUICKDouble x_2_22_0 = Ptempy * x_0_22_0 + WPtempy * x_0_22_1 + 2 * ABCDtemp * x_0_16_1;
                        QUICKDouble x_2_23_0 = Ptempy * x_0_23_0 + WPtempy * x_0_23_1 + ABCDtemp * x_0_13_1;
                        QUICKDouble x_2_24_0 = Ptempy * x_0_24_0 + WPtempy * x_0_24_1 + 2 * ABCDtemp * x_0_10_1;
                        QUICKDouble x_2_25_0 = Ptempy * x_0_25_0 + WPtempy * x_0_25_1 + ABCDtemp * x_0_14_1;
                        QUICKDouble x_2_26_0 = Ptempy * x_0_26_0 + WPtempy * x_0_26_1;
                        QUICKDouble x_2_27_0 = Ptempy * x_0_27_0 + WPtempy * x_0_27_1;
                        QUICKDouble x_2_28_0 = Ptempy * x_0_28_0 + WPtempy * x_0_28_1 + ABCDtemp * x_0_17_1;
                        QUICKDouble x_2_29_0 = Ptempy * x_0_29_0 + WPtempy * x_0_29_1 + 3 * ABCDtemp * x_0_12_1;
                        QUICKDouble x_2_30_0 = Ptempy * x_0_30_0 + WPtempy * x_0_30_1 + 3 * ABCDtemp * x_0_15_1;
                        QUICKDouble x_2_31_0 = Ptempy * x_0_31_0 + WPtempy * x_0_31_1 + ABCDtemp * x_0_19_1;
                        QUICKDouble x_2_32_0 = Ptempy * x_0_32_0 + WPtempy * x_0_32_1;
                        QUICKDouble x_2_33_0 = Ptempy * x_0_33_0 + WPtempy * x_0_33_1 + 4 * ABCDtemp * x_0_18_1;
                        QUICKDouble x_2_34_0 = Ptempy * x_0_34_0 + WPtempy * x_0_34_1;
                        QUICKDouble x_3_20_0 = Ptempz * x_0_20_0 + WPtempz * x_0_20_1;
                        QUICKDouble x_3_21_0 = Ptempz * x_0_21_0 + WPtempz * x_0_21_1 + 2 * ABCDtemp * x_0_13_1;
                        QUICKDouble x_3_22_0 = Ptempz * x_0_22_0 + WPtempz * x_0_22_1 + 2 * ABCDtemp * x_0_15_1;
                        QUICKDouble x_3_23_0 = Ptempz * x_0_23_0 + WPtempz * x_0_23_1 + ABCDtemp * x_0_11_1;
                        QUICKDouble x_3_24_0 = Ptempz * x_0_24_0 + WPtempz * x_0_24_1 + ABCDtemp * x_0_12_1;
                        QUICKDouble x_3_25_0 = Ptempz * x_0_25_0 + WPtempz * x_0_25_1 + 2 * ABCDtemp * x_0_10_1;
                        QUICKDouble x_3_26_0 = Ptempz * x_0_26_0 + WPtempz * x_0_26_1 + ABCDtemp * x_0_17_1;
                        QUICKDouble x_3_27_0 = Ptempz * x_0_27_0 + WPtempz * x_0_27_1 + 3 * ABCDtemp * x_0_14_1;
                        QUICKDouble x_3_28_0 = Ptempz * x_0_28_0 + WPtempz * x_0_28_1;
                        QUICKDouble x_3_29_0 = Ptempz * x_0_29_0 + WPtempz * x_0_29_1;
                        QUICKDouble x_3_30_0 = Ptempz * x_0_30_0 + WPtempz * x_0_30_1 + ABCDtemp * x_0_18_1;
                        QUICKDouble x_3_31_0 = Ptempz * x_0_31_0 + WPtempz * x_0_31_1 + 3 * ABCDtemp * x_0_16_1;
                        QUICKDouble x_3_32_0 = Ptempz * x_0_32_0 + WPtempz * x_0_32_1;
                        QUICKDouble x_3_33_0 = Ptempz * x_0_33_0 + WPtempz * x_0_33_1;
                        QUICKDouble x_3_34_0 = Ptempz * x_0_34_0 + WPtempz * x_0_34_1 + 4 * ABCDtemp * x_0_19_1;
                        
                        // WRITE LAST FOR I =            1  J=           4
                        LOC2(store,  1, 20, STOREDIM, STOREDIM) = x_1_20_0;
                        LOC2(store,  1, 21, STOREDIM, STOREDIM) = x_1_21_0;
                        LOC2(store,  1, 22, STOREDIM, STOREDIM) = x_1_22_0;
                        LOC2(store,  1, 23, STOREDIM, STOREDIM) = x_1_23_0;
                        LOC2(store,  1, 24, STOREDIM, STOREDIM) = x_1_24_0;
                        LOC2(store,  1, 25, STOREDIM, STOREDIM) = x_1_25_0;
                        LOC2(store,  1, 26, STOREDIM, STOREDIM) = x_1_26_0;
                        LOC2(store,  1, 27, STOREDIM, STOREDIM) = x_1_27_0;
                        LOC2(store,  1, 28, STOREDIM, STOREDIM) = x_1_28_0;
                        LOC2(store,  1, 29, STOREDIM, STOREDIM) = x_1_29_0;
                        LOC2(store,  1, 30, STOREDIM, STOREDIM) = x_1_30_0;
                        LOC2(store,  1, 31, STOREDIM, STOREDIM) = x_1_31_0;
                        LOC2(store,  1, 32, STOREDIM, STOREDIM) = x_1_32_0;
                        LOC2(store,  1, 33, STOREDIM, STOREDIM) = x_1_33_0;
                        LOC2(store,  1, 34, STOREDIM, STOREDIM) = x_1_34_0;
                        LOC2(store,  2, 20, STOREDIM, STOREDIM) = x_2_20_0;
                        LOC2(store,  2, 21, STOREDIM, STOREDIM) = x_2_21_0;
                        LOC2(store,  2, 22, STOREDIM, STOREDIM) = x_2_22_0;
                        LOC2(store,  2, 23, STOREDIM, STOREDIM) = x_2_23_0;
                        LOC2(store,  2, 24, STOREDIM, STOREDIM) = x_2_24_0;
                        LOC2(store,  2, 25, STOREDIM, STOREDIM) = x_2_25_0;
                        LOC2(store,  2, 26, STOREDIM, STOREDIM) = x_2_26_0;
                        LOC2(store,  2, 27, STOREDIM, STOREDIM) = x_2_27_0;
                        LOC2(store,  2, 28, STOREDIM, STOREDIM) = x_2_28_0;
                        LOC2(store,  2, 29, STOREDIM, STOREDIM) = x_2_29_0;
                        LOC2(store,  2, 30, STOREDIM, STOREDIM) = x_2_30_0;
                        LOC2(store,  2, 31, STOREDIM, STOREDIM) = x_2_31_0;
                        LOC2(store,  2, 32, STOREDIM, STOREDIM) = x_2_32_0;
                        LOC2(store,  2, 33, STOREDIM, STOREDIM) = x_2_33_0;
                        LOC2(store,  2, 34, STOREDIM, STOREDIM) = x_2_34_0;
                        LOC2(store,  3, 20, STOREDIM, STOREDIM) = x_3_20_0;
                        LOC2(store,  3, 21, STOREDIM, STOREDIM) = x_3_21_0;
                        LOC2(store,  3, 22, STOREDIM, STOREDIM) = x_3_22_0;
                        LOC2(store,  3, 23, STOREDIM, STOREDIM) = x_3_23_0;
                        LOC2(store,  3, 24, STOREDIM, STOREDIM) = x_3_24_0;
                        LOC2(store,  3, 25, STOREDIM, STOREDIM) = x_3_25_0;
                        LOC2(store,  3, 26, STOREDIM, STOREDIM) = x_3_26_0;
                        LOC2(store,  3, 27, STOREDIM, STOREDIM) = x_3_27_0;
                        LOC2(store,  3, 28, STOREDIM, STOREDIM) = x_3_28_0;
                        LOC2(store,  3, 29, STOREDIM, STOREDIM) = x_3_29_0;
                        LOC2(store,  3, 30, STOREDIM, STOREDIM) = x_3_30_0;
                        LOC2(store,  3, 31, STOREDIM, STOREDIM) = x_3_31_0;
                        LOC2(store,  3, 32, STOREDIM, STOREDIM) = x_3_32_0;
                        LOC2(store,  3, 33, STOREDIM, STOREDIM) = x_3_33_0;
                        LOC2(store,  3, 34, STOREDIM, STOREDIM) = x_3_34_0;
                    }
                }
            }
            if ((I+J) >=  2 && (K+L)>= 1) {
                // Subroutine for L =            1  B =            0 , m=           0
                QUICKDouble x_1_0_0 = Ptempx * VY( 0, 0, 0) + WPtempx * VY( 0, 0, 1);
                QUICKDouble x_2_0_0 = Ptempy * VY( 0, 0, 0) + WPtempy * VY( 0, 0, 1);
                QUICKDouble x_3_0_0 = Ptempz * VY( 0, 0, 0) + WPtempz * VY( 0, 0, 1);
                // Subroutine for L =            1  B =            0 , m=           1
                QUICKDouble x_1_0_1 = Ptempx * VY( 0, 0, 1) + WPtempx * VY( 0, 0, 2);
                QUICKDouble x_2_0_1 = Ptempy * VY( 0, 0, 1) + WPtempy * VY( 0, 0, 2);
                QUICKDouble x_3_0_1 = Ptempz * VY( 0, 0, 1) + WPtempz * VY( 0, 0, 2);
                // Subroutine for L =            1  B =            0 , m=           2
                QUICKDouble x_1_0_2 = Ptempx * VY( 0, 0, 2) + WPtempx * VY( 0, 0, 3);
                QUICKDouble x_2_0_2 = Ptempy * VY( 0, 0, 2) + WPtempy * VY( 0, 0, 3);
                QUICKDouble x_3_0_2 = Ptempz * VY( 0, 0, 2) + WPtempz * VY( 0, 0, 3);
                // Subroutine for L =            2  B =            0 , m=           0
                QUICKDouble x_4_0_0 = Ptempx * x_2_0_0 + WPtempx * x_2_0_1;
                QUICKDouble x_5_0_0 = Ptempy * x_3_0_0 + WPtempy * x_3_0_1;
                QUICKDouble x_6_0_0 = Ptempx * x_3_0_0 + WPtempx * x_3_0_1;
                QUICKDouble x_7_0_0 = Ptempx * x_1_0_0 + WPtempx * x_1_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
                QUICKDouble x_8_0_0 = Ptempy * x_2_0_0 + WPtempy * x_2_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
                QUICKDouble x_9_0_0 = Ptempz * x_3_0_0 + WPtempz * x_3_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
                // Subroutine for L =            2  B =            0 , m=           1
                QUICKDouble x_4_0_1 = Ptempx * x_2_0_1 + WPtempx * x_2_0_2;
                QUICKDouble x_5_0_1 = Ptempy * x_3_0_1 + WPtempy * x_3_0_2;
                QUICKDouble x_6_0_1 = Ptempx * x_3_0_1 + WPtempx * x_3_0_2;
                QUICKDouble x_7_0_1 = Ptempx * x_1_0_1 + WPtempx * x_1_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                QUICKDouble x_8_0_1 = Ptempy * x_2_0_1 + WPtempy * x_2_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                QUICKDouble x_9_0_1 = Ptempz * x_3_0_1 + WPtempz * x_3_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                // Subroutine for B =            2  L =            1 , m=           0
                
                // WRITE LAST FOR I =            2  J=           1
                LOC2(store,  4,  1, STOREDIM, STOREDIM) = (Qtempx * x_4_0_0 + WQtempx * x_4_0_1 + ABCDtemp * x_2_0_1);
                LOC2(store,  4,  2, STOREDIM, STOREDIM) = (Qtempy * x_4_0_0 + WQtempy * x_4_0_1 + ABCDtemp * x_1_0_1);
                LOC2(store,  4,  3, STOREDIM, STOREDIM) = (Qtempz * x_4_0_0 + WQtempz * x_4_0_1);
                LOC2(store,  5,  1, STOREDIM, STOREDIM) = (Qtempx * x_5_0_0 + WQtempx * x_5_0_1);
                LOC2(store,  5,  2, STOREDIM, STOREDIM) = (Qtempy * x_5_0_0 + WQtempy * x_5_0_1 + ABCDtemp * x_3_0_1);
                LOC2(store,  5,  3, STOREDIM, STOREDIM) = (Qtempz * x_5_0_0 + WQtempz * x_5_0_1 + ABCDtemp * x_2_0_1);
                LOC2(store,  6,  1, STOREDIM, STOREDIM) = (Qtempx * x_6_0_0 + WQtempx * x_6_0_1 + ABCDtemp * x_3_0_1);
                LOC2(store,  6,  2, STOREDIM, STOREDIM) = (Qtempy * x_6_0_0 + WQtempy * x_6_0_1);
                LOC2(store,  6,  3, STOREDIM, STOREDIM) = (Qtempz * x_6_0_0 + WQtempz * x_6_0_1 + ABCDtemp * x_1_0_1);
                LOC2(store,  7,  1, STOREDIM, STOREDIM) = (Qtempx * x_7_0_0 + WQtempx * x_7_0_1 + 2 * ABCDtemp * x_1_0_1);
                LOC2(store,  7,  2, STOREDIM, STOREDIM) = (Qtempy * x_7_0_0 + WQtempy * x_7_0_1);
                LOC2(store,  7,  3, STOREDIM, STOREDIM) = (Qtempz * x_7_0_0 + WQtempz * x_7_0_1);
                LOC2(store,  8,  1, STOREDIM, STOREDIM) = (Qtempx * x_8_0_0 + WQtempx * x_8_0_1);
                LOC2(store,  8,  2, STOREDIM, STOREDIM) = (Qtempy * x_8_0_0 + WQtempy * x_8_0_1 + 2 * ABCDtemp * x_2_0_1);
                LOC2(store,  8,  3, STOREDIM, STOREDIM) = (Qtempz * x_8_0_0 + WQtempz * x_8_0_1);
                LOC2(store,  9,  1, STOREDIM, STOREDIM) = (Qtempx * x_9_0_0 + WQtempx * x_9_0_1);
                LOC2(store,  9,  2, STOREDIM, STOREDIM) = (Qtempy * x_9_0_0 + WQtempy * x_9_0_1);
                LOC2(store,  9,  3, STOREDIM, STOREDIM) = (Qtempz * x_9_0_0 + WQtempz * x_9_0_1 + 2 * ABCDtemp * x_3_0_1);
                if ((I+J) >=  2 && (K+L)>= 2) {
                    // Subroutine for L =            0  B =            1 , m=           0
                    QUICKDouble x_0_1_0 = Qtempx * VY( 0, 0, 0) + WQtempx * VY( 0, 0, 1);
                    QUICKDouble x_0_2_0 = Qtempy * VY( 0, 0, 0) + WQtempy * VY( 0, 0, 1);
                    QUICKDouble x_0_3_0 = Qtempz * VY( 0, 0, 0) + WQtempz * VY( 0, 0, 1);
                    
                    // Subroutine for L =            0  B =            1 , m=           1
                    QUICKDouble x_0_1_1 = Qtempx * VY( 0, 0, 1) + WQtempx * VY( 0, 0, 2);
                    QUICKDouble x_0_2_1 = Qtempy * VY( 0, 0, 1) + WQtempy * VY( 0, 0, 2);
                    QUICKDouble x_0_3_1 = Qtempz * VY( 0, 0, 1) + WQtempz * VY( 0, 0, 2);
                    
                    // Subroutine for L =            0  B =            1 , m=           2
                    QUICKDouble x_0_1_2 = Qtempx * VY( 0, 0, 2) + WQtempx * VY( 0, 0, 3);
                    QUICKDouble x_0_2_2 = Qtempy * VY( 0, 0, 2) + WQtempy * VY( 0, 0, 3);
                    QUICKDouble x_0_3_2 = Qtempz * VY( 0, 0, 2) + WQtempz * VY( 0, 0, 3);
                    
                    // Subroutine for L =            0  B =            1 , m=           3
                    QUICKDouble x_0_1_3 = Qtempx * VY( 0, 0, 3) + WQtempx * VY( 0, 0, 4);
                    QUICKDouble x_0_2_3 = Qtempy * VY( 0, 0, 3) + WQtempy * VY( 0, 0, 4);
                    QUICKDouble x_0_3_3 = Qtempz * VY( 0, 0, 3) + WQtempz * VY( 0, 0, 4);
                    
                    // Subroutine for L =            0  B =            2 , m=           0
                    QUICKDouble x_0_4_0 = Qtempx * x_0_2_0 + WQtempx * x_0_2_1;
                    QUICKDouble x_0_5_0 = Qtempy * x_0_3_0 + WQtempy * x_0_3_1;
                    QUICKDouble x_0_6_0 = Qtempx * x_0_3_0 + WQtempx * x_0_3_1;
                    QUICKDouble x_0_7_0 = Qtempx * x_0_1_0 + WQtempx * x_0_1_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                    QUICKDouble x_0_8_0 = Qtempy * x_0_2_0 + WQtempy * x_0_2_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                    QUICKDouble x_0_9_0 = Qtempz * x_0_3_0 + WQtempz * x_0_3_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                    
                    // Subroutine for L =            0  B =            2 , m=           1
                    QUICKDouble x_0_4_1 = Qtempx * x_0_2_1 + WQtempx * x_0_2_2;
                    QUICKDouble x_0_5_1 = Qtempy * x_0_3_1 + WQtempy * x_0_3_2;
                    QUICKDouble x_0_6_1 = Qtempx * x_0_3_1 + WQtempx * x_0_3_2;
                    QUICKDouble x_0_7_1 = Qtempx * x_0_1_1 + WQtempx * x_0_1_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                    QUICKDouble x_0_8_1 = Qtempy * x_0_2_1 + WQtempy * x_0_2_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                    QUICKDouble x_0_9_1 = Qtempz * x_0_3_1 + WQtempz * x_0_3_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                    
                    // Subroutine for L =            0  B =            2 , m=           2
                    QUICKDouble x_0_4_2 = Qtempx * x_0_2_2 + WQtempx * x_0_2_3;
                    QUICKDouble x_0_5_2 = Qtempy * x_0_3_2 + WQtempy * x_0_3_3;
                    QUICKDouble x_0_6_2 = Qtempx * x_0_3_2 + WQtempx * x_0_3_3;
                    QUICKDouble x_0_7_2 = Qtempx * x_0_1_2 + WQtempx * x_0_1_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    QUICKDouble x_0_8_2 = Qtempy * x_0_2_2 + WQtempy * x_0_2_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    QUICKDouble x_0_9_2 = Qtempz * x_0_3_2 + WQtempz * x_0_3_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                    
                    // Subroutine for L =            1  B =            1 , m=           1
                    QUICKDouble x_2_1_1 = Ptempy * x_0_1_1 + WPtempy * x_0_1_2;
                    QUICKDouble x_2_2_1 = Ptempy * x_0_2_1 + WPtempy * x_0_2_2 + ABCDtemp * VY( 0, 0, 2);
                    QUICKDouble x_2_3_1 = Ptempy * x_0_3_1 + WPtempy * x_0_3_2;
                    QUICKDouble x_3_1_1 = Ptempz * x_0_1_1 + WPtempz * x_0_1_2;
                    QUICKDouble x_3_2_1 = Ptempz * x_0_2_1 + WPtempz * x_0_2_2;
                    QUICKDouble x_3_3_1 = Ptempz * x_0_3_1 + WPtempz * x_0_3_2 + ABCDtemp * VY( 0, 0, 2);
                    
                    // Subroutine for L =            1  B =            2 , m=           0
                    QUICKDouble x_1_4_0 = Ptempx * x_0_4_0 + WPtempx * x_0_4_1 + ABCDtemp * x_0_2_1;
                    QUICKDouble x_1_5_0 = Ptempx * x_0_5_0 + WPtempx * x_0_5_1;
                    QUICKDouble x_1_6_0 = Ptempx * x_0_6_0 + WPtempx * x_0_6_1 + ABCDtemp * x_0_3_1;
                    QUICKDouble x_1_7_0 = Ptempx * x_0_7_0 + WPtempx * x_0_7_1 + 2 * ABCDtemp * x_0_1_1;
                    QUICKDouble x_1_8_0 = Ptempx * x_0_8_0 + WPtempx * x_0_8_1;
                    QUICKDouble x_1_9_0 = Ptempx * x_0_9_0 + WPtempx * x_0_9_1;
                    QUICKDouble x_2_4_0 = Ptempy * x_0_4_0 + WPtempy * x_0_4_1 + ABCDtemp * x_0_1_1;
                    QUICKDouble x_2_5_0 = Ptempy * x_0_5_0 + WPtempy * x_0_5_1 + ABCDtemp * x_0_3_1;
                    QUICKDouble x_2_6_0 = Ptempy * x_0_6_0 + WPtempy * x_0_6_1;
                    QUICKDouble x_2_7_0 = Ptempy * x_0_7_0 + WPtempy * x_0_7_1;
                    QUICKDouble x_2_8_0 = Ptempy * x_0_8_0 + WPtempy * x_0_8_1 + 2 * ABCDtemp * x_0_2_1;
                    QUICKDouble x_2_9_0 = Ptempy * x_0_9_0 + WPtempy * x_0_9_1;
                    QUICKDouble x_3_4_0 = Ptempz * x_0_4_0 + WPtempz * x_0_4_1;
                    QUICKDouble x_3_5_0 = Ptempz * x_0_5_0 + WPtempz * x_0_5_1 + ABCDtemp * x_0_2_1;
                    QUICKDouble x_3_6_0 = Ptempz * x_0_6_0 + WPtempz * x_0_6_1 + ABCDtemp * x_0_1_1;
                    QUICKDouble x_3_7_0 = Ptempz * x_0_7_0 + WPtempz * x_0_7_1;
                    QUICKDouble x_3_8_0 = Ptempz * x_0_8_0 + WPtempz * x_0_8_1;
                    QUICKDouble x_3_9_0 = Ptempz * x_0_9_0 + WPtempz * x_0_9_1 + 2 * ABCDtemp * x_0_3_1;
                    
                    // Subroutine for L =            1  B =            2 , m=           1
                    QUICKDouble x_1_4_1 = Ptempx * x_0_4_1 + WPtempx * x_0_4_2 + ABCDtemp * x_0_2_2;
                    QUICKDouble x_1_5_1 = Ptempx * x_0_5_1 + WPtempx * x_0_5_2;
                    QUICKDouble x_1_6_1 = Ptempx * x_0_6_1 + WPtempx * x_0_6_2 + ABCDtemp * x_0_3_2;
                    QUICKDouble x_1_7_1 = Ptempx * x_0_7_1 + WPtempx * x_0_7_2 + 2 * ABCDtemp * x_0_1_2;
                    QUICKDouble x_1_8_1 = Ptempx * x_0_8_1 + WPtempx * x_0_8_2;
                    QUICKDouble x_1_9_1 = Ptempx * x_0_9_1 + WPtempx * x_0_9_2;
                    QUICKDouble x_2_4_1 = Ptempy * x_0_4_1 + WPtempy * x_0_4_2 + ABCDtemp * x_0_1_2;
                    QUICKDouble x_2_5_1 = Ptempy * x_0_5_1 + WPtempy * x_0_5_2 + ABCDtemp * x_0_3_2;
                    QUICKDouble x_2_6_1 = Ptempy * x_0_6_1 + WPtempy * x_0_6_2;
                    QUICKDouble x_2_7_1 = Ptempy * x_0_7_1 + WPtempy * x_0_7_2;
                    QUICKDouble x_2_8_1 = Ptempy * x_0_8_1 + WPtempy * x_0_8_2 + 2 * ABCDtemp * x_0_2_2;
                    QUICKDouble x_2_9_1 = Ptempy * x_0_9_1 + WPtempy * x_0_9_2;
                    QUICKDouble x_3_4_1 = Ptempz * x_0_4_1 + WPtempz * x_0_4_2;
                    QUICKDouble x_3_5_1 = Ptempz * x_0_5_1 + WPtempz * x_0_5_2 + ABCDtemp * x_0_2_2;
                    QUICKDouble x_3_6_1 = Ptempz * x_0_6_1 + WPtempz * x_0_6_2 + ABCDtemp * x_0_1_2;
                    QUICKDouble x_3_7_1 = Ptempz * x_0_7_1 + WPtempz * x_0_7_2;
                    QUICKDouble x_3_8_1 = Ptempz * x_0_8_1 + WPtempz * x_0_8_2;
                    QUICKDouble x_3_9_1 = Ptempz * x_0_9_1 + WPtempz * x_0_9_2 + 2 * ABCDtemp * x_0_3_2;
                    
                    // Subroutine for L =            2  B =            2 , m=           0
                    
                    // WRITE LAST FOR I =            2  J=           2
                    LOC2(store,  4,  4, STOREDIM, STOREDIM) = (    Ptempx * x_2_4_0 + WPtempx * x_2_4_1 + ABCDtemp * x_2_2_1);
                    LOC2(store,  4,  5, STOREDIM, STOREDIM) = (    Ptempx * x_2_5_0 + WPtempx * x_2_5_1);
                    LOC2(store,  4,  6, STOREDIM, STOREDIM) = (    Ptempx * x_2_6_0 + WPtempx * x_2_6_1 + ABCDtemp * x_2_3_1);
                    LOC2(store,  4,  7, STOREDIM, STOREDIM) = (    Ptempx * x_2_7_0 + WPtempx * x_2_7_1 + 2 * ABCDtemp * x_2_1_1);
                    LOC2(store,  4,  8, STOREDIM, STOREDIM) = (    Ptempx * x_2_8_0 + WPtempx * x_2_8_1);
                    LOC2(store,  4,  9, STOREDIM, STOREDIM) = (    Ptempx * x_2_9_0 + WPtempx * x_2_9_1);
                    LOC2(store,  5,  4, STOREDIM, STOREDIM) = (    Ptempy * x_3_4_0 + WPtempy * x_3_4_1 + ABCDtemp * x_3_1_1);
                    LOC2(store,  5,  5, STOREDIM, STOREDIM) = (    Ptempy * x_3_5_0 + WPtempy * x_3_5_1 + ABCDtemp * x_3_3_1);
                    LOC2(store,  5,  6, STOREDIM, STOREDIM) = (    Ptempy * x_3_6_0 + WPtempy * x_3_6_1);
                    LOC2(store,  5,  7, STOREDIM, STOREDIM) = (    Ptempy * x_3_7_0 + WPtempy * x_3_7_1);
                    LOC2(store,  5,  8, STOREDIM, STOREDIM) = (    Ptempy * x_3_8_0 + WPtempy * x_3_8_1 + 2 * ABCDtemp * x_3_2_1);
                    LOC2(store,  5,  9, STOREDIM, STOREDIM) = (    Ptempy * x_3_9_0 + WPtempy * x_3_9_1);
                    LOC2(store,  6,  4, STOREDIM, STOREDIM) = (    Ptempx * x_3_4_0 + WPtempx * x_3_4_1 + ABCDtemp * x_3_2_1);
                    LOC2(store,  6,  5, STOREDIM, STOREDIM) = (    Ptempx * x_3_5_0 + WPtempx * x_3_5_1);
                    LOC2(store,  6,  6, STOREDIM, STOREDIM) = (    Ptempx * x_3_6_0 + WPtempx * x_3_6_1 + ABCDtemp * x_3_3_1);
                    LOC2(store,  6,  7, STOREDIM, STOREDIM) = (    Ptempx * x_3_7_0 + WPtempx * x_3_7_1 + 2 * ABCDtemp * x_3_1_1);
                    LOC2(store,  6,  8, STOREDIM, STOREDIM) = (    Ptempx * x_3_8_0 + WPtempx * x_3_8_1);
                    LOC2(store,  6,  9, STOREDIM, STOREDIM) = (    Ptempx * x_3_9_0 + WPtempx * x_3_9_1);
                    LOC2(store,  7,  4, STOREDIM, STOREDIM) = (    Ptempx * x_1_4_0 + WPtempx * x_1_4_1 + ABtemp * (x_0_4_0 -  CDcom * x_0_4_1) + ABCDtemp * (    Ptempx * x_0_2_1 + WPtempx * x_0_2_2));
                    LOC2(store,  7,  5, STOREDIM, STOREDIM) = (    Ptempx * x_1_5_0 + WPtempx * x_1_5_1 + ABtemp * (x_0_5_0 -  CDcom * x_0_5_1));
                    LOC2(store,  7,  6, STOREDIM, STOREDIM) = (    Ptempx * x_1_6_0 + WPtempx * x_1_6_1 + ABtemp * (x_0_6_0 -  CDcom * x_0_6_1) + ABCDtemp * (    Ptempx * x_0_3_1 + WPtempx * x_0_3_2));
                    LOC2(store,  7,  7, STOREDIM, STOREDIM) = (    Ptempx * x_1_7_0 + WPtempx * x_1_7_1 + ABtemp * (x_0_7_0 -  CDcom * x_0_7_1) + 2 * ABCDtemp * (    Ptempx * x_0_1_1 + WPtempx * x_0_1_2 + ABCDtemp * VY( 0, 0, 2)));
                    LOC2(store,  7,  8, STOREDIM, STOREDIM) = (    Ptempx * x_1_8_0 + WPtempx * x_1_8_1 + ABtemp * (x_0_8_0 -  CDcom * x_0_8_1));
                    LOC2(store,  7,  9, STOREDIM, STOREDIM) = (    Ptempx * x_1_9_0 + WPtempx * x_1_9_1 + ABtemp * (x_0_9_0 -  CDcom * x_0_9_1));
                    LOC2(store,  8,  4, STOREDIM, STOREDIM) = (    Ptempy * x_2_4_0 + WPtempy * x_2_4_1 + ABtemp * (x_0_4_0 -  CDcom * x_0_4_1) + ABCDtemp * x_2_1_1);
                    LOC2(store,  8,  5, STOREDIM, STOREDIM) = (    Ptempy * x_2_5_0 + WPtempy * x_2_5_1 + ABtemp * (x_0_5_0 -  CDcom * x_0_5_1) + ABCDtemp * x_2_3_1);
                    LOC2(store,  8,  6, STOREDIM, STOREDIM) = (    Ptempy * x_2_6_0 + WPtempy * x_2_6_1 + ABtemp * (x_0_6_0 -  CDcom * x_0_6_1));
                    LOC2(store,  8,  7, STOREDIM, STOREDIM) = (    Ptempy * x_2_7_0 + WPtempy * x_2_7_1 + ABtemp * (x_0_7_0 -  CDcom * x_0_7_1));
                    LOC2(store,  8,  8, STOREDIM, STOREDIM) = (    Ptempy * x_2_8_0 + WPtempy * x_2_8_1 + ABtemp * (x_0_8_0 -  CDcom * x_0_8_1) + 2 * ABCDtemp * x_2_2_1);
                    LOC2(store,  8,  9, STOREDIM, STOREDIM) = (    Ptempy * x_2_9_0 + WPtempy * x_2_9_1 + ABtemp * (x_0_9_0 -  CDcom * x_0_9_1));
                    LOC2(store,  9,  4, STOREDIM, STOREDIM) = (    Ptempz * x_3_4_0 + WPtempz * x_3_4_1 + ABtemp * (x_0_4_0 -  CDcom * x_0_4_1));
                    LOC2(store,  9,  5, STOREDIM, STOREDIM) = (    Ptempz * x_3_5_0 + WPtempz * x_3_5_1 + ABtemp * (x_0_5_0 -  CDcom * x_0_5_1) + ABCDtemp * x_3_2_1);
                    LOC2(store,  9,  6, STOREDIM, STOREDIM) = (    Ptempz * x_3_6_0 + WPtempz * x_3_6_1 + ABtemp * (x_0_6_0 -  CDcom * x_0_6_1) + ABCDtemp * x_3_1_1);
                    LOC2(store,  9,  7, STOREDIM, STOREDIM) = (    Ptempz * x_3_7_0 + WPtempz * x_3_7_1 + ABtemp * (x_0_7_0 -  CDcom * x_0_7_1));
                    LOC2(store,  9,  8, STOREDIM, STOREDIM) = (    Ptempz * x_3_8_0 + WPtempz * x_3_8_1 + ABtemp * (x_0_8_0 -  CDcom * x_0_8_1));
                    LOC2(store,  9,  9, STOREDIM, STOREDIM) = (    Ptempz * x_3_9_0 + WPtempz * x_3_9_1 + ABtemp * (x_0_9_0 -  CDcom * x_0_9_1) + 2 * ABCDtemp * x_3_3_1);
                    if ((I+J) >=  2 && (K+L)>= 3) {
                        // Subroutine for L =            0  B =            1 , m=           4
                        QUICKDouble x_0_1_4 = Qtempx * VY( 0, 0, 4) + WQtempx * VY( 0, 0, 5);
                        QUICKDouble x_0_2_4 = Qtempy * VY( 0, 0, 4) + WQtempy * VY( 0, 0, 5);
                        QUICKDouble x_0_3_4 = Qtempz * VY( 0, 0, 4) + WQtempz * VY( 0, 0, 5);
                        
                        // Subroutine for L =            0  B =            2 , m=           3
                        QUICKDouble x_0_4_3 = Qtempx * x_0_2_3 + WQtempx * x_0_2_4;
                        QUICKDouble x_0_5_3 = Qtempy * x_0_3_3 + WQtempy * x_0_3_4;
                        QUICKDouble x_0_6_3 = Qtempx * x_0_3_3 + WQtempx * x_0_3_4;
                        QUICKDouble x_0_7_3 = Qtempx * x_0_1_3 + WQtempx * x_0_1_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                        QUICKDouble x_0_8_3 = Qtempy * x_0_2_3 + WQtempy * x_0_2_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                        QUICKDouble x_0_9_3 = Qtempz * x_0_3_3 + WQtempz * x_0_3_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                        
                        // Subroutine for L =            0  B =            3 , m=           0
                        QUICKDouble x_0_10_0 = Qtempx * x_0_5_0 + WQtempx * x_0_5_1;
                        QUICKDouble x_0_11_0 = Qtempx * x_0_4_0 + WQtempx * x_0_4_1 + CDtemp * (x_0_2_0 -  ABcom * x_0_2_1);
                        QUICKDouble x_0_12_0 = Qtempx * x_0_8_0 + WQtempx * x_0_8_1;
                        QUICKDouble x_0_13_0 = Qtempx * x_0_6_0 + WQtempx * x_0_6_1 + CDtemp * (x_0_3_0 -  ABcom * x_0_3_1);
                        QUICKDouble x_0_14_0 = Qtempx * x_0_9_0 + WQtempx * x_0_9_1;
                        QUICKDouble x_0_15_0 = Qtempy * x_0_5_0 + WQtempy * x_0_5_1 + CDtemp * (x_0_3_0 -  ABcom * x_0_3_1);
                        QUICKDouble x_0_16_0 = Qtempy * x_0_9_0 + WQtempy * x_0_9_1;
                        QUICKDouble x_0_17_0 = Qtempx * x_0_7_0 + WQtempx * x_0_7_1 + CDtemp * 2 * (x_0_1_0 -  ABcom * x_0_1_1);
                        QUICKDouble x_0_18_0 = Qtempy * x_0_8_0 + WQtempy * x_0_8_1 + CDtemp * 2 * (x_0_2_0 -  ABcom * x_0_2_1);
                        QUICKDouble x_0_19_0 = Qtempz * x_0_9_0 + WQtempz * x_0_9_1 + CDtemp * 2 * (x_0_3_0 -  ABcom * x_0_3_1);
                        
                        // Subroutine for L =            0  B =            3 , m=           1
                        QUICKDouble x_0_10_1 = Qtempx * x_0_5_1 + WQtempx * x_0_5_2;
                        QUICKDouble x_0_11_1 = Qtempx * x_0_4_1 + WQtempx * x_0_4_2 + CDtemp * (x_0_2_1 -  ABcom * x_0_2_2);
                        QUICKDouble x_0_12_1 = Qtempx * x_0_8_1 + WQtempx * x_0_8_2;
                        QUICKDouble x_0_13_1 = Qtempx * x_0_6_1 + WQtempx * x_0_6_2 + CDtemp * (x_0_3_1 -  ABcom * x_0_3_2);
                        QUICKDouble x_0_14_1 = Qtempx * x_0_9_1 + WQtempx * x_0_9_2;
                        QUICKDouble x_0_15_1 = Qtempy * x_0_5_1 + WQtempy * x_0_5_2 + CDtemp * (x_0_3_1 -  ABcom * x_0_3_2);
                        QUICKDouble x_0_16_1 = Qtempy * x_0_9_1 + WQtempy * x_0_9_2;
                        QUICKDouble x_0_17_1 = Qtempx * x_0_7_1 + WQtempx * x_0_7_2 + CDtemp * 2 * (x_0_1_1 -  ABcom * x_0_1_2);
                        QUICKDouble x_0_18_1 = Qtempy * x_0_8_1 + WQtempy * x_0_8_2 + CDtemp * 2 * (x_0_2_1 -  ABcom * x_0_2_2);
                        QUICKDouble x_0_19_1 = Qtempz * x_0_9_1 + WQtempz * x_0_9_2 + CDtemp * 2 * (x_0_3_1 -  ABcom * x_0_3_2);
                        
                        // Subroutine for L =            0  B =            3 , m=           2
                        QUICKDouble x_0_10_2 = Qtempx * x_0_5_2 + WQtempx * x_0_5_3;
                        QUICKDouble x_0_11_2 = Qtempx * x_0_4_2 + WQtempx * x_0_4_3 + CDtemp * (x_0_2_2 -  ABcom * x_0_2_3);
                        QUICKDouble x_0_12_2 = Qtempx * x_0_8_2 + WQtempx * x_0_8_3;
                        QUICKDouble x_0_13_2 = Qtempx * x_0_6_2 + WQtempx * x_0_6_3 + CDtemp * (x_0_3_2 -  ABcom * x_0_3_3);
                        QUICKDouble x_0_14_2 = Qtempx * x_0_9_2 + WQtempx * x_0_9_3;
                        QUICKDouble x_0_15_2 = Qtempy * x_0_5_2 + WQtempy * x_0_5_3 + CDtemp * (x_0_3_2 -  ABcom * x_0_3_3);
                        QUICKDouble x_0_16_2 = Qtempy * x_0_9_2 + WQtempy * x_0_9_3;
                        QUICKDouble x_0_17_2 = Qtempx * x_0_7_2 + WQtempx * x_0_7_3 + CDtemp * 2 * (x_0_1_2 -  ABcom * x_0_1_3);
                        QUICKDouble x_0_18_2 = Qtempy * x_0_8_2 + WQtempy * x_0_8_3 + CDtemp * 2 * (x_0_2_2 -  ABcom * x_0_2_3);
                        QUICKDouble x_0_19_2 = Qtempz * x_0_9_2 + WQtempz * x_0_9_3 + CDtemp * 2 * (x_0_3_2 -  ABcom * x_0_3_3);
                        
                        // Subroutine for L =            1  B =            3 , m=           0
                        QUICKDouble x_1_10_0 = Ptempx * x_0_10_0 + WPtempx * x_0_10_1 + ABCDtemp * x_0_5_1;
                        QUICKDouble x_1_11_0 = Ptempx * x_0_11_0 + WPtempx * x_0_11_1 + 2 * ABCDtemp * x_0_4_1;
                        QUICKDouble x_1_12_0 = Ptempx * x_0_12_0 + WPtempx * x_0_12_1 + ABCDtemp * x_0_8_1;
                        QUICKDouble x_1_13_0 = Ptempx * x_0_13_0 + WPtempx * x_0_13_1 + 2 * ABCDtemp * x_0_6_1;
                        QUICKDouble x_1_14_0 = Ptempx * x_0_14_0 + WPtempx * x_0_14_1 + ABCDtemp * x_0_9_1;
                        QUICKDouble x_1_15_0 = Ptempx * x_0_15_0 + WPtempx * x_0_15_1;
                        QUICKDouble x_1_16_0 = Ptempx * x_0_16_0 + WPtempx * x_0_16_1;
                        QUICKDouble x_1_17_0 = Ptempx * x_0_17_0 + WPtempx * x_0_17_1 + 3 * ABCDtemp * x_0_7_1;
                        QUICKDouble x_1_18_0 = Ptempx * x_0_18_0 + WPtempx * x_0_18_1;
                        QUICKDouble x_1_19_0 = Ptempx * x_0_19_0 + WPtempx * x_0_19_1;
                        QUICKDouble x_2_10_0 = Ptempy * x_0_10_0 + WPtempy * x_0_10_1 + ABCDtemp * x_0_6_1;
                        QUICKDouble x_2_11_0 = Ptempy * x_0_11_0 + WPtempy * x_0_11_1 + ABCDtemp * x_0_7_1;
                        QUICKDouble x_2_12_0 = Ptempy * x_0_12_0 + WPtempy * x_0_12_1 + 2 * ABCDtemp * x_0_4_1;
                        QUICKDouble x_2_13_0 = Ptempy * x_0_13_0 + WPtempy * x_0_13_1;
                        QUICKDouble x_2_14_0 = Ptempy * x_0_14_0 + WPtempy * x_0_14_1;
                        QUICKDouble x_2_15_0 = Ptempy * x_0_15_0 + WPtempy * x_0_15_1 + 2 * ABCDtemp * x_0_5_1;
                        QUICKDouble x_2_16_0 = Ptempy * x_0_16_0 + WPtempy * x_0_16_1 + ABCDtemp * x_0_9_1;
                        QUICKDouble x_2_17_0 = Ptempy * x_0_17_0 + WPtempy * x_0_17_1;
                        QUICKDouble x_2_18_0 = Ptempy * x_0_18_0 + WPtempy * x_0_18_1 + 3 * ABCDtemp * x_0_8_1;
                        QUICKDouble x_2_19_0 = Ptempy * x_0_19_0 + WPtempy * x_0_19_1;
                        QUICKDouble x_3_10_0 = Ptempz * x_0_10_0 + WPtempz * x_0_10_1 + ABCDtemp * x_0_4_1;
                        QUICKDouble x_3_11_0 = Ptempz * x_0_11_0 + WPtempz * x_0_11_1;
                        QUICKDouble x_3_12_0 = Ptempz * x_0_12_0 + WPtempz * x_0_12_1;
                        QUICKDouble x_3_13_0 = Ptempz * x_0_13_0 + WPtempz * x_0_13_1 + ABCDtemp * x_0_7_1;
                        QUICKDouble x_3_14_0 = Ptempz * x_0_14_0 + WPtempz * x_0_14_1 + 2 * ABCDtemp * x_0_6_1;
                        QUICKDouble x_3_15_0 = Ptempz * x_0_15_0 + WPtempz * x_0_15_1 + ABCDtemp * x_0_8_1;
                        QUICKDouble x_3_16_0 = Ptempz * x_0_16_0 + WPtempz * x_0_16_1 + 2 * ABCDtemp * x_0_5_1;
                        QUICKDouble x_3_17_0 = Ptempz * x_0_17_0 + WPtempz * x_0_17_1;
                        QUICKDouble x_3_18_0 = Ptempz * x_0_18_0 + WPtempz * x_0_18_1;
                        QUICKDouble x_3_19_0 = Ptempz * x_0_19_0 + WPtempz * x_0_19_1 + 3 * ABCDtemp * x_0_9_1;
                        
                        // Subroutine for L =            1  B =            3 , m=           1
                        QUICKDouble x_1_10_1 = Ptempx * x_0_10_1 + WPtempx * x_0_10_2 + ABCDtemp * x_0_5_2;
                        QUICKDouble x_1_11_1 = Ptempx * x_0_11_1 + WPtempx * x_0_11_2 + 2 * ABCDtemp * x_0_4_2;
                        QUICKDouble x_1_12_1 = Ptempx * x_0_12_1 + WPtempx * x_0_12_2 + ABCDtemp * x_0_8_2;
                        QUICKDouble x_1_13_1 = Ptempx * x_0_13_1 + WPtempx * x_0_13_2 + 2 * ABCDtemp * x_0_6_2;
                        QUICKDouble x_1_14_1 = Ptempx * x_0_14_1 + WPtempx * x_0_14_2 + ABCDtemp * x_0_9_2;
                        QUICKDouble x_1_15_1 = Ptempx * x_0_15_1 + WPtempx * x_0_15_2;
                        QUICKDouble x_1_16_1 = Ptempx * x_0_16_1 + WPtempx * x_0_16_2;
                        QUICKDouble x_1_17_1 = Ptempx * x_0_17_1 + WPtempx * x_0_17_2 + 3 * ABCDtemp * x_0_7_2;
                        QUICKDouble x_1_18_1 = Ptempx * x_0_18_1 + WPtempx * x_0_18_2;
                        QUICKDouble x_1_19_1 = Ptempx * x_0_19_1 + WPtempx * x_0_19_2;
                        QUICKDouble x_2_10_1 = Ptempy * x_0_10_1 + WPtempy * x_0_10_2 + ABCDtemp * x_0_6_2;
                        QUICKDouble x_2_11_1 = Ptempy * x_0_11_1 + WPtempy * x_0_11_2 + ABCDtemp * x_0_7_2;
                        QUICKDouble x_2_12_1 = Ptempy * x_0_12_1 + WPtempy * x_0_12_2 + 2 * ABCDtemp * x_0_4_2;
                        QUICKDouble x_2_13_1 = Ptempy * x_0_13_1 + WPtempy * x_0_13_2;
                        QUICKDouble x_2_14_1 = Ptempy * x_0_14_1 + WPtempy * x_0_14_2;
                        QUICKDouble x_2_15_1 = Ptempy * x_0_15_1 + WPtempy * x_0_15_2 + 2 * ABCDtemp * x_0_5_2;
                        QUICKDouble x_2_16_1 = Ptempy * x_0_16_1 + WPtempy * x_0_16_2 + ABCDtemp * x_0_9_2;
                        QUICKDouble x_2_17_1 = Ptempy * x_0_17_1 + WPtempy * x_0_17_2;
                        QUICKDouble x_2_18_1 = Ptempy * x_0_18_1 + WPtempy * x_0_18_2 + 3 * ABCDtemp * x_0_8_2;
                        QUICKDouble x_2_19_1 = Ptempy * x_0_19_1 + WPtempy * x_0_19_2;
                        QUICKDouble x_3_10_1 = Ptempz * x_0_10_1 + WPtempz * x_0_10_2 + ABCDtemp * x_0_4_2;
                        QUICKDouble x_3_11_1 = Ptempz * x_0_11_1 + WPtempz * x_0_11_2;
                        QUICKDouble x_3_12_1 = Ptempz * x_0_12_1 + WPtempz * x_0_12_2;
                        QUICKDouble x_3_13_1 = Ptempz * x_0_13_1 + WPtempz * x_0_13_2 + ABCDtemp * x_0_7_2;
                        QUICKDouble x_3_14_1 = Ptempz * x_0_14_1 + WPtempz * x_0_14_2 + 2 * ABCDtemp * x_0_6_2;
                        QUICKDouble x_3_15_1 = Ptempz * x_0_15_1 + WPtempz * x_0_15_2 + ABCDtemp * x_0_8_2;
                        QUICKDouble x_3_16_1 = Ptempz * x_0_16_1 + WPtempz * x_0_16_2 + 2 * ABCDtemp * x_0_5_2;
                        QUICKDouble x_3_17_1 = Ptempz * x_0_17_1 + WPtempz * x_0_17_2;
                        QUICKDouble x_3_18_1 = Ptempz * x_0_18_1 + WPtempz * x_0_18_2;
                        QUICKDouble x_3_19_1 = Ptempz * x_0_19_1 + WPtempz * x_0_19_2 + 3 * ABCDtemp * x_0_9_2;
                        
                        // Subroutine for L =            2  B =            3 , m=           0
                        
                        // WRITE LAST FOR I =            2  J=           3
                        LOC2(store,  4, 10, STOREDIM, STOREDIM) = (  Ptempx * x_2_10_0 + WPtempx * x_2_10_1 + ABCDtemp * x_2_5_1);
                        LOC2(store,  4, 11, STOREDIM, STOREDIM) = (  Ptempx * x_2_11_0 + WPtempx * x_2_11_1 + 2 * ABCDtemp * x_2_4_1);
                        LOC2(store,  4, 12, STOREDIM, STOREDIM) = (  Ptempx * x_2_12_0 + WPtempx * x_2_12_1 + ABCDtemp * x_2_8_1);
                        LOC2(store,  4, 13, STOREDIM, STOREDIM) = (  Ptempx * x_2_13_0 + WPtempx * x_2_13_1 + 2 * ABCDtemp * x_2_6_1);
                        LOC2(store,  4, 14, STOREDIM, STOREDIM) = (  Ptempx * x_2_14_0 + WPtempx * x_2_14_1 + ABCDtemp * x_2_9_1);
                        LOC2(store,  4, 15, STOREDIM, STOREDIM) = (  Ptempx * x_2_15_0 + WPtempx * x_2_15_1);
                        LOC2(store,  4, 16, STOREDIM, STOREDIM) = (  Ptempx * x_2_16_0 + WPtempx * x_2_16_1);
                        LOC2(store,  4, 17, STOREDIM, STOREDIM) = (  Ptempx * x_2_17_0 + WPtempx * x_2_17_1 + 3 * ABCDtemp * x_2_7_1);
                        LOC2(store,  4, 18, STOREDIM, STOREDIM) = (  Ptempx * x_2_18_0 + WPtempx * x_2_18_1);
                        LOC2(store,  4, 19, STOREDIM, STOREDIM) = (  Ptempx * x_2_19_0 + WPtempx * x_2_19_1);
                        LOC2(store,  5, 10, STOREDIM, STOREDIM) = (  Ptempy * x_3_10_0 + WPtempy * x_3_10_1 + ABCDtemp * x_3_6_1);
                        LOC2(store,  5, 11, STOREDIM, STOREDIM) = (  Ptempy * x_3_11_0 + WPtempy * x_3_11_1 + ABCDtemp * x_3_7_1);
                        LOC2(store,  5, 12, STOREDIM, STOREDIM) = (  Ptempy * x_3_12_0 + WPtempy * x_3_12_1 + 2 * ABCDtemp * x_3_4_1);
                        LOC2(store,  5, 13, STOREDIM, STOREDIM) = (  Ptempy * x_3_13_0 + WPtempy * x_3_13_1);
                        LOC2(store,  5, 14, STOREDIM, STOREDIM) = (  Ptempy * x_3_14_0 + WPtempy * x_3_14_1);
                        LOC2(store,  5, 15, STOREDIM, STOREDIM) = (  Ptempy * x_3_15_0 + WPtempy * x_3_15_1 + 2 * ABCDtemp * x_3_5_1);
                        LOC2(store,  5, 16, STOREDIM, STOREDIM) = (  Ptempy * x_3_16_0 + WPtempy * x_3_16_1 + ABCDtemp * x_3_9_1);
                        LOC2(store,  5, 17, STOREDIM, STOREDIM) = (  Ptempy * x_3_17_0 + WPtempy * x_3_17_1);
                        LOC2(store,  5, 18, STOREDIM, STOREDIM) = (  Ptempy * x_3_18_0 + WPtempy * x_3_18_1 + 3 * ABCDtemp * x_3_8_1);
                        LOC2(store,  5, 19, STOREDIM, STOREDIM) = (  Ptempy * x_3_19_0 + WPtempy * x_3_19_1);
                        LOC2(store,  6, 10, STOREDIM, STOREDIM) = (  Ptempx * x_3_10_0 + WPtempx * x_3_10_1 + ABCDtemp * x_3_5_1);
                        LOC2(store,  6, 11, STOREDIM, STOREDIM) = (  Ptempx * x_3_11_0 + WPtempx * x_3_11_1 + 2 * ABCDtemp * x_3_4_1);
                        LOC2(store,  6, 12, STOREDIM, STOREDIM) = (  Ptempx * x_3_12_0 + WPtempx * x_3_12_1 + ABCDtemp * x_3_8_1);
                        LOC2(store,  6, 13, STOREDIM, STOREDIM) = (  Ptempx * x_3_13_0 + WPtempx * x_3_13_1 + 2 * ABCDtemp * x_3_6_1);
                        LOC2(store,  6, 14, STOREDIM, STOREDIM) = (  Ptempx * x_3_14_0 + WPtempx * x_3_14_1 + ABCDtemp * x_3_9_1);
                        LOC2(store,  6, 15, STOREDIM, STOREDIM) = (  Ptempx * x_3_15_0 + WPtempx * x_3_15_1);
                        LOC2(store,  6, 16, STOREDIM, STOREDIM) = (  Ptempx * x_3_16_0 + WPtempx * x_3_16_1);
                        LOC2(store,  6, 17, STOREDIM, STOREDIM) = (  Ptempx * x_3_17_0 + WPtempx * x_3_17_1 + 3 * ABCDtemp * x_3_7_1);
                        LOC2(store,  6, 18, STOREDIM, STOREDIM) = (  Ptempx * x_3_18_0 + WPtempx * x_3_18_1);
                        LOC2(store,  6, 19, STOREDIM, STOREDIM) = (  Ptempx * x_3_19_0 + WPtempx * x_3_19_1);
                        LOC2(store,  7, 10, STOREDIM, STOREDIM) = (  Ptempx * x_1_10_0 + WPtempx * x_1_10_1 + ABtemp * (x_0_10_0 -  CDcom * x_0_10_1) + ABCDtemp * x_1_5_1);
                        LOC2(store,  7, 11, STOREDIM, STOREDIM) = (  Ptempx * x_1_11_0 + WPtempx * x_1_11_1 + ABtemp * (x_0_11_0 -  CDcom * x_0_11_1) + 2 * ABCDtemp * x_1_4_1);
                        LOC2(store,  7, 12, STOREDIM, STOREDIM) = (  Ptempx * x_1_12_0 + WPtempx * x_1_12_1 + ABtemp * (x_0_12_0 -  CDcom * x_0_12_1) + ABCDtemp * x_1_8_1);
                        LOC2(store,  7, 13, STOREDIM, STOREDIM) = (  Ptempx * x_1_13_0 + WPtempx * x_1_13_1 + ABtemp * (x_0_13_0 -  CDcom * x_0_13_1) + 2 * ABCDtemp * x_1_6_1);
                        LOC2(store,  7, 14, STOREDIM, STOREDIM) = (  Ptempx * x_1_14_0 + WPtempx * x_1_14_1 + ABtemp * (x_0_14_0 -  CDcom * x_0_14_1) + ABCDtemp * x_1_9_1);
                        LOC2(store,  7, 15, STOREDIM, STOREDIM) = (  Ptempx * x_1_15_0 + WPtempx * x_1_15_1 + ABtemp * (x_0_15_0 -  CDcom * x_0_15_1));
                        LOC2(store,  7, 16, STOREDIM, STOREDIM) = (  Ptempx * x_1_16_0 + WPtempx * x_1_16_1 + ABtemp * (x_0_16_0 -  CDcom * x_0_16_1));
                        LOC2(store,  7, 17, STOREDIM, STOREDIM) = (  Ptempx * x_1_17_0 + WPtempx * x_1_17_1 + ABtemp * (x_0_17_0 -  CDcom * x_0_17_1) + 3 * ABCDtemp * x_1_7_1);
                        LOC2(store,  7, 18, STOREDIM, STOREDIM) = (  Ptempx * x_1_18_0 + WPtempx * x_1_18_1 + ABtemp * (x_0_18_0 -  CDcom * x_0_18_1));
                        LOC2(store,  7, 19, STOREDIM, STOREDIM) = (  Ptempx * x_1_19_0 + WPtempx * x_1_19_1 + ABtemp * (x_0_19_0 -  CDcom * x_0_19_1));
                        LOC2(store,  8, 10, STOREDIM, STOREDIM) = (  Ptempy * x_2_10_0 + WPtempy * x_2_10_1 + ABtemp * (x_0_10_0 -  CDcom * x_0_10_1) + ABCDtemp * x_2_6_1);
                        LOC2(store,  8, 11, STOREDIM, STOREDIM) = (  Ptempy * x_2_11_0 + WPtempy * x_2_11_1 + ABtemp * (x_0_11_0 -  CDcom * x_0_11_1) + ABCDtemp * x_2_7_1);
                        LOC2(store,  8, 12, STOREDIM, STOREDIM) = (  Ptempy * x_2_12_0 + WPtempy * x_2_12_1 + ABtemp * (x_0_12_0 -  CDcom * x_0_12_1) + 2 * ABCDtemp * x_2_4_1);
                        LOC2(store,  8, 13, STOREDIM, STOREDIM) = (  Ptempy * x_2_13_0 + WPtempy * x_2_13_1 + ABtemp * (x_0_13_0 -  CDcom * x_0_13_1));
                        LOC2(store,  8, 14, STOREDIM, STOREDIM) = (  Ptempy * x_2_14_0 + WPtempy * x_2_14_1 + ABtemp * (x_0_14_0 -  CDcom * x_0_14_1));
                        LOC2(store,  8, 15, STOREDIM, STOREDIM) = (  Ptempy * x_2_15_0 + WPtempy * x_2_15_1 + ABtemp * (x_0_15_0 -  CDcom * x_0_15_1) + 2 * ABCDtemp * x_2_5_1);
                        LOC2(store,  8, 16, STOREDIM, STOREDIM) = (  Ptempy * x_2_16_0 + WPtempy * x_2_16_1 + ABtemp * (x_0_16_0 -  CDcom * x_0_16_1) + ABCDtemp * x_2_9_1);
                        LOC2(store,  8, 17, STOREDIM, STOREDIM) = (  Ptempy * x_2_17_0 + WPtempy * x_2_17_1 + ABtemp * (x_0_17_0 -  CDcom * x_0_17_1));
                        LOC2(store,  8, 18, STOREDIM, STOREDIM) = (  Ptempy * x_2_18_0 + WPtempy * x_2_18_1 + ABtemp * (x_0_18_0 -  CDcom * x_0_18_1) + 3 * ABCDtemp * x_2_8_1);
                        LOC2(store,  8, 19, STOREDIM, STOREDIM) = (  Ptempy * x_2_19_0 + WPtempy * x_2_19_1 + ABtemp * (x_0_19_0 -  CDcom * x_0_19_1));
                        LOC2(store,  9, 10, STOREDIM, STOREDIM) = (  Ptempz * x_3_10_0 + WPtempz * x_3_10_1 + ABtemp * (x_0_10_0 -  CDcom * x_0_10_1) + ABCDtemp * x_3_4_1);
                        LOC2(store,  9, 11, STOREDIM, STOREDIM) = (  Ptempz * x_3_11_0 + WPtempz * x_3_11_1 + ABtemp * (x_0_11_0 -  CDcom * x_0_11_1));
                        LOC2(store,  9, 12, STOREDIM, STOREDIM) = (  Ptempz * x_3_12_0 + WPtempz * x_3_12_1 + ABtemp * (x_0_12_0 -  CDcom * x_0_12_1));
                        LOC2(store,  9, 13, STOREDIM, STOREDIM) = (  Ptempz * x_3_13_0 + WPtempz * x_3_13_1 + ABtemp * (x_0_13_0 -  CDcom * x_0_13_1) + ABCDtemp * x_3_7_1);
                        LOC2(store,  9, 14, STOREDIM, STOREDIM) = (  Ptempz * x_3_14_0 + WPtempz * x_3_14_1 + ABtemp * (x_0_14_0 -  CDcom * x_0_14_1) + 2 * ABCDtemp * x_3_6_1);
                        LOC2(store,  9, 15, STOREDIM, STOREDIM) = (  Ptempz * x_3_15_0 + WPtempz * x_3_15_1 + ABtemp * (x_0_15_0 -  CDcom * x_0_15_1) + ABCDtemp * x_3_8_1);
                        LOC2(store,  9, 16, STOREDIM, STOREDIM) = (  Ptempz * x_3_16_0 + WPtempz * x_3_16_1 + ABtemp * (x_0_16_0 -  CDcom * x_0_16_1) + 2 * ABCDtemp * x_3_5_1);
                        LOC2(store,  9, 17, STOREDIM, STOREDIM) = (  Ptempz * x_3_17_0 + WPtempz * x_3_17_1 + ABtemp * (x_0_17_0 -  CDcom * x_0_17_1));
                        LOC2(store,  9, 18, STOREDIM, STOREDIM) = (  Ptempz * x_3_18_0 + WPtempz * x_3_18_1 + ABtemp * (x_0_18_0 -  CDcom * x_0_18_1));
                        LOC2(store,  9, 19, STOREDIM, STOREDIM) = (  Ptempz * x_3_19_0 + WPtempz * x_3_19_1 + ABtemp * (x_0_19_0 -  CDcom * x_0_19_1) + 3 * ABCDtemp * x_3_9_1);
                        if ((I+J) >=  2 && (K+L)>= 4) {
                            // Subroutine for L =            0  B =            1 , m=           5
                            QUICKDouble x_0_1_5 = Qtempx * VY( 0, 0, 5) + WQtempx * VY( 0, 0, 6);
                            QUICKDouble x_0_2_5 = Qtempy * VY( 0, 0, 5) + WQtempy * VY( 0, 0, 6);
                            QUICKDouble x_0_3_5 = Qtempz * VY( 0, 0, 5) + WQtempz * VY( 0, 0, 6);
                            
                            // Subroutine for L =            0  B =            2 , m=           4
                            QUICKDouble x_0_4_4 = Qtempx * x_0_2_4 + WQtempx * x_0_2_5;
                            QUICKDouble x_0_5_4 = Qtempy * x_0_3_4 + WQtempy * x_0_3_5;
                            QUICKDouble x_0_6_4 = Qtempx * x_0_3_4 + WQtempx * x_0_3_5;
                            QUICKDouble x_0_7_4 = Qtempx * x_0_1_4 + WQtempx * x_0_1_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                            QUICKDouble x_0_8_4 = Qtempy * x_0_2_4 + WQtempy * x_0_2_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                            QUICKDouble x_0_9_4 = Qtempz * x_0_3_4 + WQtempz * x_0_3_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                            
                            // Subroutine for L =            0  B =            3 , m=           3
                            QUICKDouble x_0_10_3 = Qtempx * x_0_5_3 + WQtempx * x_0_5_4;
                            QUICKDouble x_0_11_3 = Qtempx * x_0_4_3 + WQtempx * x_0_4_4 + CDtemp * (x_0_2_3 -  ABcom * x_0_2_4);
                            QUICKDouble x_0_12_3 = Qtempx * x_0_8_3 + WQtempx * x_0_8_4;
                            QUICKDouble x_0_13_3 = Qtempx * x_0_6_3 + WQtempx * x_0_6_4 + CDtemp * (x_0_3_3 -  ABcom * x_0_3_4);
                            QUICKDouble x_0_14_3 = Qtempx * x_0_9_3 + WQtempx * x_0_9_4;
                            QUICKDouble x_0_15_3 = Qtempy * x_0_5_3 + WQtempy * x_0_5_4 + CDtemp * (x_0_3_3 -  ABcom * x_0_3_4);
                            QUICKDouble x_0_16_3 = Qtempy * x_0_9_3 + WQtempy * x_0_9_4;
                            QUICKDouble x_0_17_3 = Qtempx * x_0_7_3 + WQtempx * x_0_7_4 + CDtemp * 2 * (x_0_1_3 -  ABcom * x_0_1_4);
                            QUICKDouble x_0_18_3 = Qtempy * x_0_8_3 + WQtempy * x_0_8_4 + CDtemp * 2 * (x_0_2_3 -  ABcom * x_0_2_4);
                            QUICKDouble x_0_19_3 = Qtempz * x_0_9_3 + WQtempz * x_0_9_4 + CDtemp * 2 * (x_0_3_3 -  ABcom * x_0_3_4);
                            
                            // Subroutine for L =            0  B =            4 , m=           0
                            QUICKDouble x_0_20_0 = Qtempx * x_0_12_0 + WQtempx * x_0_12_1 + CDtemp * (x_0_8_0 -  ABcom * x_0_8_1);
                            QUICKDouble x_0_21_0 = Qtempx * x_0_14_0 + WQtempx * x_0_14_1 + CDtemp * (x_0_9_0 -  ABcom * x_0_9_1);
                            QUICKDouble x_0_22_0 = Qtempy * x_0_16_0 + WQtempy * x_0_16_1 + CDtemp * (x_0_9_0 -  ABcom * x_0_9_1);
                            QUICKDouble x_0_23_0 = Qtempx * x_0_10_0 + WQtempx * x_0_10_1 + CDtemp * (x_0_5_0 -  ABcom * x_0_5_1);
                            QUICKDouble x_0_24_0 = Qtempx * x_0_15_0 + WQtempx * x_0_15_1;
                            QUICKDouble x_0_25_0 = Qtempx * x_0_16_0 + WQtempx * x_0_16_1;
                            QUICKDouble x_0_26_0 = Qtempx * x_0_13_0 + WQtempx * x_0_13_1 + CDtemp * 2 * (x_0_6_0 -  ABcom * x_0_6_1);
                            QUICKDouble x_0_27_0 = Qtempx * x_0_19_0 + WQtempx * x_0_19_1;
                            QUICKDouble x_0_28_0 = Qtempx * x_0_11_0 + WQtempx * x_0_11_1 + CDtemp * 2 * (x_0_4_0 -  ABcom * x_0_4_1);
                            QUICKDouble x_0_29_0 = Qtempx * x_0_18_0 + WQtempx * x_0_18_1;
                            QUICKDouble x_0_30_0 = Qtempy * x_0_15_0 + WQtempy * x_0_15_1 + CDtemp * 2 * (x_0_5_0 -  ABcom * x_0_5_1);
                            QUICKDouble x_0_31_0 = Qtempy * x_0_19_0 + WQtempy * x_0_19_1;
                            QUICKDouble x_0_32_0 = Qtempx * x_0_17_0 + WQtempx * x_0_17_1 + CDtemp * 3 * (x_0_7_0 -  ABcom * x_0_7_1);
                            QUICKDouble x_0_33_0 = Qtempy * x_0_18_0 + WQtempy * x_0_18_1 + CDtemp * 3 * (x_0_8_0 -  ABcom * x_0_8_1);
                            QUICKDouble x_0_34_0 = Qtempz * x_0_19_0 + WQtempz * x_0_19_1 + CDtemp * 3 * (x_0_9_0 -  ABcom * x_0_9_1);
                            
                            // Subroutine for L =            0  B =            4 , m=           1
                            QUICKDouble x_0_20_1 = Qtempx * x_0_12_1 + WQtempx * x_0_12_2 + CDtemp * (x_0_8_1 -  ABcom * x_0_8_2);
                            QUICKDouble x_0_21_1 = Qtempx * x_0_14_1 + WQtempx * x_0_14_2 + CDtemp * (x_0_9_1 -  ABcom * x_0_9_2);
                            QUICKDouble x_0_22_1 = Qtempy * x_0_16_1 + WQtempy * x_0_16_2 + CDtemp * (x_0_9_1 -  ABcom * x_0_9_2);
                            QUICKDouble x_0_23_1 = Qtempx * x_0_10_1 + WQtempx * x_0_10_2 + CDtemp * (x_0_5_1 -  ABcom * x_0_5_2);
                            QUICKDouble x_0_24_1 = Qtempx * x_0_15_1 + WQtempx * x_0_15_2;
                            QUICKDouble x_0_25_1 = Qtempx * x_0_16_1 + WQtempx * x_0_16_2;
                            QUICKDouble x_0_26_1 = Qtempx * x_0_13_1 + WQtempx * x_0_13_2 + CDtemp * 2 * (x_0_6_1 -  ABcom * x_0_6_2);
                            QUICKDouble x_0_27_1 = Qtempx * x_0_19_1 + WQtempx * x_0_19_2;
                            QUICKDouble x_0_28_1 = Qtempx * x_0_11_1 + WQtempx * x_0_11_2 + CDtemp * 2 * (x_0_4_1 -  ABcom * x_0_4_2);
                            QUICKDouble x_0_29_1 = Qtempx * x_0_18_1 + WQtempx * x_0_18_2;
                            QUICKDouble x_0_30_1 = Qtempy * x_0_15_1 + WQtempy * x_0_15_2 + CDtemp * 2 * (x_0_5_1 -  ABcom * x_0_5_2);
                            QUICKDouble x_0_31_1 = Qtempy * x_0_19_1 + WQtempy * x_0_19_2;
                            QUICKDouble x_0_32_1 = Qtempx * x_0_17_1 + WQtempx * x_0_17_2 + CDtemp * 3 * (x_0_7_1 -  ABcom * x_0_7_2);
                            QUICKDouble x_0_33_1 = Qtempy * x_0_18_1 + WQtempy * x_0_18_2 + CDtemp * 3 * (x_0_8_1 -  ABcom * x_0_8_2);
                            QUICKDouble x_0_34_1 = Qtempz * x_0_19_1 + WQtempz * x_0_19_2 + CDtemp * 3 * (x_0_9_1 -  ABcom * x_0_9_2);
                            
                            // Subroutine for L =            0  B =            4 , m=           2
                            QUICKDouble x_0_20_2 = Qtempx * x_0_12_2 + WQtempx * x_0_12_3 + CDtemp * (x_0_8_2 -  ABcom * x_0_8_3);
                            QUICKDouble x_0_21_2 = Qtempx * x_0_14_2 + WQtempx * x_0_14_3 + CDtemp * (x_0_9_2 -  ABcom * x_0_9_3);
                            QUICKDouble x_0_22_2 = Qtempy * x_0_16_2 + WQtempy * x_0_16_3 + CDtemp * (x_0_9_2 -  ABcom * x_0_9_3);
                            QUICKDouble x_0_23_2 = Qtempx * x_0_10_2 + WQtempx * x_0_10_3 + CDtemp * (x_0_5_2 -  ABcom * x_0_5_3);
                            QUICKDouble x_0_24_2 = Qtempx * x_0_15_2 + WQtempx * x_0_15_3;
                            QUICKDouble x_0_25_2 = Qtempx * x_0_16_2 + WQtempx * x_0_16_3;
                            QUICKDouble x_0_26_2 = Qtempx * x_0_13_2 + WQtempx * x_0_13_3 + CDtemp * 2 * (x_0_6_2 -  ABcom * x_0_6_3);
                            QUICKDouble x_0_27_2 = Qtempx * x_0_19_2 + WQtempx * x_0_19_3;
                            QUICKDouble x_0_28_2 = Qtempx * x_0_11_2 + WQtempx * x_0_11_3 + CDtemp * 2 * (x_0_4_2 -  ABcom * x_0_4_3);
                            QUICKDouble x_0_29_2 = Qtempx * x_0_18_2 + WQtempx * x_0_18_3;
                            QUICKDouble x_0_30_2 = Qtempy * x_0_15_2 + WQtempy * x_0_15_3 + CDtemp * 2 * (x_0_5_2 -  ABcom * x_0_5_3);
                            QUICKDouble x_0_31_2 = Qtempy * x_0_19_2 + WQtempy * x_0_19_3;
                            QUICKDouble x_0_32_2 = Qtempx * x_0_17_2 + WQtempx * x_0_17_3 + CDtemp * 3 * (x_0_7_2 -  ABcom * x_0_7_3);
                            QUICKDouble x_0_33_2 = Qtempy * x_0_18_2 + WQtempy * x_0_18_3 + CDtemp * 3 * (x_0_8_2 -  ABcom * x_0_8_3);
                            QUICKDouble x_0_34_2 = Qtempz * x_0_19_2 + WQtempz * x_0_19_3 + CDtemp * 3 * (x_0_9_2 -  ABcom * x_0_9_3);
                            
                            // Subroutine for L =            1  B =            4 , m=           0
                            QUICKDouble x_1_20_0 = Ptempx * x_0_20_0 + WPtempx * x_0_20_1 + 2 * ABCDtemp * x_0_12_1;
                            QUICKDouble x_1_21_0 = Ptempx * x_0_21_0 + WPtempx * x_0_21_1 + 2 * ABCDtemp * x_0_14_1;
                            QUICKDouble x_1_22_0 = Ptempx * x_0_22_0 + WPtempx * x_0_22_1;
                            QUICKDouble x_1_23_0 = Ptempx * x_0_23_0 + WPtempx * x_0_23_1 + 2 * ABCDtemp * x_0_10_1;
                            QUICKDouble x_1_24_0 = Ptempx * x_0_24_0 + WPtempx * x_0_24_1 + ABCDtemp * x_0_15_1;
                            QUICKDouble x_1_25_0 = Ptempx * x_0_25_0 + WPtempx * x_0_25_1 + ABCDtemp * x_0_16_1;
                            QUICKDouble x_1_26_0 = Ptempx * x_0_26_0 + WPtempx * x_0_26_1 + 3 * ABCDtemp * x_0_13_1;
                            QUICKDouble x_1_27_0 = Ptempx * x_0_27_0 + WPtempx * x_0_27_1 + ABCDtemp * x_0_19_1;
                            QUICKDouble x_1_28_0 = Ptempx * x_0_28_0 + WPtempx * x_0_28_1 + 3 * ABCDtemp * x_0_11_1;
                            QUICKDouble x_1_29_0 = Ptempx * x_0_29_0 + WPtempx * x_0_29_1 + ABCDtemp * x_0_18_1;
                            QUICKDouble x_1_30_0 = Ptempx * x_0_30_0 + WPtempx * x_0_30_1;
                            QUICKDouble x_1_31_0 = Ptempx * x_0_31_0 + WPtempx * x_0_31_1;
                            QUICKDouble x_1_32_0 = Ptempx * x_0_32_0 + WPtempx * x_0_32_1 + 4 * ABCDtemp * x_0_17_1;
                            QUICKDouble x_1_33_0 = Ptempx * x_0_33_0 + WPtempx * x_0_33_1;
                            QUICKDouble x_1_34_0 = Ptempx * x_0_34_0 + WPtempx * x_0_34_1;
                            QUICKDouble x_2_20_0 = Ptempy * x_0_20_0 + WPtempy * x_0_20_1 + 2 * ABCDtemp * x_0_11_1;
                            QUICKDouble x_2_21_0 = Ptempy * x_0_21_0 + WPtempy * x_0_21_1;
                            QUICKDouble x_2_22_0 = Ptempy * x_0_22_0 + WPtempy * x_0_22_1 + 2 * ABCDtemp * x_0_16_1;
                            QUICKDouble x_2_23_0 = Ptempy * x_0_23_0 + WPtempy * x_0_23_1 + ABCDtemp * x_0_13_1;
                            QUICKDouble x_2_24_0 = Ptempy * x_0_24_0 + WPtempy * x_0_24_1 + 2 * ABCDtemp * x_0_10_1;
                            QUICKDouble x_2_25_0 = Ptempy * x_0_25_0 + WPtempy * x_0_25_1 + ABCDtemp * x_0_14_1;
                            QUICKDouble x_2_26_0 = Ptempy * x_0_26_0 + WPtempy * x_0_26_1;
                            QUICKDouble x_2_27_0 = Ptempy * x_0_27_0 + WPtempy * x_0_27_1;
                            QUICKDouble x_2_28_0 = Ptempy * x_0_28_0 + WPtempy * x_0_28_1 + ABCDtemp * x_0_17_1;
                            QUICKDouble x_2_29_0 = Ptempy * x_0_29_0 + WPtempy * x_0_29_1 + 3 * ABCDtemp * x_0_12_1;
                            QUICKDouble x_2_30_0 = Ptempy * x_0_30_0 + WPtempy * x_0_30_1 + 3 * ABCDtemp * x_0_15_1;
                            QUICKDouble x_2_31_0 = Ptempy * x_0_31_0 + WPtempy * x_0_31_1 + ABCDtemp * x_0_19_1;
                            QUICKDouble x_2_32_0 = Ptempy * x_0_32_0 + WPtempy * x_0_32_1;
                            QUICKDouble x_2_33_0 = Ptempy * x_0_33_0 + WPtempy * x_0_33_1 + 4 * ABCDtemp * x_0_18_1;
                            QUICKDouble x_2_34_0 = Ptempy * x_0_34_0 + WPtempy * x_0_34_1;
                            QUICKDouble x_3_20_0 = Ptempz * x_0_20_0 + WPtempz * x_0_20_1;
                            QUICKDouble x_3_21_0 = Ptempz * x_0_21_0 + WPtempz * x_0_21_1 + 2 * ABCDtemp * x_0_13_1;
                            QUICKDouble x_3_22_0 = Ptempz * x_0_22_0 + WPtempz * x_0_22_1 + 2 * ABCDtemp * x_0_15_1;
                            QUICKDouble x_3_23_0 = Ptempz * x_0_23_0 + WPtempz * x_0_23_1 + ABCDtemp * x_0_11_1;
                            QUICKDouble x_3_24_0 = Ptempz * x_0_24_0 + WPtempz * x_0_24_1 + ABCDtemp * x_0_12_1;
                            QUICKDouble x_3_25_0 = Ptempz * x_0_25_0 + WPtempz * x_0_25_1 + 2 * ABCDtemp * x_0_10_1;
                            QUICKDouble x_3_26_0 = Ptempz * x_0_26_0 + WPtempz * x_0_26_1 + ABCDtemp * x_0_17_1;
                            QUICKDouble x_3_27_0 = Ptempz * x_0_27_0 + WPtempz * x_0_27_1 + 3 * ABCDtemp * x_0_14_1;
                            QUICKDouble x_3_28_0 = Ptempz * x_0_28_0 + WPtempz * x_0_28_1;
                            QUICKDouble x_3_29_0 = Ptempz * x_0_29_0 + WPtempz * x_0_29_1;
                            QUICKDouble x_3_30_0 = Ptempz * x_0_30_0 + WPtempz * x_0_30_1 + ABCDtemp * x_0_18_1;
                            QUICKDouble x_3_31_0 = Ptempz * x_0_31_0 + WPtempz * x_0_31_1 + 3 * ABCDtemp * x_0_16_1;
                            QUICKDouble x_3_32_0 = Ptempz * x_0_32_0 + WPtempz * x_0_32_1;
                            QUICKDouble x_3_33_0 = Ptempz * x_0_33_0 + WPtempz * x_0_33_1;
                            QUICKDouble x_3_34_0 = Ptempz * x_0_34_0 + WPtempz * x_0_34_1 + 4 * ABCDtemp * x_0_19_1;
                            
                            // Subroutine for L =            1  B =            4 , m=           1
                            QUICKDouble x_1_20_1 = Ptempx * x_0_20_1 + WPtempx * x_0_20_2 + 2 * ABCDtemp * x_0_12_2;
                            QUICKDouble x_1_21_1 = Ptempx * x_0_21_1 + WPtempx * x_0_21_2 + 2 * ABCDtemp * x_0_14_2;
                            QUICKDouble x_1_22_1 = Ptempx * x_0_22_1 + WPtempx * x_0_22_2;
                            QUICKDouble x_1_23_1 = Ptempx * x_0_23_1 + WPtempx * x_0_23_2 + 2 * ABCDtemp * x_0_10_2;
                            QUICKDouble x_1_24_1 = Ptempx * x_0_24_1 + WPtempx * x_0_24_2 + ABCDtemp * x_0_15_2;
                            QUICKDouble x_1_25_1 = Ptempx * x_0_25_1 + WPtempx * x_0_25_2 + ABCDtemp * x_0_16_2;
                            QUICKDouble x_1_26_1 = Ptempx * x_0_26_1 + WPtempx * x_0_26_2 + 3 * ABCDtemp * x_0_13_2;
                            QUICKDouble x_1_27_1 = Ptempx * x_0_27_1 + WPtempx * x_0_27_2 + ABCDtemp * x_0_19_2;
                            QUICKDouble x_1_28_1 = Ptempx * x_0_28_1 + WPtempx * x_0_28_2 + 3 * ABCDtemp * x_0_11_2;
                            QUICKDouble x_1_29_1 = Ptempx * x_0_29_1 + WPtempx * x_0_29_2 + ABCDtemp * x_0_18_2;
                            QUICKDouble x_1_30_1 = Ptempx * x_0_30_1 + WPtempx * x_0_30_2;
                            QUICKDouble x_1_31_1 = Ptempx * x_0_31_1 + WPtempx * x_0_31_2;
                            QUICKDouble x_1_32_1 = Ptempx * x_0_32_1 + WPtempx * x_0_32_2 + 4 * ABCDtemp * x_0_17_2;
                            QUICKDouble x_1_33_1 = Ptempx * x_0_33_1 + WPtempx * x_0_33_2;
                            QUICKDouble x_1_34_1 = Ptempx * x_0_34_1 + WPtempx * x_0_34_2;
                            QUICKDouble x_2_20_1 = Ptempy * x_0_20_1 + WPtempy * x_0_20_2 + 2 * ABCDtemp * x_0_11_2;
                            QUICKDouble x_2_21_1 = Ptempy * x_0_21_1 + WPtempy * x_0_21_2;
                            QUICKDouble x_2_22_1 = Ptempy * x_0_22_1 + WPtempy * x_0_22_2 + 2 * ABCDtemp * x_0_16_2;
                            QUICKDouble x_2_23_1 = Ptempy * x_0_23_1 + WPtempy * x_0_23_2 + ABCDtemp * x_0_13_2;
                            QUICKDouble x_2_24_1 = Ptempy * x_0_24_1 + WPtempy * x_0_24_2 + 2 * ABCDtemp * x_0_10_2;
                            QUICKDouble x_2_25_1 = Ptempy * x_0_25_1 + WPtempy * x_0_25_2 + ABCDtemp * x_0_14_2;
                            QUICKDouble x_2_26_1 = Ptempy * x_0_26_1 + WPtempy * x_0_26_2;
                            QUICKDouble x_2_27_1 = Ptempy * x_0_27_1 + WPtempy * x_0_27_2;
                            QUICKDouble x_2_28_1 = Ptempy * x_0_28_1 + WPtempy * x_0_28_2 + ABCDtemp * x_0_17_2;
                            QUICKDouble x_2_29_1 = Ptempy * x_0_29_1 + WPtempy * x_0_29_2 + 3 * ABCDtemp * x_0_12_2;
                            QUICKDouble x_2_30_1 = Ptempy * x_0_30_1 + WPtempy * x_0_30_2 + 3 * ABCDtemp * x_0_15_2;
                            QUICKDouble x_2_31_1 = Ptempy * x_0_31_1 + WPtempy * x_0_31_2 + ABCDtemp * x_0_19_2;
                            QUICKDouble x_2_32_1 = Ptempy * x_0_32_1 + WPtempy * x_0_32_2;
                            QUICKDouble x_2_33_1 = Ptempy * x_0_33_1 + WPtempy * x_0_33_2 + 4 * ABCDtemp * x_0_18_2;
                            QUICKDouble x_2_34_1 = Ptempy * x_0_34_1 + WPtempy * x_0_34_2;
                            QUICKDouble x_3_20_1 = Ptempz * x_0_20_1 + WPtempz * x_0_20_2;
                            QUICKDouble x_3_21_1 = Ptempz * x_0_21_1 + WPtempz * x_0_21_2 + 2 * ABCDtemp * x_0_13_2;
                            QUICKDouble x_3_22_1 = Ptempz * x_0_22_1 + WPtempz * x_0_22_2 + 2 * ABCDtemp * x_0_15_2;
                            QUICKDouble x_3_23_1 = Ptempz * x_0_23_1 + WPtempz * x_0_23_2 + ABCDtemp * x_0_11_2;
                            QUICKDouble x_3_24_1 = Ptempz * x_0_24_1 + WPtempz * x_0_24_2 + ABCDtemp * x_0_12_2;
                            QUICKDouble x_3_25_1 = Ptempz * x_0_25_1 + WPtempz * x_0_25_2 + 2 * ABCDtemp * x_0_10_2;
                            QUICKDouble x_3_26_1 = Ptempz * x_0_26_1 + WPtempz * x_0_26_2 + ABCDtemp * x_0_17_2;
                            QUICKDouble x_3_27_1 = Ptempz * x_0_27_1 + WPtempz * x_0_27_2 + 3 * ABCDtemp * x_0_14_2;
                            QUICKDouble x_3_28_1 = Ptempz * x_0_28_1 + WPtempz * x_0_28_2;
                            QUICKDouble x_3_29_1 = Ptempz * x_0_29_1 + WPtempz * x_0_29_2;
                            QUICKDouble x_3_30_1 = Ptempz * x_0_30_1 + WPtempz * x_0_30_2 + ABCDtemp * x_0_18_2;
                            QUICKDouble x_3_31_1 = Ptempz * x_0_31_1 + WPtempz * x_0_31_2 + 3 * ABCDtemp * x_0_16_2;
                            QUICKDouble x_3_32_1 = Ptempz * x_0_32_1 + WPtempz * x_0_32_2;
                            QUICKDouble x_3_33_1 = Ptempz * x_0_33_1 + WPtempz * x_0_33_2;
                            QUICKDouble x_3_34_1 = Ptempz * x_0_34_1 + WPtempz * x_0_34_2 + 4 * ABCDtemp * x_0_19_2;
                            
                            // Subroutine for L =            2  B =            4 , m=           0
                            QUICKDouble x_4_20_0 = Ptempx * x_2_20_0 + WPtempx * x_2_20_1 + 2 * ABCDtemp * x_2_12_1;
                            QUICKDouble x_4_21_0 = Ptempx * x_2_21_0 + WPtempx * x_2_21_1 + 2 * ABCDtemp * x_2_14_1;
                            QUICKDouble x_4_22_0 = Ptempx * x_2_22_0 + WPtempx * x_2_22_1;
                            QUICKDouble x_4_23_0 = Ptempx * x_2_23_0 + WPtempx * x_2_23_1 + 2 * ABCDtemp * x_2_10_1;
                            QUICKDouble x_4_24_0 = Ptempx * x_2_24_0 + WPtempx * x_2_24_1 + ABCDtemp * x_2_15_1;
                            QUICKDouble x_4_25_0 = Ptempx * x_2_25_0 + WPtempx * x_2_25_1 + ABCDtemp * x_2_16_1;
                            QUICKDouble x_4_26_0 = Ptempx * x_2_26_0 + WPtempx * x_2_26_1 + 3 * ABCDtemp * x_2_13_1;
                            QUICKDouble x_4_27_0 = Ptempx * x_2_27_0 + WPtempx * x_2_27_1 + ABCDtemp * x_2_19_1;
                            QUICKDouble x_4_28_0 = Ptempx * x_2_28_0 + WPtempx * x_2_28_1 + 3 * ABCDtemp * x_2_11_1;
                            QUICKDouble x_4_29_0 = Ptempx * x_2_29_0 + WPtempx * x_2_29_1 + ABCDtemp * x_2_18_1;
                            QUICKDouble x_4_30_0 = Ptempx * x_2_30_0 + WPtempx * x_2_30_1;
                            QUICKDouble x_4_31_0 = Ptempx * x_2_31_0 + WPtempx * x_2_31_1;
                            QUICKDouble x_4_32_0 = Ptempx * x_2_32_0 + WPtempx * x_2_32_1 + 4 * ABCDtemp * x_2_17_1;
                            QUICKDouble x_4_33_0 = Ptempx * x_2_33_0 + WPtempx * x_2_33_1;
                            QUICKDouble x_4_34_0 = Ptempx * x_2_34_0 + WPtempx * x_2_34_1;
                            QUICKDouble x_5_20_0 = Ptempy * x_3_20_0 + WPtempy * x_3_20_1 + 2 * ABCDtemp * x_3_11_1;
                            QUICKDouble x_5_21_0 = Ptempy * x_3_21_0 + WPtempy * x_3_21_1;
                            QUICKDouble x_5_22_0 = Ptempy * x_3_22_0 + WPtempy * x_3_22_1 + 2 * ABCDtemp * x_3_16_1;
                            QUICKDouble x_5_23_0 = Ptempy * x_3_23_0 + WPtempy * x_3_23_1 + ABCDtemp * x_3_13_1;
                            QUICKDouble x_5_24_0 = Ptempy * x_3_24_0 + WPtempy * x_3_24_1 + 2 * ABCDtemp * x_3_10_1;
                            QUICKDouble x_5_25_0 = Ptempy * x_3_25_0 + WPtempy * x_3_25_1 + ABCDtemp * x_3_14_1;
                            QUICKDouble x_5_26_0 = Ptempy * x_3_26_0 + WPtempy * x_3_26_1;
                            QUICKDouble x_5_27_0 = Ptempy * x_3_27_0 + WPtempy * x_3_27_1;
                            QUICKDouble x_5_28_0 = Ptempy * x_3_28_0 + WPtempy * x_3_28_1 + ABCDtemp * x_3_17_1;
                            QUICKDouble x_5_29_0 = Ptempy * x_3_29_0 + WPtempy * x_3_29_1 + 3 * ABCDtemp * x_3_12_1;
                            QUICKDouble x_5_30_0 = Ptempy * x_3_30_0 + WPtempy * x_3_30_1 + 3 * ABCDtemp * x_3_15_1;
                            QUICKDouble x_5_31_0 = Ptempy * x_3_31_0 + WPtempy * x_3_31_1 + ABCDtemp * x_3_19_1;
                            QUICKDouble x_5_32_0 = Ptempy * x_3_32_0 + WPtempy * x_3_32_1;
                            QUICKDouble x_5_33_0 = Ptempy * x_3_33_0 + WPtempy * x_3_33_1 + 4 * ABCDtemp * x_3_18_1;
                            QUICKDouble x_5_34_0 = Ptempy * x_3_34_0 + WPtempy * x_3_34_1;
                            QUICKDouble x_6_20_0 = Ptempx * x_3_20_0 + WPtempx * x_3_20_1 + 2 * ABCDtemp * x_3_12_1;
                            QUICKDouble x_6_21_0 = Ptempx * x_3_21_0 + WPtempx * x_3_21_1 + 2 * ABCDtemp * x_3_14_1;
                            QUICKDouble x_6_22_0 = Ptempx * x_3_22_0 + WPtempx * x_3_22_1;
                            QUICKDouble x_6_23_0 = Ptempx * x_3_23_0 + WPtempx * x_3_23_1 + 2 * ABCDtemp * x_3_10_1;
                            QUICKDouble x_6_24_0 = Ptempx * x_3_24_0 + WPtempx * x_3_24_1 + ABCDtemp * x_3_15_1;
                            QUICKDouble x_6_25_0 = Ptempx * x_3_25_0 + WPtempx * x_3_25_1 + ABCDtemp * x_3_16_1;
                            QUICKDouble x_6_26_0 = Ptempx * x_3_26_0 + WPtempx * x_3_26_1 + 3 * ABCDtemp * x_3_13_1;
                            QUICKDouble x_6_27_0 = Ptempx * x_3_27_0 + WPtempx * x_3_27_1 + ABCDtemp * x_3_19_1;
                            QUICKDouble x_6_28_0 = Ptempx * x_3_28_0 + WPtempx * x_3_28_1 + 3 * ABCDtemp * x_3_11_1;
                            QUICKDouble x_6_29_0 = Ptempx * x_3_29_0 + WPtempx * x_3_29_1 + ABCDtemp * x_3_18_1;
                            QUICKDouble x_6_30_0 = Ptempx * x_3_30_0 + WPtempx * x_3_30_1;
                            QUICKDouble x_6_31_0 = Ptempx * x_3_31_0 + WPtempx * x_3_31_1;
                            QUICKDouble x_6_32_0 = Ptempx * x_3_32_0 + WPtempx * x_3_32_1 + 4 * ABCDtemp * x_3_17_1;
                            QUICKDouble x_6_33_0 = Ptempx * x_3_33_0 + WPtempx * x_3_33_1;
                            QUICKDouble x_6_34_0 = Ptempx * x_3_34_0 + WPtempx * x_3_34_1;
                            QUICKDouble x_7_20_0 = Ptempx * x_1_20_0 + WPtempx * x_1_20_1 + ABtemp * (x_0_20_0 -  CDcom * x_0_20_1) + 2 * ABCDtemp * x_1_12_1;
                            QUICKDouble x_7_21_0 = Ptempx * x_1_21_0 + WPtempx * x_1_21_1 + ABtemp * (x_0_21_0 -  CDcom * x_0_21_1) + 2 * ABCDtemp * x_1_14_1;
                            QUICKDouble x_7_22_0 = Ptempx * x_1_22_0 + WPtempx * x_1_22_1 + ABtemp * (x_0_22_0 -  CDcom * x_0_22_1);
                            QUICKDouble x_7_23_0 = Ptempx * x_1_23_0 + WPtempx * x_1_23_1 + ABtemp * (x_0_23_0 -  CDcom * x_0_23_1) + 2 * ABCDtemp * x_1_10_1;
                            QUICKDouble x_7_24_0 = Ptempx * x_1_24_0 + WPtempx * x_1_24_1 + ABtemp * (x_0_24_0 -  CDcom * x_0_24_1) + ABCDtemp * x_1_15_1;
                            QUICKDouble x_7_25_0 = Ptempx * x_1_25_0 + WPtempx * x_1_25_1 + ABtemp * (x_0_25_0 -  CDcom * x_0_25_1) + ABCDtemp * x_1_16_1;
                            QUICKDouble x_7_26_0 = Ptempx * x_1_26_0 + WPtempx * x_1_26_1 + ABtemp * (x_0_26_0 -  CDcom * x_0_26_1) + 3 * ABCDtemp * x_1_13_1;
                            QUICKDouble x_7_27_0 = Ptempx * x_1_27_0 + WPtempx * x_1_27_1 + ABtemp * (x_0_27_0 -  CDcom * x_0_27_1) + ABCDtemp * x_1_19_1;
                            QUICKDouble x_7_28_0 = Ptempx * x_1_28_0 + WPtempx * x_1_28_1 + ABtemp * (x_0_28_0 -  CDcom * x_0_28_1) + 3 * ABCDtemp * x_1_11_1;
                            QUICKDouble x_7_29_0 = Ptempx * x_1_29_0 + WPtempx * x_1_29_1 + ABtemp * (x_0_29_0 -  CDcom * x_0_29_1) + ABCDtemp * x_1_18_1;
                            QUICKDouble x_7_30_0 = Ptempx * x_1_30_0 + WPtempx * x_1_30_1 + ABtemp * (x_0_30_0 -  CDcom * x_0_30_1);
                            QUICKDouble x_7_31_0 = Ptempx * x_1_31_0 + WPtempx * x_1_31_1 + ABtemp * (x_0_31_0 -  CDcom * x_0_31_1);
                            QUICKDouble x_7_32_0 = Ptempx * x_1_32_0 + WPtempx * x_1_32_1 + ABtemp * (x_0_32_0 -  CDcom * x_0_32_1) + 4 * ABCDtemp * x_1_17_1;
                            QUICKDouble x_7_33_0 = Ptempx * x_1_33_0 + WPtempx * x_1_33_1 + ABtemp * (x_0_33_0 -  CDcom * x_0_33_1);
                            QUICKDouble x_7_34_0 = Ptempx * x_1_34_0 + WPtempx * x_1_34_1 + ABtemp * (x_0_34_0 -  CDcom * x_0_34_1);
                            QUICKDouble x_8_20_0 = Ptempy * x_2_20_0 + WPtempy * x_2_20_1 + ABtemp * (x_0_20_0 -  CDcom * x_0_20_1) + 2 * ABCDtemp * x_2_11_1;
                            QUICKDouble x_8_21_0 = Ptempy * x_2_21_0 + WPtempy * x_2_21_1 + ABtemp * (x_0_21_0 -  CDcom * x_0_21_1);
                            QUICKDouble x_8_22_0 = Ptempy * x_2_22_0 + WPtempy * x_2_22_1 + ABtemp * (x_0_22_0 -  CDcom * x_0_22_1) + 2 * ABCDtemp * x_2_16_1;
                            QUICKDouble x_8_23_0 = Ptempy * x_2_23_0 + WPtempy * x_2_23_1 + ABtemp * (x_0_23_0 -  CDcom * x_0_23_1) + ABCDtemp * x_2_13_1;
                            QUICKDouble x_8_24_0 = Ptempy * x_2_24_0 + WPtempy * x_2_24_1 + ABtemp * (x_0_24_0 -  CDcom * x_0_24_1) + 2 * ABCDtemp * x_2_10_1;
                            QUICKDouble x_8_25_0 = Ptempy * x_2_25_0 + WPtempy * x_2_25_1 + ABtemp * (x_0_25_0 -  CDcom * x_0_25_1) + ABCDtemp * x_2_14_1;
                            QUICKDouble x_8_26_0 = Ptempy * x_2_26_0 + WPtempy * x_2_26_1 + ABtemp * (x_0_26_0 -  CDcom * x_0_26_1);
                            QUICKDouble x_8_27_0 = Ptempy * x_2_27_0 + WPtempy * x_2_27_1 + ABtemp * (x_0_27_0 -  CDcom * x_0_27_1);
                            QUICKDouble x_8_28_0 = Ptempy * x_2_28_0 + WPtempy * x_2_28_1 + ABtemp * (x_0_28_0 -  CDcom * x_0_28_1) + ABCDtemp * x_2_17_1;
                            QUICKDouble x_8_29_0 = Ptempy * x_2_29_0 + WPtempy * x_2_29_1 + ABtemp * (x_0_29_0 -  CDcom * x_0_29_1) + 3 * ABCDtemp * x_2_12_1;
                            QUICKDouble x_8_30_0 = Ptempy * x_2_30_0 + WPtempy * x_2_30_1 + ABtemp * (x_0_30_0 -  CDcom * x_0_30_1) + 3 * ABCDtemp * x_2_15_1;
                            QUICKDouble x_8_31_0 = Ptempy * x_2_31_0 + WPtempy * x_2_31_1 + ABtemp * (x_0_31_0 -  CDcom * x_0_31_1) + ABCDtemp * x_2_19_1;
                            QUICKDouble x_8_32_0 = Ptempy * x_2_32_0 + WPtempy * x_2_32_1 + ABtemp * (x_0_32_0 -  CDcom * x_0_32_1);
                            QUICKDouble x_8_33_0 = Ptempy * x_2_33_0 + WPtempy * x_2_33_1 + ABtemp * (x_0_33_0 -  CDcom * x_0_33_1) + 4 * ABCDtemp * x_2_18_1;
                            QUICKDouble x_8_34_0 = Ptempy * x_2_34_0 + WPtempy * x_2_34_1 + ABtemp * (x_0_34_0 -  CDcom * x_0_34_1);
                            QUICKDouble x_9_20_0 = Ptempz * x_3_20_0 + WPtempz * x_3_20_1 + ABtemp * (x_0_20_0 -  CDcom * x_0_20_1);
                            QUICKDouble x_9_21_0 = Ptempz * x_3_21_0 + WPtempz * x_3_21_1 + ABtemp * (x_0_21_0 -  CDcom * x_0_21_1) + 2 * ABCDtemp * x_3_13_1;
                            QUICKDouble x_9_22_0 = Ptempz * x_3_22_0 + WPtempz * x_3_22_1 + ABtemp * (x_0_22_0 -  CDcom * x_0_22_1) + 2 * ABCDtemp * x_3_15_1;
                            QUICKDouble x_9_23_0 = Ptempz * x_3_23_0 + WPtempz * x_3_23_1 + ABtemp * (x_0_23_0 -  CDcom * x_0_23_1) + ABCDtemp * x_3_11_1;
                            QUICKDouble x_9_24_0 = Ptempz * x_3_24_0 + WPtempz * x_3_24_1 + ABtemp * (x_0_24_0 -  CDcom * x_0_24_1) + ABCDtemp * x_3_12_1;
                            QUICKDouble x_9_25_0 = Ptempz * x_3_25_0 + WPtempz * x_3_25_1 + ABtemp * (x_0_25_0 -  CDcom * x_0_25_1) + 2 * ABCDtemp * x_3_10_1;
                            QUICKDouble x_9_26_0 = Ptempz * x_3_26_0 + WPtempz * x_3_26_1 + ABtemp * (x_0_26_0 -  CDcom * x_0_26_1) + ABCDtemp * x_3_17_1;
                            QUICKDouble x_9_27_0 = Ptempz * x_3_27_0 + WPtempz * x_3_27_1 + ABtemp * (x_0_27_0 -  CDcom * x_0_27_1) + 3 * ABCDtemp * x_3_14_1;
                            QUICKDouble x_9_28_0 = Ptempz * x_3_28_0 + WPtempz * x_3_28_1 + ABtemp * (x_0_28_0 -  CDcom * x_0_28_1);
                            QUICKDouble x_9_29_0 = Ptempz * x_3_29_0 + WPtempz * x_3_29_1 + ABtemp * (x_0_29_0 -  CDcom * x_0_29_1);
                            QUICKDouble x_9_30_0 = Ptempz * x_3_30_0 + WPtempz * x_3_30_1 + ABtemp * (x_0_30_0 -  CDcom * x_0_30_1) + ABCDtemp * x_3_18_1;
                            QUICKDouble x_9_31_0 = Ptempz * x_3_31_0 + WPtempz * x_3_31_1 + ABtemp * (x_0_31_0 -  CDcom * x_0_31_1) + 3 * ABCDtemp * x_3_16_1;
                            QUICKDouble x_9_32_0 = Ptempz * x_3_32_0 + WPtempz * x_3_32_1 + ABtemp * (x_0_32_0 -  CDcom * x_0_32_1);
                            QUICKDouble x_9_33_0 = Ptempz * x_3_33_0 + WPtempz * x_3_33_1 + ABtemp * (x_0_33_0 -  CDcom * x_0_33_1);
                            QUICKDouble x_9_34_0 = Ptempz * x_3_34_0 + WPtempz * x_3_34_1 + ABtemp * (x_0_34_0 -  CDcom * x_0_34_1) + 4 * ABCDtemp * x_3_19_1;
                            
                            // WRITE LAST FOR I =            2  J=           4
                            LOC2(store,  4, 20, STOREDIM, STOREDIM) = x_4_20_0;
                            LOC2(store,  4, 21, STOREDIM, STOREDIM) = x_4_21_0;
                            LOC2(store,  4, 22, STOREDIM, STOREDIM) = x_4_22_0;
                            LOC2(store,  4, 23, STOREDIM, STOREDIM) = x_4_23_0;
                            LOC2(store,  4, 24, STOREDIM, STOREDIM) = x_4_24_0;
                            LOC2(store,  4, 25, STOREDIM, STOREDIM) = x_4_25_0;
                            LOC2(store,  4, 26, STOREDIM, STOREDIM) = x_4_26_0;
                            LOC2(store,  4, 27, STOREDIM, STOREDIM) = x_4_27_0;
                            LOC2(store,  4, 28, STOREDIM, STOREDIM) = x_4_28_0;
                            LOC2(store,  4, 29, STOREDIM, STOREDIM) = x_4_29_0;
                            LOC2(store,  4, 30, STOREDIM, STOREDIM) = x_4_30_0;
                            LOC2(store,  4, 31, STOREDIM, STOREDIM) = x_4_31_0;
                            LOC2(store,  4, 32, STOREDIM, STOREDIM) = x_4_32_0;
                            LOC2(store,  4, 33, STOREDIM, STOREDIM) = x_4_33_0;
                            LOC2(store,  4, 34, STOREDIM, STOREDIM) = x_4_34_0;
                            LOC2(store,  5, 20, STOREDIM, STOREDIM) = x_5_20_0;
                            LOC2(store,  5, 21, STOREDIM, STOREDIM) = x_5_21_0;
                            LOC2(store,  5, 22, STOREDIM, STOREDIM) = x_5_22_0;
                            LOC2(store,  5, 23, STOREDIM, STOREDIM) = x_5_23_0;
                            LOC2(store,  5, 24, STOREDIM, STOREDIM) = x_5_24_0;
                            LOC2(store,  5, 25, STOREDIM, STOREDIM) = x_5_25_0;
                            LOC2(store,  5, 26, STOREDIM, STOREDIM) = x_5_26_0;
                            LOC2(store,  5, 27, STOREDIM, STOREDIM) = x_5_27_0;
                            LOC2(store,  5, 28, STOREDIM, STOREDIM) = x_5_28_0;
                            LOC2(store,  5, 29, STOREDIM, STOREDIM) = x_5_29_0;
                            LOC2(store,  5, 30, STOREDIM, STOREDIM) = x_5_30_0;
                            LOC2(store,  5, 31, STOREDIM, STOREDIM) = x_5_31_0;
                            LOC2(store,  5, 32, STOREDIM, STOREDIM) = x_5_32_0;
                            LOC2(store,  5, 33, STOREDIM, STOREDIM) = x_5_33_0;
                            LOC2(store,  5, 34, STOREDIM, STOREDIM) = x_5_34_0;
                            LOC2(store,  6, 20, STOREDIM, STOREDIM) = x_6_20_0;
                            LOC2(store,  6, 21, STOREDIM, STOREDIM) = x_6_21_0;
                            LOC2(store,  6, 22, STOREDIM, STOREDIM) = x_6_22_0;
                            LOC2(store,  6, 23, STOREDIM, STOREDIM) = x_6_23_0;
                            LOC2(store,  6, 24, STOREDIM, STOREDIM) = x_6_24_0;
                            LOC2(store,  6, 25, STOREDIM, STOREDIM) = x_6_25_0;
                            LOC2(store,  6, 26, STOREDIM, STOREDIM) = x_6_26_0;
                            LOC2(store,  6, 27, STOREDIM, STOREDIM) = x_6_27_0;
                            LOC2(store,  6, 28, STOREDIM, STOREDIM) = x_6_28_0;
                            LOC2(store,  6, 29, STOREDIM, STOREDIM) = x_6_29_0;
                            LOC2(store,  6, 30, STOREDIM, STOREDIM) = x_6_30_0;
                            LOC2(store,  6, 31, STOREDIM, STOREDIM) = x_6_31_0;
                            LOC2(store,  6, 32, STOREDIM, STOREDIM) = x_6_32_0;
                            LOC2(store,  6, 33, STOREDIM, STOREDIM) = x_6_33_0;
                            LOC2(store,  6, 34, STOREDIM, STOREDIM) = x_6_34_0;
                            LOC2(store,  7, 20, STOREDIM, STOREDIM) = x_7_20_0;
                            LOC2(store,  7, 21, STOREDIM, STOREDIM) = x_7_21_0;
                            LOC2(store,  7, 22, STOREDIM, STOREDIM) = x_7_22_0;
                            LOC2(store,  7, 23, STOREDIM, STOREDIM) = x_7_23_0;
                            LOC2(store,  7, 24, STOREDIM, STOREDIM) = x_7_24_0;
                            LOC2(store,  7, 25, STOREDIM, STOREDIM) = x_7_25_0;
                            LOC2(store,  7, 26, STOREDIM, STOREDIM) = x_7_26_0;
                            LOC2(store,  7, 27, STOREDIM, STOREDIM) = x_7_27_0;
                            LOC2(store,  7, 28, STOREDIM, STOREDIM) = x_7_28_0;
                            LOC2(store,  7, 29, STOREDIM, STOREDIM) = x_7_29_0;
                            LOC2(store,  7, 30, STOREDIM, STOREDIM) = x_7_30_0;
                            LOC2(store,  7, 31, STOREDIM, STOREDIM) = x_7_31_0;
                            LOC2(store,  7, 32, STOREDIM, STOREDIM) = x_7_32_0;
                            LOC2(store,  7, 33, STOREDIM, STOREDIM) = x_7_33_0;
                            LOC2(store,  7, 34, STOREDIM, STOREDIM) = x_7_34_0;
                            LOC2(store,  8, 20, STOREDIM, STOREDIM) = x_8_20_0;
                            LOC2(store,  8, 21, STOREDIM, STOREDIM) = x_8_21_0;
                            LOC2(store,  8, 22, STOREDIM, STOREDIM) = x_8_22_0;
                            LOC2(store,  8, 23, STOREDIM, STOREDIM) = x_8_23_0;
                            LOC2(store,  8, 24, STOREDIM, STOREDIM) = x_8_24_0;
                            LOC2(store,  8, 25, STOREDIM, STOREDIM) = x_8_25_0;
                            LOC2(store,  8, 26, STOREDIM, STOREDIM) = x_8_26_0;
                            LOC2(store,  8, 27, STOREDIM, STOREDIM) = x_8_27_0;
                            LOC2(store,  8, 28, STOREDIM, STOREDIM) = x_8_28_0;
                            LOC2(store,  8, 29, STOREDIM, STOREDIM) = x_8_29_0;
                            LOC2(store,  8, 30, STOREDIM, STOREDIM) = x_8_30_0;
                            LOC2(store,  8, 31, STOREDIM, STOREDIM) = x_8_31_0;
                            LOC2(store,  8, 32, STOREDIM, STOREDIM) = x_8_32_0;
                            LOC2(store,  8, 33, STOREDIM, STOREDIM) = x_8_33_0;
                            LOC2(store,  8, 34, STOREDIM, STOREDIM) = x_8_34_0;
                            LOC2(store,  9, 20, STOREDIM, STOREDIM) = x_9_20_0;
                            LOC2(store,  9, 21, STOREDIM, STOREDIM) = x_9_21_0;
                            LOC2(store,  9, 22, STOREDIM, STOREDIM) = x_9_22_0;
                            LOC2(store,  9, 23, STOREDIM, STOREDIM) = x_9_23_0;
                            LOC2(store,  9, 24, STOREDIM, STOREDIM) = x_9_24_0;
                            LOC2(store,  9, 25, STOREDIM, STOREDIM) = x_9_25_0;
                            LOC2(store,  9, 26, STOREDIM, STOREDIM) = x_9_26_0;
                            LOC2(store,  9, 27, STOREDIM, STOREDIM) = x_9_27_0;
                            LOC2(store,  9, 28, STOREDIM, STOREDIM) = x_9_28_0;
                            LOC2(store,  9, 29, STOREDIM, STOREDIM) = x_9_29_0;
                            LOC2(store,  9, 30, STOREDIM, STOREDIM) = x_9_30_0;
                            LOC2(store,  9, 31, STOREDIM, STOREDIM) = x_9_31_0;
                            LOC2(store,  9, 32, STOREDIM, STOREDIM) = x_9_32_0;
                            LOC2(store,  9, 33, STOREDIM, STOREDIM) = x_9_33_0;
                            LOC2(store,  9, 34, STOREDIM, STOREDIM) = x_9_34_0;
                        }
                    }
                    if ((I+J) >=  3 && (K+L)>= 2) {
                        // Subroutine for L =            1  B =            0 , m=           0
                        QUICKDouble x_1_0_0 = Ptempx * VY( 0, 0, 0) + WPtempx * VY( 0, 0, 1);
                        QUICKDouble x_2_0_0 = Ptempy * VY( 0, 0, 0) + WPtempy * VY( 0, 0, 1);
                        QUICKDouble x_3_0_0 = Ptempz * VY( 0, 0, 0) + WPtempz * VY( 0, 0, 1);
                        // Subroutine for L =            1  B =            0 , m=           1
                        QUICKDouble x_1_0_1 = Ptempx * VY( 0, 0, 1) + WPtempx * VY( 0, 0, 2);
                        QUICKDouble x_2_0_1 = Ptempy * VY( 0, 0, 1) + WPtempy * VY( 0, 0, 2);
                        QUICKDouble x_3_0_1 = Ptempz * VY( 0, 0, 1) + WPtempz * VY( 0, 0, 2);
                        // Subroutine for L =            1  B =            0 , m=           2
                        QUICKDouble x_1_0_2 = Ptempx * VY( 0, 0, 2) + WPtempx * VY( 0, 0, 3);
                        QUICKDouble x_2_0_2 = Ptempy * VY( 0, 0, 2) + WPtempy * VY( 0, 0, 3);
                        QUICKDouble x_3_0_2 = Ptempz * VY( 0, 0, 2) + WPtempz * VY( 0, 0, 3);
                        // Subroutine for L =            1  B =            0 , m=           3
                        QUICKDouble x_1_0_3 = Ptempx * VY( 0, 0, 3) + WPtempx * VY( 0, 0, 4);
                        QUICKDouble x_2_0_3 = Ptempy * VY( 0, 0, 3) + WPtempy * VY( 0, 0, 4);
                        QUICKDouble x_3_0_3 = Ptempz * VY( 0, 0, 3) + WPtempz * VY( 0, 0, 4);
                        // Subroutine for L =            1  B =            0 , m=           4
                        QUICKDouble x_1_0_4 = Ptempx * VY( 0, 0, 4) + WPtempx * VY( 0, 0, 5);
                        QUICKDouble x_2_0_4 = Ptempy * VY( 0, 0, 4) + WPtempy * VY( 0, 0, 5);
                        QUICKDouble x_3_0_4 = Ptempz * VY( 0, 0, 4) + WPtempz * VY( 0, 0, 5);
                        // Subroutine for L =            2  B =            0 , m=           0
                        QUICKDouble x_4_0_0 = Ptempx * x_2_0_0 + WPtempx * x_2_0_1;
                        QUICKDouble x_5_0_0 = Ptempy * x_3_0_0 + WPtempy * x_3_0_1;
                        QUICKDouble x_6_0_0 = Ptempx * x_3_0_0 + WPtempx * x_3_0_1;
                        QUICKDouble x_7_0_0 = Ptempx * x_1_0_0 + WPtempx * x_1_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
                        QUICKDouble x_8_0_0 = Ptempy * x_2_0_0 + WPtempy * x_2_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
                        QUICKDouble x_9_0_0 = Ptempz * x_3_0_0 + WPtempz * x_3_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
                        // Subroutine for L =            2  B =            0 , m=           1
                        QUICKDouble x_4_0_1 = Ptempx * x_2_0_1 + WPtempx * x_2_0_2;
                        QUICKDouble x_5_0_1 = Ptempy * x_3_0_1 + WPtempy * x_3_0_2;
                        QUICKDouble x_6_0_1 = Ptempx * x_3_0_1 + WPtempx * x_3_0_2;
                        QUICKDouble x_7_0_1 = Ptempx * x_1_0_1 + WPtempx * x_1_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                        QUICKDouble x_8_0_1 = Ptempy * x_2_0_1 + WPtempy * x_2_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                        QUICKDouble x_9_0_1 = Ptempz * x_3_0_1 + WPtempz * x_3_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                        // Subroutine for L =            2  B =            0 , m=           2
                        QUICKDouble x_4_0_2 = Ptempx * x_2_0_2 + WPtempx * x_2_0_3;
                        QUICKDouble x_5_0_2 = Ptempy * x_3_0_2 + WPtempy * x_3_0_3;
                        QUICKDouble x_6_0_2 = Ptempx * x_3_0_2 + WPtempx * x_3_0_3;
                        QUICKDouble x_7_0_2 = Ptempx * x_1_0_2 + WPtempx * x_1_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                        QUICKDouble x_8_0_2 = Ptempy * x_2_0_2 + WPtempy * x_2_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                        QUICKDouble x_9_0_2 = Ptempz * x_3_0_2 + WPtempz * x_3_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                        // Subroutine for L =            2  B =            0 , m=           3
                        QUICKDouble x_4_0_3 = Ptempx * x_2_0_3 + WPtempx * x_2_0_4;
                        QUICKDouble x_5_0_3 = Ptempy * x_3_0_3 + WPtempy * x_3_0_4;
                        QUICKDouble x_6_0_3 = Ptempx * x_3_0_3 + WPtempx * x_3_0_4;
                        QUICKDouble x_7_0_3 = Ptempx * x_1_0_3 + WPtempx * x_1_0_4 + ABtemp * (VY( 0, 0, 3) -  CDcom * VY( 0, 0, 4));
                        QUICKDouble x_8_0_3 = Ptempy * x_2_0_3 + WPtempy * x_2_0_4 + ABtemp * (VY( 0, 0, 3) -  CDcom * VY( 0, 0, 4));
                        QUICKDouble x_9_0_3 = Ptempz * x_3_0_3 + WPtempz * x_3_0_4 + ABtemp * (VY( 0, 0, 3) -  CDcom * VY( 0, 0, 4));
                        // Subroutine for B =            2  L =            1 , m=           1
                        QUICKDouble x_4_2_1 = Qtempy * x_4_0_1 + WQtempy * x_4_0_2 + ABCDtemp * x_1_0_2;
                        QUICKDouble x_5_2_1 = Qtempy * x_5_0_1 + WQtempy * x_5_0_2 + ABCDtemp * x_3_0_2;
                        QUICKDouble x_6_2_1 = Qtempy * x_6_0_1 + WQtempy * x_6_0_2;
                        QUICKDouble x_7_2_1 = Qtempy * x_7_0_1 + WQtempy * x_7_0_2;
                        QUICKDouble x_8_2_1 = Qtempy * x_8_0_1 + WQtempy * x_8_0_2 + 2 * ABCDtemp * x_2_0_2;
                        QUICKDouble x_9_2_1 = Qtempy * x_9_0_1 + WQtempy * x_9_0_2;
                        QUICKDouble x_4_3_1 = Qtempz * x_4_0_1 + WQtempz * x_4_0_2;
                        QUICKDouble x_5_3_1 = Qtempz * x_5_0_1 + WQtempz * x_5_0_2 + ABCDtemp * x_2_0_2;
                        QUICKDouble x_6_3_1 = Qtempz * x_6_0_1 + WQtempz * x_6_0_2 + ABCDtemp * x_1_0_2;
                        QUICKDouble x_7_3_1 = Qtempz * x_7_0_1 + WQtempz * x_7_0_2;
                        QUICKDouble x_8_3_1 = Qtempz * x_8_0_1 + WQtempz * x_8_0_2;
                        QUICKDouble x_9_3_1 = Qtempz * x_9_0_1 + WQtempz * x_9_0_2 + 2 * ABCDtemp * x_3_0_2;
                        
                        // Subroutine for L =            3  B =            0 , m=           0
                        QUICKDouble x_10_0_0 = Ptempx * x_5_0_0 + WPtempx * x_5_0_1;
                        QUICKDouble x_11_0_0 = Ptempx * x_4_0_0 + WPtempx * x_4_0_1 + ABtemp * (x_2_0_0 -  CDcom * x_2_0_1);
                        QUICKDouble x_12_0_0 = Ptempx * x_8_0_0 + WPtempx * x_8_0_1;
                        QUICKDouble x_13_0_0 = Ptempx * x_6_0_0 + WPtempx * x_6_0_1 + ABtemp * (x_3_0_0 -  CDcom * x_3_0_1);
                        QUICKDouble x_14_0_0 = Ptempx * x_9_0_0 + WPtempx * x_9_0_1;
                        QUICKDouble x_15_0_0 = Ptempy * x_5_0_0 + WPtempy * x_5_0_1 + ABtemp * (x_3_0_0 -  CDcom * x_3_0_1);
                        QUICKDouble x_16_0_0 = Ptempy * x_9_0_0 + WPtempy * x_9_0_1;
                        QUICKDouble x_17_0_0 = Ptempx * x_7_0_0 + WPtempx * x_7_0_1 + ABtemp * 2 * (x_1_0_0 -  CDcom * x_1_0_1);
                        QUICKDouble x_18_0_0 = Ptempy * x_8_0_0 + WPtempy * x_8_0_1 + ABtemp * 2 * (x_2_0_0 -  CDcom * x_2_0_1);
                        QUICKDouble x_19_0_0 = Ptempz * x_9_0_0 + WPtempz * x_9_0_1 + ABtemp * 2 * (x_3_0_0 -  CDcom * x_3_0_1);
                        // Subroutine for L =            3  B =            0 , m=           1
                        QUICKDouble x_10_0_1 = Ptempx * x_5_0_1 + WPtempx * x_5_0_2;
                        QUICKDouble x_11_0_1 = Ptempx * x_4_0_1 + WPtempx * x_4_0_2 + ABtemp * (x_2_0_1 -  CDcom * x_2_0_2);
                        QUICKDouble x_12_0_1 = Ptempx * x_8_0_1 + WPtempx * x_8_0_2;
                        QUICKDouble x_13_0_1 = Ptempx * x_6_0_1 + WPtempx * x_6_0_2 + ABtemp * (x_3_0_1 -  CDcom * x_3_0_2);
                        QUICKDouble x_14_0_1 = Ptempx * x_9_0_1 + WPtempx * x_9_0_2;
                        QUICKDouble x_15_0_1 = Ptempy * x_5_0_1 + WPtempy * x_5_0_2 + ABtemp * (x_3_0_1 -  CDcom * x_3_0_2);
                        QUICKDouble x_16_0_1 = Ptempy * x_9_0_1 + WPtempy * x_9_0_2;
                        QUICKDouble x_17_0_1 = Ptempx * x_7_0_1 + WPtempx * x_7_0_2 + ABtemp * 2 * (x_1_0_1 -  CDcom * x_1_0_2);
                        QUICKDouble x_18_0_1 = Ptempy * x_8_0_1 + WPtempy * x_8_0_2 + ABtemp * 2 * (x_2_0_1 -  CDcom * x_2_0_2);
                        QUICKDouble x_19_0_1 = Ptempz * x_9_0_1 + WPtempz * x_9_0_2 + ABtemp * 2 * (x_3_0_1 -  CDcom * x_3_0_2);
                        // Subroutine for L =            3  B =            0 , m=           2
                        QUICKDouble x_10_0_2 = Ptempx * x_5_0_2 + WPtempx * x_5_0_3;
                        QUICKDouble x_11_0_2 = Ptempx * x_4_0_2 + WPtempx * x_4_0_3 + ABtemp * (x_2_0_2 -  CDcom * x_2_0_3);
                        QUICKDouble x_12_0_2 = Ptempx * x_8_0_2 + WPtempx * x_8_0_3;
                        QUICKDouble x_13_0_2 = Ptempx * x_6_0_2 + WPtempx * x_6_0_3 + ABtemp * (x_3_0_2 -  CDcom * x_3_0_3);
                        QUICKDouble x_14_0_2 = Ptempx * x_9_0_2 + WPtempx * x_9_0_3;
                        QUICKDouble x_15_0_2 = Ptempy * x_5_0_2 + WPtempy * x_5_0_3 + ABtemp * (x_3_0_2 -  CDcom * x_3_0_3);
                        QUICKDouble x_16_0_2 = Ptempy * x_9_0_2 + WPtempy * x_9_0_3;
                        QUICKDouble x_17_0_2 = Ptempx * x_7_0_2 + WPtempx * x_7_0_3 + ABtemp * 2 * (x_1_0_2 -  CDcom * x_1_0_3);
                        QUICKDouble x_18_0_2 = Ptempy * x_8_0_2 + WPtempy * x_8_0_3 + ABtemp * 2 * (x_2_0_2 -  CDcom * x_2_0_3);
                        QUICKDouble x_19_0_2 = Ptempz * x_9_0_2 + WPtempz * x_9_0_3 + ABtemp * 2 * (x_3_0_2 -  CDcom * x_3_0_3);
                        // Subroutine for B =            3  L =            1 , m=           0
                        QUICKDouble x_10_1_0 = Qtempx * x_10_0_0 + WQtempx * x_10_0_1 + ABCDtemp * x_5_0_1;
                        QUICKDouble x_11_1_0 = Qtempx * x_11_0_0 + WQtempx * x_11_0_1 + 2 * ABCDtemp * x_4_0_1;
                        QUICKDouble x_12_1_0 = Qtempx * x_12_0_0 + WQtempx * x_12_0_1 + ABCDtemp * x_8_0_1;
                        QUICKDouble x_13_1_0 = Qtempx * x_13_0_0 + WQtempx * x_13_0_1 + 2 * ABCDtemp * x_6_0_1;
                        QUICKDouble x_14_1_0 = Qtempx * x_14_0_0 + WQtempx * x_14_0_1 + ABCDtemp * x_9_0_1;
                        QUICKDouble x_15_1_0 = Qtempx * x_15_0_0 + WQtempx * x_15_0_1;
                        QUICKDouble x_16_1_0 = Qtempx * x_16_0_0 + WQtempx * x_16_0_1;
                        QUICKDouble x_17_1_0 = Qtempx * x_17_0_0 + WQtempx * x_17_0_1 + 3 * ABCDtemp * x_7_0_1;
                        QUICKDouble x_18_1_0 = Qtempx * x_18_0_0 + WQtempx * x_18_0_1;
                        QUICKDouble x_19_1_0 = Qtempx * x_19_0_0 + WQtempx * x_19_0_1;
                        QUICKDouble x_10_2_0 = Qtempy * x_10_0_0 + WQtempy * x_10_0_1 + ABCDtemp * x_6_0_1;
                        QUICKDouble x_11_2_0 = Qtempy * x_11_0_0 + WQtempy * x_11_0_1 + ABCDtemp * x_7_0_1;
                        QUICKDouble x_12_2_0 = Qtempy * x_12_0_0 + WQtempy * x_12_0_1 + 2 * ABCDtemp * x_4_0_1;
                        QUICKDouble x_13_2_0 = Qtempy * x_13_0_0 + WQtempy * x_13_0_1;
                        QUICKDouble x_14_2_0 = Qtempy * x_14_0_0 + WQtempy * x_14_0_1;
                        QUICKDouble x_15_2_0 = Qtempy * x_15_0_0 + WQtempy * x_15_0_1 + 2 * ABCDtemp * x_5_0_1;
                        QUICKDouble x_16_2_0 = Qtempy * x_16_0_0 + WQtempy * x_16_0_1 + ABCDtemp * x_9_0_1;
                        QUICKDouble x_17_2_0 = Qtempy * x_17_0_0 + WQtempy * x_17_0_1;
                        QUICKDouble x_18_2_0 = Qtempy * x_18_0_0 + WQtempy * x_18_0_1 + 3 * ABCDtemp * x_8_0_1;
                        QUICKDouble x_19_2_0 = Qtempy * x_19_0_0 + WQtempy * x_19_0_1;
                        QUICKDouble x_10_3_0 = Qtempz * x_10_0_0 + WQtempz * x_10_0_1 + ABCDtemp * x_4_0_1;
                        QUICKDouble x_11_3_0 = Qtempz * x_11_0_0 + WQtempz * x_11_0_1;
                        QUICKDouble x_12_3_0 = Qtempz * x_12_0_0 + WQtempz * x_12_0_1;
                        QUICKDouble x_13_3_0 = Qtempz * x_13_0_0 + WQtempz * x_13_0_1 + ABCDtemp * x_7_0_1;
                        QUICKDouble x_14_3_0 = Qtempz * x_14_0_0 + WQtempz * x_14_0_1 + 2 * ABCDtemp * x_6_0_1;
                        QUICKDouble x_15_3_0 = Qtempz * x_15_0_0 + WQtempz * x_15_0_1 + ABCDtemp * x_8_0_1;
                        QUICKDouble x_16_3_0 = Qtempz * x_16_0_0 + WQtempz * x_16_0_1 + 2 * ABCDtemp * x_5_0_1;
                        QUICKDouble x_17_3_0 = Qtempz * x_17_0_0 + WQtempz * x_17_0_1;
                        QUICKDouble x_18_3_0 = Qtempz * x_18_0_0 + WQtempz * x_18_0_1;
                        QUICKDouble x_19_3_0 = Qtempz * x_19_0_0 + WQtempz * x_19_0_1 + 3 * ABCDtemp * x_9_0_1;
                        
                        // Subroutine for B =            3  L =            1 , m=           1
                        QUICKDouble x_10_1_1 = Qtempx * x_10_0_1 + WQtempx * x_10_0_2 + ABCDtemp * x_5_0_2;
                        QUICKDouble x_11_1_1 = Qtempx * x_11_0_1 + WQtempx * x_11_0_2 + 2 * ABCDtemp * x_4_0_2;
                        QUICKDouble x_12_1_1 = Qtempx * x_12_0_1 + WQtempx * x_12_0_2 + ABCDtemp * x_8_0_2;
                        QUICKDouble x_13_1_1 = Qtempx * x_13_0_1 + WQtempx * x_13_0_2 + 2 * ABCDtemp * x_6_0_2;
                        QUICKDouble x_14_1_1 = Qtempx * x_14_0_1 + WQtempx * x_14_0_2 + ABCDtemp * x_9_0_2;
                        QUICKDouble x_15_1_1 = Qtempx * x_15_0_1 + WQtempx * x_15_0_2;
                        QUICKDouble x_16_1_1 = Qtempx * x_16_0_1 + WQtempx * x_16_0_2;
                        QUICKDouble x_17_1_1 = Qtempx * x_17_0_1 + WQtempx * x_17_0_2 + 3 * ABCDtemp * x_7_0_2;
                        QUICKDouble x_18_1_1 = Qtempx * x_18_0_1 + WQtempx * x_18_0_2;
                        QUICKDouble x_19_1_1 = Qtempx * x_19_0_1 + WQtempx * x_19_0_2;
                        QUICKDouble x_10_2_1 = Qtempy * x_10_0_1 + WQtempy * x_10_0_2 + ABCDtemp * x_6_0_2;
                        QUICKDouble x_11_2_1 = Qtempy * x_11_0_1 + WQtempy * x_11_0_2 + ABCDtemp * x_7_0_2;
                        QUICKDouble x_12_2_1 = Qtempy * x_12_0_1 + WQtempy * x_12_0_2 + 2 * ABCDtemp * x_4_0_2;
                        QUICKDouble x_13_2_1 = Qtempy * x_13_0_1 + WQtempy * x_13_0_2;
                        QUICKDouble x_14_2_1 = Qtempy * x_14_0_1 + WQtempy * x_14_0_2;
                        QUICKDouble x_15_2_1 = Qtempy * x_15_0_1 + WQtempy * x_15_0_2 + 2 * ABCDtemp * x_5_0_2;
                        QUICKDouble x_16_2_1 = Qtempy * x_16_0_1 + WQtempy * x_16_0_2 + ABCDtemp * x_9_0_2;
                        QUICKDouble x_17_2_1 = Qtempy * x_17_0_1 + WQtempy * x_17_0_2;
                        QUICKDouble x_18_2_1 = Qtempy * x_18_0_1 + WQtempy * x_18_0_2 + 3 * ABCDtemp * x_8_0_2;
                        QUICKDouble x_19_2_1 = Qtempy * x_19_0_1 + WQtempy * x_19_0_2;
                        QUICKDouble x_10_3_1 = Qtempz * x_10_0_1 + WQtempz * x_10_0_2 + ABCDtemp * x_4_0_2;
                        QUICKDouble x_11_3_1 = Qtempz * x_11_0_1 + WQtempz * x_11_0_2;
                        QUICKDouble x_12_3_1 = Qtempz * x_12_0_1 + WQtempz * x_12_0_2;
                        QUICKDouble x_13_3_1 = Qtempz * x_13_0_1 + WQtempz * x_13_0_2 + ABCDtemp * x_7_0_2;
                        QUICKDouble x_14_3_1 = Qtempz * x_14_0_1 + WQtempz * x_14_0_2 + 2 * ABCDtemp * x_6_0_2;
                        QUICKDouble x_15_3_1 = Qtempz * x_15_0_1 + WQtempz * x_15_0_2 + ABCDtemp * x_8_0_2;
                        QUICKDouble x_16_3_1 = Qtempz * x_16_0_1 + WQtempz * x_16_0_2 + 2 * ABCDtemp * x_5_0_2;
                        QUICKDouble x_17_3_1 = Qtempz * x_17_0_1 + WQtempz * x_17_0_2;
                        QUICKDouble x_18_3_1 = Qtempz * x_18_0_1 + WQtempz * x_18_0_2;
                        QUICKDouble x_19_3_1 = Qtempz * x_19_0_1 + WQtempz * x_19_0_2 + 3 * ABCDtemp * x_9_0_2;
                        
                        // Subroutine for B =            3  L =            2 , m=           0
                        QUICKDouble x_10_4_0 = Qtempx * x_10_2_0 + WQtempx * x_10_2_1 + ABCDtemp * x_5_2_1;
                        QUICKDouble x_11_4_0 = Qtempx * x_11_2_0 + WQtempx * x_11_2_1 + 2 * ABCDtemp * x_4_2_1;
                        QUICKDouble x_12_4_0 = Qtempx * x_12_2_0 + WQtempx * x_12_2_1 + ABCDtemp * x_8_2_1;
                        QUICKDouble x_13_4_0 = Qtempx * x_13_2_0 + WQtempx * x_13_2_1 + 2 * ABCDtemp * x_6_2_1;
                        QUICKDouble x_14_4_0 = Qtempx * x_14_2_0 + WQtempx * x_14_2_1 + ABCDtemp * x_9_2_1;
                        QUICKDouble x_15_4_0 = Qtempx * x_15_2_0 + WQtempx * x_15_2_1;
                        QUICKDouble x_16_4_0 = Qtempx * x_16_2_0 + WQtempx * x_16_2_1;
                        QUICKDouble x_17_4_0 = Qtempx * x_17_2_0 + WQtempx * x_17_2_1 + 3 * ABCDtemp * x_7_2_1;
                        QUICKDouble x_18_4_0 = Qtempx * x_18_2_0 + WQtempx * x_18_2_1;
                        QUICKDouble x_19_4_0 = Qtempx * x_19_2_0 + WQtempx * x_19_2_1;
                        QUICKDouble x_10_5_0 = Qtempy * x_10_3_0 + WQtempy * x_10_3_1 + ABCDtemp * x_6_3_1;
                        QUICKDouble x_11_5_0 = Qtempy * x_11_3_0 + WQtempy * x_11_3_1 + ABCDtemp * x_7_3_1;
                        QUICKDouble x_12_5_0 = Qtempy * x_12_3_0 + WQtempy * x_12_3_1 + 2 * ABCDtemp * x_4_3_1;
                        QUICKDouble x_13_5_0 = Qtempy * x_13_3_0 + WQtempy * x_13_3_1;
                        QUICKDouble x_14_5_0 = Qtempy * x_14_3_0 + WQtempy * x_14_3_1;
                        QUICKDouble x_15_5_0 = Qtempy * x_15_3_0 + WQtempy * x_15_3_1 + 2 * ABCDtemp * x_5_3_1;
                        QUICKDouble x_16_5_0 = Qtempy * x_16_3_0 + WQtempy * x_16_3_1 + ABCDtemp * x_9_3_1;
                        QUICKDouble x_17_5_0 = Qtempy * x_17_3_0 + WQtempy * x_17_3_1;
                        QUICKDouble x_18_5_0 = Qtempy * x_18_3_0 + WQtempy * x_18_3_1 + 3 * ABCDtemp * x_8_3_1;
                        QUICKDouble x_19_5_0 = Qtempy * x_19_3_0 + WQtempy * x_19_3_1;
                        QUICKDouble x_10_6_0 = Qtempx * x_10_3_0 + WQtempx * x_10_3_1 + ABCDtemp * x_5_3_1;
                        QUICKDouble x_11_6_0 = Qtempx * x_11_3_0 + WQtempx * x_11_3_1 + 2 * ABCDtemp * x_4_3_1;
                        QUICKDouble x_12_6_0 = Qtempx * x_12_3_0 + WQtempx * x_12_3_1 + ABCDtemp * x_8_3_1;
                        QUICKDouble x_13_6_0 = Qtempx * x_13_3_0 + WQtempx * x_13_3_1 + 2 * ABCDtemp * x_6_3_1;
                        QUICKDouble x_14_6_0 = Qtempx * x_14_3_0 + WQtempx * x_14_3_1 + ABCDtemp * x_9_3_1;
                        QUICKDouble x_15_6_0 = Qtempx * x_15_3_0 + WQtempx * x_15_3_1;
                        QUICKDouble x_16_6_0 = Qtempx * x_16_3_0 + WQtempx * x_16_3_1;
                        QUICKDouble x_17_6_0 = Qtempx * x_17_3_0 + WQtempx * x_17_3_1 + 3 * ABCDtemp * x_7_3_1;
                        QUICKDouble x_18_6_0 = Qtempx * x_18_3_0 + WQtempx * x_18_3_1;
                        QUICKDouble x_19_6_0 = Qtempx * x_19_3_0 + WQtempx * x_19_3_1;
                        QUICKDouble x_10_7_0 = Qtempx * x_10_1_0 + WQtempx * x_10_1_1 + CDtemp * (x_10_0_0 -  ABcom * x_10_0_1) + ABCDtemp * (  Qtempx * x_5_0_1 + WQtempx * x_5_0_2);
                        QUICKDouble x_11_7_0 = Qtempx * x_11_1_0 + WQtempx * x_11_1_1 + CDtemp * (x_11_0_0 -  ABcom * x_11_0_1) + 2 * ABCDtemp * (  Qtempx * x_4_0_1 + WQtempx * x_4_0_2 + ABCDtemp * x_2_0_2);
                        QUICKDouble x_12_7_0 = Qtempx * x_12_1_0 + WQtempx * x_12_1_1 + CDtemp * (x_12_0_0 -  ABcom * x_12_0_1) + ABCDtemp * (  Qtempx * x_8_0_1 + WQtempx * x_8_0_2);
                        QUICKDouble x_13_7_0 = Qtempx * x_13_1_0 + WQtempx * x_13_1_1 + CDtemp * (x_13_0_0 -  ABcom * x_13_0_1) + 2 * ABCDtemp * (  Qtempx * x_6_0_1 + WQtempx * x_6_0_2 + ABCDtemp * x_3_0_2);
                        QUICKDouble x_14_7_0 = Qtempx * x_14_1_0 + WQtempx * x_14_1_1 + CDtemp * (x_14_0_0 -  ABcom * x_14_0_1) + ABCDtemp * (  Qtempx * x_9_0_1 + WQtempx * x_9_0_2);
                        QUICKDouble x_15_7_0 = Qtempx * x_15_1_0 + WQtempx * x_15_1_1 + CDtemp * (x_15_0_0 -  ABcom * x_15_0_1);
                        QUICKDouble x_16_7_0 = Qtempx * x_16_1_0 + WQtempx * x_16_1_1 + CDtemp * (x_16_0_0 -  ABcom * x_16_0_1);
                        QUICKDouble x_17_7_0 = Qtempx * x_17_1_0 + WQtempx * x_17_1_1 + CDtemp * (x_17_0_0 -  ABcom * x_17_0_1) + 3 * ABCDtemp * (  Qtempx * x_7_0_1 + WQtempx * x_7_0_2 + 2 * ABCDtemp * x_1_0_2);
                        QUICKDouble x_18_7_0 = Qtempx * x_18_1_0 + WQtempx * x_18_1_1 + CDtemp * (x_18_0_0 -  ABcom * x_18_0_1);
                        QUICKDouble x_19_7_0 = Qtempx * x_19_1_0 + WQtempx * x_19_1_1 + CDtemp * (x_19_0_0 -  ABcom * x_19_0_1);
                        QUICKDouble x_10_8_0 = Qtempy * x_10_2_0 + WQtempy * x_10_2_1 + CDtemp * (x_10_0_0 -  ABcom * x_10_0_1) + ABCDtemp * x_6_2_1;
                        QUICKDouble x_11_8_0 = Qtempy * x_11_2_0 + WQtempy * x_11_2_1 + CDtemp * (x_11_0_0 -  ABcom * x_11_0_1) + ABCDtemp * x_7_2_1;
                        QUICKDouble x_12_8_0 = Qtempy * x_12_2_0 + WQtempy * x_12_2_1 + CDtemp * (x_12_0_0 -  ABcom * x_12_0_1) + 2 * ABCDtemp * x_4_2_1;
                        QUICKDouble x_13_8_0 = Qtempy * x_13_2_0 + WQtempy * x_13_2_1 + CDtemp * (x_13_0_0 -  ABcom * x_13_0_1);
                        QUICKDouble x_14_8_0 = Qtempy * x_14_2_0 + WQtempy * x_14_2_1 + CDtemp * (x_14_0_0 -  ABcom * x_14_0_1);
                        QUICKDouble x_15_8_0 = Qtempy * x_15_2_0 + WQtempy * x_15_2_1 + CDtemp * (x_15_0_0 -  ABcom * x_15_0_1) + 2 * ABCDtemp * x_5_2_1;
                        QUICKDouble x_16_8_0 = Qtempy * x_16_2_0 + WQtempy * x_16_2_1 + CDtemp * (x_16_0_0 -  ABcom * x_16_0_1) + ABCDtemp * x_9_2_1;
                        QUICKDouble x_17_8_0 = Qtempy * x_17_2_0 + WQtempy * x_17_2_1 + CDtemp * (x_17_0_0 -  ABcom * x_17_0_1);
                        QUICKDouble x_18_8_0 = Qtempy * x_18_2_0 + WQtempy * x_18_2_1 + CDtemp * (x_18_0_0 -  ABcom * x_18_0_1) + 3 * ABCDtemp * x_8_2_1;
                        QUICKDouble x_19_8_0 = Qtempy * x_19_2_0 + WQtempy * x_19_2_1 + CDtemp * (x_19_0_0 -  ABcom * x_19_0_1);
                        QUICKDouble x_10_9_0 = Qtempz * x_10_3_0 + WQtempz * x_10_3_1 + CDtemp * (x_10_0_0 -  ABcom * x_10_0_1) + ABCDtemp * x_4_3_1;
                        QUICKDouble x_11_9_0 = Qtempz * x_11_3_0 + WQtempz * x_11_3_1 + CDtemp * (x_11_0_0 -  ABcom * x_11_0_1);
                        QUICKDouble x_12_9_0 = Qtempz * x_12_3_0 + WQtempz * x_12_3_1 + CDtemp * (x_12_0_0 -  ABcom * x_12_0_1);
                        QUICKDouble x_13_9_0 = Qtempz * x_13_3_0 + WQtempz * x_13_3_1 + CDtemp * (x_13_0_0 -  ABcom * x_13_0_1) + ABCDtemp * x_7_3_1;
                        QUICKDouble x_14_9_0 = Qtempz * x_14_3_0 + WQtempz * x_14_3_1 + CDtemp * (x_14_0_0 -  ABcom * x_14_0_1) + 2 * ABCDtemp * x_6_3_1;
                        QUICKDouble x_15_9_0 = Qtempz * x_15_3_0 + WQtempz * x_15_3_1 + CDtemp * (x_15_0_0 -  ABcom * x_15_0_1) + ABCDtemp * x_8_3_1;
                        QUICKDouble x_16_9_0 = Qtempz * x_16_3_0 + WQtempz * x_16_3_1 + CDtemp * (x_16_0_0 -  ABcom * x_16_0_1) + 2 * ABCDtemp * x_5_3_1;
                        QUICKDouble x_17_9_0 = Qtempz * x_17_3_0 + WQtempz * x_17_3_1 + CDtemp * (x_17_0_0 -  ABcom * x_17_0_1);
                        QUICKDouble x_18_9_0 = Qtempz * x_18_3_0 + WQtempz * x_18_3_1 + CDtemp * (x_18_0_0 -  ABcom * x_18_0_1);
                        QUICKDouble x_19_9_0 = Qtempz * x_19_3_0 + WQtempz * x_19_3_1 + CDtemp * (x_19_0_0 -  ABcom * x_19_0_1) + 3 * ABCDtemp * x_9_3_1;
                        
                        // WRITE LAST FOR I =            3  J=           2
                        LOC2(store, 10,  4, STOREDIM, STOREDIM) = x_10_4_0;
                        LOC2(store, 10,  5, STOREDIM, STOREDIM) = x_10_5_0;
                        LOC2(store, 10,  6, STOREDIM, STOREDIM) = x_10_6_0;
                        LOC2(store, 10,  7, STOREDIM, STOREDIM) = x_10_7_0;
                        LOC2(store, 10,  8, STOREDIM, STOREDIM) = x_10_8_0;
                        LOC2(store, 10,  9, STOREDIM, STOREDIM) = x_10_9_0;
                        LOC2(store, 11,  4, STOREDIM, STOREDIM) = x_11_4_0;
                        LOC2(store, 11,  5, STOREDIM, STOREDIM) = x_11_5_0;
                        LOC2(store, 11,  6, STOREDIM, STOREDIM) = x_11_6_0;
                        LOC2(store, 11,  7, STOREDIM, STOREDIM) = x_11_7_0;
                        LOC2(store, 11,  8, STOREDIM, STOREDIM) = x_11_8_0;
                        LOC2(store, 11,  9, STOREDIM, STOREDIM) = x_11_9_0;
                        LOC2(store, 12,  4, STOREDIM, STOREDIM) = x_12_4_0;
                        LOC2(store, 12,  5, STOREDIM, STOREDIM) = x_12_5_0;
                        LOC2(store, 12,  6, STOREDIM, STOREDIM) = x_12_6_0;
                        LOC2(store, 12,  7, STOREDIM, STOREDIM) = x_12_7_0;
                        LOC2(store, 12,  8, STOREDIM, STOREDIM) = x_12_8_0;
                        LOC2(store, 12,  9, STOREDIM, STOREDIM) = x_12_9_0;
                        LOC2(store, 13,  4, STOREDIM, STOREDIM) = x_13_4_0;
                        LOC2(store, 13,  5, STOREDIM, STOREDIM) = x_13_5_0;
                        LOC2(store, 13,  6, STOREDIM, STOREDIM) = x_13_6_0;
                        LOC2(store, 13,  7, STOREDIM, STOREDIM) = x_13_7_0;
                        LOC2(store, 13,  8, STOREDIM, STOREDIM) = x_13_8_0;
                        LOC2(store, 13,  9, STOREDIM, STOREDIM) = x_13_9_0;
                        LOC2(store, 14,  4, STOREDIM, STOREDIM) = x_14_4_0;
                        LOC2(store, 14,  5, STOREDIM, STOREDIM) = x_14_5_0;
                        LOC2(store, 14,  6, STOREDIM, STOREDIM) = x_14_6_0;
                        LOC2(store, 14,  7, STOREDIM, STOREDIM) = x_14_7_0;
                        LOC2(store, 14,  8, STOREDIM, STOREDIM) = x_14_8_0;
                        LOC2(store, 14,  9, STOREDIM, STOREDIM) = x_14_9_0;
                        LOC2(store, 15,  4, STOREDIM, STOREDIM) = x_15_4_0;
                        LOC2(store, 15,  5, STOREDIM, STOREDIM) = x_15_5_0;
                        LOC2(store, 15,  6, STOREDIM, STOREDIM) = x_15_6_0;
                        LOC2(store, 15,  7, STOREDIM, STOREDIM) = x_15_7_0;
                        LOC2(store, 15,  8, STOREDIM, STOREDIM) = x_15_8_0;
                        LOC2(store, 15,  9, STOREDIM, STOREDIM) = x_15_9_0;
                        LOC2(store, 16,  4, STOREDIM, STOREDIM) = x_16_4_0;
                        LOC2(store, 16,  5, STOREDIM, STOREDIM) = x_16_5_0;
                        LOC2(store, 16,  6, STOREDIM, STOREDIM) = x_16_6_0;
                        LOC2(store, 16,  7, STOREDIM, STOREDIM) = x_16_7_0;
                        LOC2(store, 16,  8, STOREDIM, STOREDIM) = x_16_8_0;
                        LOC2(store, 16,  9, STOREDIM, STOREDIM) = x_16_9_0;
                        LOC2(store, 17,  4, STOREDIM, STOREDIM) = x_17_4_0;
                        LOC2(store, 17,  5, STOREDIM, STOREDIM) = x_17_5_0;
                        LOC2(store, 17,  6, STOREDIM, STOREDIM) = x_17_6_0;
                        LOC2(store, 17,  7, STOREDIM, STOREDIM) = x_17_7_0;
                        LOC2(store, 17,  8, STOREDIM, STOREDIM) = x_17_8_0;
                        LOC2(store, 17,  9, STOREDIM, STOREDIM) = x_17_9_0;
                        LOC2(store, 18,  4, STOREDIM, STOREDIM) = x_18_4_0;
                        LOC2(store, 18,  5, STOREDIM, STOREDIM) = x_18_5_0;
                        LOC2(store, 18,  6, STOREDIM, STOREDIM) = x_18_6_0;
                        LOC2(store, 18,  7, STOREDIM, STOREDIM) = x_18_7_0;
                        LOC2(store, 18,  8, STOREDIM, STOREDIM) = x_18_8_0;
                        LOC2(store, 18,  9, STOREDIM, STOREDIM) = x_18_9_0;
                        LOC2(store, 19,  4, STOREDIM, STOREDIM) = x_19_4_0;
                        LOC2(store, 19,  5, STOREDIM, STOREDIM) = x_19_5_0;
                        LOC2(store, 19,  6, STOREDIM, STOREDIM) = x_19_6_0;
                        LOC2(store, 19,  7, STOREDIM, STOREDIM) = x_19_7_0;
                        LOC2(store, 19,  8, STOREDIM, STOREDIM) = x_19_8_0;
                        LOC2(store, 19,  9, STOREDIM, STOREDIM) = x_19_9_0;
                        
                        // if I+J+K+L == 6, then this part is not neccessary to calculate
                        if ((I+J) >=  3 && (K+L)>= 3 && (I+J+K+L)>6) {
                            // Subroutine for L =            0  B =            1 , m=           1
                            QUICKDouble x_0_1_1 = Qtempx * VY( 0, 0, 1) + WQtempx * VY( 0, 0, 2);
                            QUICKDouble x_0_2_1 = Qtempy * VY( 0, 0, 1) + WQtempy * VY( 0, 0, 2);
                            QUICKDouble x_0_3_1 = Qtempz * VY( 0, 0, 1) + WQtempz * VY( 0, 0, 2);
                            
                            // Subroutine for L =            0  B =            1 , m=           2
                            QUICKDouble x_0_1_2 = Qtempx * VY( 0, 0, 2) + WQtempx * VY( 0, 0, 3);
                            QUICKDouble x_0_2_2 = Qtempy * VY( 0, 0, 2) + WQtempy * VY( 0, 0, 3);
                            QUICKDouble x_0_3_2 = Qtempz * VY( 0, 0, 2) + WQtempz * VY( 0, 0, 3);
                            
                            // Subroutine for L =            0  B =            1 , m=           3
                            QUICKDouble x_0_1_3 = Qtempx * VY( 0, 0, 3) + WQtempx * VY( 0, 0, 4);
                            QUICKDouble x_0_2_3 = Qtempy * VY( 0, 0, 3) + WQtempy * VY( 0, 0, 4);
                            QUICKDouble x_0_3_3 = Qtempz * VY( 0, 0, 3) + WQtempz * VY( 0, 0, 4);
                            
                            // Subroutine for L =            0  B =            1 , m=           4
                            QUICKDouble x_0_1_4 = Qtempx * VY( 0, 0, 4) + WQtempx * VY( 0, 0, 5);
                            QUICKDouble x_0_2_4 = Qtempy * VY( 0, 0, 4) + WQtempy * VY( 0, 0, 5);
                            QUICKDouble x_0_3_4 = Qtempz * VY( 0, 0, 4) + WQtempz * VY( 0, 0, 5);
                            
                            // Subroutine for L =            0  B =            2 , m=           1
                            QUICKDouble x_0_4_1 = Qtempx * x_0_2_1 + WQtempx * x_0_2_2;
                            QUICKDouble x_0_5_1 = Qtempy * x_0_3_1 + WQtempy * x_0_3_2;
                            QUICKDouble x_0_6_1 = Qtempx * x_0_3_1 + WQtempx * x_0_3_2;
                            QUICKDouble x_0_7_1 = Qtempx * x_0_1_1 + WQtempx * x_0_1_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                            QUICKDouble x_0_8_1 = Qtempy * x_0_2_1 + WQtempy * x_0_2_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                            QUICKDouble x_0_9_1 = Qtempz * x_0_3_1 + WQtempz * x_0_3_2 + CDtemp * (VY( 0, 0, 1) -  ABcom * VY( 0, 0, 2));
                            
                            // Subroutine for L =            0  B =            2 , m=           2
                            QUICKDouble x_0_4_2 = Qtempx * x_0_2_2 + WQtempx * x_0_2_3;
                            QUICKDouble x_0_5_2 = Qtempy * x_0_3_2 + WQtempy * x_0_3_3;
                            QUICKDouble x_0_6_2 = Qtempx * x_0_3_2 + WQtempx * x_0_3_3;
                            QUICKDouble x_0_7_2 = Qtempx * x_0_1_2 + WQtempx * x_0_1_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                            QUICKDouble x_0_8_2 = Qtempy * x_0_2_2 + WQtempy * x_0_2_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                            QUICKDouble x_0_9_2 = Qtempz * x_0_3_2 + WQtempz * x_0_3_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                            
                            // Subroutine for L =            0  B =            2 , m=           3
                            QUICKDouble x_0_4_3 = Qtempx * x_0_2_3 + WQtempx * x_0_2_4;
                            QUICKDouble x_0_5_3 = Qtempy * x_0_3_3 + WQtempy * x_0_3_4;
                            QUICKDouble x_0_6_3 = Qtempx * x_0_3_3 + WQtempx * x_0_3_4;
                            QUICKDouble x_0_7_3 = Qtempx * x_0_1_3 + WQtempx * x_0_1_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                            QUICKDouble x_0_8_3 = Qtempy * x_0_2_3 + WQtempy * x_0_2_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                            QUICKDouble x_0_9_3 = Qtempz * x_0_3_3 + WQtempz * x_0_3_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                            
                            // Subroutine for L =            1  B =            0 , m=           5
                            QUICKDouble x_1_0_5 = Ptempx * VY( 0, 0, 5) + WPtempx * VY( 0, 0, 6);
                            QUICKDouble x_2_0_5 = Ptempy * VY( 0, 0, 5) + WPtempy * VY( 0, 0, 6);
                            QUICKDouble x_3_0_5 = Ptempz * VY( 0, 0, 5) + WPtempz * VY( 0, 0, 6);
                            // Subroutine for L =            1  B =            1 , m=           2
                            QUICKDouble x_2_1_2 = Ptempy * x_0_1_2 + WPtempy * x_0_1_3;
                            QUICKDouble x_2_2_2 = Ptempy * x_0_2_2 + WPtempy * x_0_2_3 + ABCDtemp * VY( 0, 0, 3);
                            QUICKDouble x_2_3_2 = Ptempy * x_0_3_2 + WPtempy * x_0_3_3;
                            QUICKDouble x_3_1_2 = Ptempz * x_0_1_2 + WPtempz * x_0_1_3;
                            QUICKDouble x_3_2_2 = Ptempz * x_0_2_2 + WPtempz * x_0_2_3;
                            QUICKDouble x_3_3_2 = Ptempz * x_0_3_2 + WPtempz * x_0_3_3 + ABCDtemp * VY( 0, 0, 3);
                            
                            // Subroutine for L =            1  B =            2 , m=           1
                            QUICKDouble x_1_4_1 = Ptempx * x_0_4_1 + WPtempx * x_0_4_2 + ABCDtemp * x_0_2_2;
                            QUICKDouble x_1_5_1 = Ptempx * x_0_5_1 + WPtempx * x_0_5_2;
                            QUICKDouble x_1_6_1 = Ptempx * x_0_6_1 + WPtempx * x_0_6_2 + ABCDtemp * x_0_3_2;
                            QUICKDouble x_1_7_1 = Ptempx * x_0_7_1 + WPtempx * x_0_7_2 + 2 * ABCDtemp * x_0_1_2;
                            QUICKDouble x_1_8_1 = Ptempx * x_0_8_1 + WPtempx * x_0_8_2;
                            QUICKDouble x_1_9_1 = Ptempx * x_0_9_1 + WPtempx * x_0_9_2;
                            QUICKDouble x_2_4_1 = Ptempy * x_0_4_1 + WPtempy * x_0_4_2 + ABCDtemp * x_0_1_2;
                            QUICKDouble x_2_5_1 = Ptempy * x_0_5_1 + WPtempy * x_0_5_2 + ABCDtemp * x_0_3_2;
                            QUICKDouble x_2_6_1 = Ptempy * x_0_6_1 + WPtempy * x_0_6_2;
                            QUICKDouble x_2_7_1 = Ptempy * x_0_7_1 + WPtempy * x_0_7_2;
                            QUICKDouble x_2_8_1 = Ptempy * x_0_8_1 + WPtempy * x_0_8_2 + 2 * ABCDtemp * x_0_2_2;
                            QUICKDouble x_2_9_1 = Ptempy * x_0_9_1 + WPtempy * x_0_9_2;
                            QUICKDouble x_3_4_1 = Ptempz * x_0_4_1 + WPtempz * x_0_4_2;
                            QUICKDouble x_3_5_1 = Ptempz * x_0_5_1 + WPtempz * x_0_5_2 + ABCDtemp * x_0_2_2;
                            QUICKDouble x_3_6_1 = Ptempz * x_0_6_1 + WPtempz * x_0_6_2 + ABCDtemp * x_0_1_2;
                            QUICKDouble x_3_7_1 = Ptempz * x_0_7_1 + WPtempz * x_0_7_2;
                            QUICKDouble x_3_8_1 = Ptempz * x_0_8_1 + WPtempz * x_0_8_2;
                            QUICKDouble x_3_9_1 = Ptempz * x_0_9_1 + WPtempz * x_0_9_2 + 2 * ABCDtemp * x_0_3_2;
                            
                            // Subroutine for L =            1  B =            2 , m=           2
                            QUICKDouble x_1_4_2 = Ptempx * x_0_4_2 + WPtempx * x_0_4_3 + ABCDtemp * x_0_2_3;
                            QUICKDouble x_1_5_2 = Ptempx * x_0_5_2 + WPtempx * x_0_5_3;
                            QUICKDouble x_1_6_2 = Ptempx * x_0_6_2 + WPtempx * x_0_6_3 + ABCDtemp * x_0_3_3;
                            QUICKDouble x_1_7_2 = Ptempx * x_0_7_2 + WPtempx * x_0_7_3 + 2 * ABCDtemp * x_0_1_3;
                            QUICKDouble x_1_8_2 = Ptempx * x_0_8_2 + WPtempx * x_0_8_3;
                            QUICKDouble x_1_9_2 = Ptempx * x_0_9_2 + WPtempx * x_0_9_3;
                            QUICKDouble x_2_4_2 = Ptempy * x_0_4_2 + WPtempy * x_0_4_3 + ABCDtemp * x_0_1_3;
                            QUICKDouble x_2_5_2 = Ptempy * x_0_5_2 + WPtempy * x_0_5_3 + ABCDtemp * x_0_3_3;
                            QUICKDouble x_2_6_2 = Ptempy * x_0_6_2 + WPtempy * x_0_6_3;
                            QUICKDouble x_2_7_2 = Ptempy * x_0_7_2 + WPtempy * x_0_7_3;
                            QUICKDouble x_2_8_2 = Ptempy * x_0_8_2 + WPtempy * x_0_8_3 + 2 * ABCDtemp * x_0_2_3;
                            QUICKDouble x_2_9_2 = Ptempy * x_0_9_2 + WPtempy * x_0_9_3;
                            QUICKDouble x_3_4_2 = Ptempz * x_0_4_2 + WPtempz * x_0_4_3;
                            QUICKDouble x_3_5_2 = Ptempz * x_0_5_2 + WPtempz * x_0_5_3 + ABCDtemp * x_0_2_3;
                            QUICKDouble x_3_6_2 = Ptempz * x_0_6_2 + WPtempz * x_0_6_3 + ABCDtemp * x_0_1_3;
                            QUICKDouble x_3_7_2 = Ptempz * x_0_7_2 + WPtempz * x_0_7_3;
                            QUICKDouble x_3_8_2 = Ptempz * x_0_8_2 + WPtempz * x_0_8_3;
                            QUICKDouble x_3_9_2 = Ptempz * x_0_9_2 + WPtempz * x_0_9_3 + 2 * ABCDtemp * x_0_3_3;
                            
                            // Subroutine for L =            2  B =            0 , m=           4
                            QUICKDouble x_4_0_4 = Ptempx * x_2_0_4 + WPtempx * x_2_0_5;
                            QUICKDouble x_5_0_4 = Ptempy * x_3_0_4 + WPtempy * x_3_0_5;
                            QUICKDouble x_6_0_4 = Ptempx * x_3_0_4 + WPtempx * x_3_0_5;
                            QUICKDouble x_7_0_4 = Ptempx * x_1_0_4 + WPtempx * x_1_0_5 + ABtemp * (VY( 0, 0, 4) -  CDcom * VY( 0, 0, 5));
                            QUICKDouble x_8_0_4 = Ptempy * x_2_0_4 + WPtempy * x_2_0_5 + ABtemp * (VY( 0, 0, 4) -  CDcom * VY( 0, 0, 5));
                            QUICKDouble x_9_0_4 = Ptempz * x_3_0_4 + WPtempz * x_3_0_5 + ABtemp * (VY( 0, 0, 4) -  CDcom * VY( 0, 0, 5));
                            // Subroutine for B =            2  L =            1 , m=           2
                            QUICKDouble x_4_2_2 = Qtempy * x_4_0_2 + WQtempy * x_4_0_3 + ABCDtemp * x_1_0_3;
                            QUICKDouble x_5_2_2 = Qtempy * x_5_0_2 + WQtempy * x_5_0_3 + ABCDtemp * x_3_0_3;
                            QUICKDouble x_6_2_2 = Qtempy * x_6_0_2 + WQtempy * x_6_0_3;
                            QUICKDouble x_7_2_2 = Qtempy * x_7_0_2 + WQtempy * x_7_0_3;
                            QUICKDouble x_8_2_2 = Qtempy * x_8_0_2 + WQtempy * x_8_0_3 + 2 * ABCDtemp * x_2_0_3;
                            QUICKDouble x_9_2_2 = Qtempy * x_9_0_2 + WQtempy * x_9_0_3;
                            QUICKDouble x_4_3_2 = Qtempz * x_4_0_2 + WQtempz * x_4_0_3;
                            QUICKDouble x_5_3_2 = Qtempz * x_5_0_2 + WQtempz * x_5_0_3 + ABCDtemp * x_2_0_3;
                            QUICKDouble x_6_3_2 = Qtempz * x_6_0_2 + WQtempz * x_6_0_3 + ABCDtemp * x_1_0_3;
                            QUICKDouble x_7_3_2 = Qtempz * x_7_0_2 + WQtempz * x_7_0_3;
                            QUICKDouble x_8_3_2 = Qtempz * x_8_0_2 + WQtempz * x_8_0_3;
                            QUICKDouble x_9_3_2 = Qtempz * x_9_0_2 + WQtempz * x_9_0_3 + 2 * ABCDtemp * x_3_0_3;
                            
                            // Subroutine for L =            2  B =            2 , m=           1
                            QUICKDouble x_4_5_1 = Ptempx * x_2_5_1 + WPtempx * x_2_5_2;
                            QUICKDouble x_4_8_1 = Ptempx * x_2_8_1 + WPtempx * x_2_8_2;
                            QUICKDouble x_4_9_1 = Ptempx * x_2_9_1 + WPtempx * x_2_9_2;
                            QUICKDouble x_5_5_1 = Ptempy * x_3_5_1 + WPtempy * x_3_5_2 + ABCDtemp * x_3_3_2;
                            QUICKDouble x_5_8_1 = Ptempy * x_3_8_1 + WPtempy * x_3_8_2 + 2 * ABCDtemp * x_3_2_2;
                            QUICKDouble x_5_9_1 = Ptempy * x_3_9_1 + WPtempy * x_3_9_2;
                            QUICKDouble x_6_5_1 = Ptempx * x_3_5_1 + WPtempx * x_3_5_2;
                            QUICKDouble x_6_8_1 = Ptempx * x_3_8_1 + WPtempx * x_3_8_2;
                            QUICKDouble x_6_9_1 = Ptempx * x_3_9_1 + WPtempx * x_3_9_2;
                            QUICKDouble x_7_5_1 = Ptempx * x_1_5_1 + WPtempx * x_1_5_2 + ABtemp * (x_0_5_1 -  CDcom * x_0_5_2);
                            QUICKDouble x_7_8_1 = Ptempx * x_1_8_1 + WPtempx * x_1_8_2 + ABtemp * (x_0_8_1 -  CDcom * x_0_8_2);
                            QUICKDouble x_7_9_1 = Ptempx * x_1_9_1 + WPtempx * x_1_9_2 + ABtemp * (x_0_9_1 -  CDcom * x_0_9_2);
                            QUICKDouble x_8_5_1 = Ptempy * x_2_5_1 + WPtempy * x_2_5_2 + ABtemp * (x_0_5_1 -  CDcom * x_0_5_2) + ABCDtemp * x_2_3_2;
                            QUICKDouble x_8_8_1 = Ptempy * x_2_8_1 + WPtempy * x_2_8_2 + ABtemp * (x_0_8_1 -  CDcom * x_0_8_2) + 2 * ABCDtemp * x_2_2_2;
                            QUICKDouble x_8_9_1 = Ptempy * x_2_9_1 + WPtempy * x_2_9_2 + ABtemp * (x_0_9_1 -  CDcom * x_0_9_2);
                            QUICKDouble x_9_5_1 = Ptempz * x_3_5_1 + WPtempz * x_3_5_2 + ABtemp * (x_0_5_1 -  CDcom * x_0_5_2) + ABCDtemp * x_3_2_2;
                            QUICKDouble x_9_8_1 = Ptempz * x_3_8_1 + WPtempz * x_3_8_2 + ABtemp * (x_0_8_1 -  CDcom * x_0_8_2);
                            QUICKDouble x_9_9_1 = Ptempz * x_3_9_1 + WPtempz * x_3_9_2 + ABtemp * (x_0_9_1 -  CDcom * x_0_9_2) + 2 * ABCDtemp * x_3_3_2;
                            
                            // Subroutine for L =            3  B =            0 , m=           3
                            QUICKDouble x_10_0_3 = Ptempx * x_5_0_3 + WPtempx * x_5_0_4;
                            QUICKDouble x_11_0_3 = Ptempx * x_4_0_3 + WPtempx * x_4_0_4 + ABtemp * (x_2_0_3 -  CDcom * x_2_0_4);
                            QUICKDouble x_12_0_3 = Ptempx * x_8_0_3 + WPtempx * x_8_0_4;
                            QUICKDouble x_13_0_3 = Ptempx * x_6_0_3 + WPtempx * x_6_0_4 + ABtemp * (x_3_0_3 -  CDcom * x_3_0_4);
                            QUICKDouble x_14_0_3 = Ptempx * x_9_0_3 + WPtempx * x_9_0_4;
                            QUICKDouble x_15_0_3 = Ptempy * x_5_0_3 + WPtempy * x_5_0_4 + ABtemp * (x_3_0_3 -  CDcom * x_3_0_4);
                            QUICKDouble x_16_0_3 = Ptempy * x_9_0_3 + WPtempy * x_9_0_4;
                            QUICKDouble x_17_0_3 = Ptempx * x_7_0_3 + WPtempx * x_7_0_4 + ABtemp * 2 * (x_1_0_3 -  CDcom * x_1_0_4);
                            QUICKDouble x_18_0_3 = Ptempy * x_8_0_3 + WPtempy * x_8_0_4 + ABtemp * 2 * (x_2_0_3 -  CDcom * x_2_0_4);
                            QUICKDouble x_19_0_3 = Ptempz * x_9_0_3 + WPtempz * x_9_0_4 + ABtemp * 2 * (x_3_0_3 -  CDcom * x_3_0_4);
                            // Subroutine for B =            3  L =            1 , m=           2
                            QUICKDouble x_10_1_2 = Qtempx * x_10_0_2 + WQtempx * x_10_0_3 + ABCDtemp * x_5_0_3;
                            QUICKDouble x_11_1_2 = Qtempx * x_11_0_2 + WQtempx * x_11_0_3 + 2 * ABCDtemp * x_4_0_3;
                            QUICKDouble x_12_1_2 = Qtempx * x_12_0_2 + WQtempx * x_12_0_3 + ABCDtemp * x_8_0_3;
                            QUICKDouble x_13_1_2 = Qtempx * x_13_0_2 + WQtempx * x_13_0_3 + 2 * ABCDtemp * x_6_0_3;
                            QUICKDouble x_14_1_2 = Qtempx * x_14_0_2 + WQtempx * x_14_0_3 + ABCDtemp * x_9_0_3;
                            QUICKDouble x_15_1_2 = Qtempx * x_15_0_2 + WQtempx * x_15_0_3;
                            QUICKDouble x_16_1_2 = Qtempx * x_16_0_2 + WQtempx * x_16_0_3;
                            QUICKDouble x_17_1_2 = Qtempx * x_17_0_2 + WQtempx * x_17_0_3 + 3 * ABCDtemp * x_7_0_3;
                            QUICKDouble x_18_1_2 = Qtempx * x_18_0_2 + WQtempx * x_18_0_3;
                            QUICKDouble x_19_1_2 = Qtempx * x_19_0_2 + WQtempx * x_19_0_3;
                            QUICKDouble x_10_2_2 = Qtempy * x_10_0_2 + WQtempy * x_10_0_3 + ABCDtemp * x_6_0_3;
                            QUICKDouble x_11_2_2 = Qtempy * x_11_0_2 + WQtempy * x_11_0_3 + ABCDtemp * x_7_0_3;
                            QUICKDouble x_12_2_2 = Qtempy * x_12_0_2 + WQtempy * x_12_0_3 + 2 * ABCDtemp * x_4_0_3;
                            QUICKDouble x_13_2_2 = Qtempy * x_13_0_2 + WQtempy * x_13_0_3;
                            QUICKDouble x_14_2_2 = Qtempy * x_14_0_2 + WQtempy * x_14_0_3;
                            QUICKDouble x_15_2_2 = Qtempy * x_15_0_2 + WQtempy * x_15_0_3 + 2 * ABCDtemp * x_5_0_3;
                            QUICKDouble x_16_2_2 = Qtempy * x_16_0_2 + WQtempy * x_16_0_3 + ABCDtemp * x_9_0_3;
                            QUICKDouble x_17_2_2 = Qtempy * x_17_0_2 + WQtempy * x_17_0_3;
                            QUICKDouble x_18_2_2 = Qtempy * x_18_0_2 + WQtempy * x_18_0_3 + 3 * ABCDtemp * x_8_0_3;
                            QUICKDouble x_19_2_2 = Qtempy * x_19_0_2 + WQtempy * x_19_0_3;
                            QUICKDouble x_10_3_2 = Qtempz * x_10_0_2 + WQtempz * x_10_0_3 + ABCDtemp * x_4_0_3;
                            QUICKDouble x_11_3_2 = Qtempz * x_11_0_2 + WQtempz * x_11_0_3;
                            QUICKDouble x_12_3_2 = Qtempz * x_12_0_2 + WQtempz * x_12_0_3;
                            QUICKDouble x_13_3_2 = Qtempz * x_13_0_2 + WQtempz * x_13_0_3 + ABCDtemp * x_7_0_3;
                            QUICKDouble x_14_3_2 = Qtempz * x_14_0_2 + WQtempz * x_14_0_3 + 2 * ABCDtemp * x_6_0_3;
                            QUICKDouble x_15_3_2 = Qtempz * x_15_0_2 + WQtempz * x_15_0_3 + ABCDtemp * x_8_0_3;
                            QUICKDouble x_16_3_2 = Qtempz * x_16_0_2 + WQtempz * x_16_0_3 + 2 * ABCDtemp * x_5_0_3;
                            QUICKDouble x_17_3_2 = Qtempz * x_17_0_2 + WQtempz * x_17_0_3;
                            QUICKDouble x_18_3_2 = Qtempz * x_18_0_2 + WQtempz * x_18_0_3;
                            QUICKDouble x_19_3_2 = Qtempz * x_19_0_2 + WQtempz * x_19_0_3 + 3 * ABCDtemp * x_9_0_3;
                            
                            // Subroutine for B =            3  L =            2 , m=           1
                            QUICKDouble x_10_4_1 = Qtempx * x_10_2_1 + WQtempx * x_10_2_2 + ABCDtemp * x_5_2_2;
                            QUICKDouble x_11_4_1 = Qtempx * x_11_2_1 + WQtempx * x_11_2_2 + 2 * ABCDtemp * x_4_2_2;
                            QUICKDouble x_12_4_1 = Qtempx * x_12_2_1 + WQtempx * x_12_2_2 + ABCDtemp * x_8_2_2;
                            QUICKDouble x_13_4_1 = Qtempx * x_13_2_1 + WQtempx * x_13_2_2 + 2 * ABCDtemp * x_6_2_2;
                            QUICKDouble x_14_4_1 = Qtempx * x_14_2_1 + WQtempx * x_14_2_2 + ABCDtemp * x_9_2_2;
                            QUICKDouble x_15_4_1 = Qtempx * x_15_2_1 + WQtempx * x_15_2_2;
                            QUICKDouble x_16_4_1 = Qtempx * x_16_2_1 + WQtempx * x_16_2_2;
                            QUICKDouble x_17_4_1 = Qtempx * x_17_2_1 + WQtempx * x_17_2_2 + 3 * ABCDtemp * x_7_2_2;
                            QUICKDouble x_18_4_1 = Qtempx * x_18_2_1 + WQtempx * x_18_2_2;
                            QUICKDouble x_19_4_1 = Qtempx * x_19_2_1 + WQtempx * x_19_2_2;
                            QUICKDouble x_10_5_1 = Qtempy * x_10_3_1 + WQtempy * x_10_3_2 + ABCDtemp * x_6_3_2;
                            QUICKDouble x_11_5_1 = Qtempy * x_11_3_1 + WQtempy * x_11_3_2 + ABCDtemp * x_7_3_2;
                            QUICKDouble x_12_5_1 = Qtempy * x_12_3_1 + WQtempy * x_12_3_2 + 2 * ABCDtemp * x_4_3_2;
                            QUICKDouble x_13_5_1 = Qtempy * x_13_3_1 + WQtempy * x_13_3_2;
                            QUICKDouble x_14_5_1 = Qtempy * x_14_3_1 + WQtempy * x_14_3_2;
                            QUICKDouble x_15_5_1 = Qtempy * x_15_3_1 + WQtempy * x_15_3_2 + 2 * ABCDtemp * x_5_3_2;
                            QUICKDouble x_16_5_1 = Qtempy * x_16_3_1 + WQtempy * x_16_3_2 + ABCDtemp * x_9_3_2;
                            QUICKDouble x_17_5_1 = Qtempy * x_17_3_1 + WQtempy * x_17_3_2;
                            QUICKDouble x_18_5_1 = Qtempy * x_18_3_1 + WQtempy * x_18_3_2 + 3 * ABCDtemp * x_8_3_2;
                            QUICKDouble x_19_5_1 = Qtempy * x_19_3_1 + WQtempy * x_19_3_2;
                            QUICKDouble x_10_6_1 = Qtempx * x_10_3_1 + WQtempx * x_10_3_2 + ABCDtemp * x_5_3_2;
                            QUICKDouble x_11_6_1 = Qtempx * x_11_3_1 + WQtempx * x_11_3_2 + 2 * ABCDtemp * x_4_3_2;
                            QUICKDouble x_12_6_1 = Qtempx * x_12_3_1 + WQtempx * x_12_3_2 + ABCDtemp * x_8_3_2;
                            QUICKDouble x_13_6_1 = Qtempx * x_13_3_1 + WQtempx * x_13_3_2 + 2 * ABCDtemp * x_6_3_2;
                            QUICKDouble x_14_6_1 = Qtempx * x_14_3_1 + WQtempx * x_14_3_2 + ABCDtemp * x_9_3_2;
                            QUICKDouble x_15_6_1 = Qtempx * x_15_3_1 + WQtempx * x_15_3_2;
                            QUICKDouble x_16_6_1 = Qtempx * x_16_3_1 + WQtempx * x_16_3_2;
                            QUICKDouble x_17_6_1 = Qtempx * x_17_3_1 + WQtempx * x_17_3_2 + 3 * ABCDtemp * x_7_3_2;
                            QUICKDouble x_18_6_1 = Qtempx * x_18_3_1 + WQtempx * x_18_3_2;
                            QUICKDouble x_19_6_1 = Qtempx * x_19_3_1 + WQtempx * x_19_3_2;
                            QUICKDouble x_10_7_1 = Qtempx * x_10_1_1 + WQtempx * x_10_1_2 + CDtemp * (x_10_0_1 -  ABcom * x_10_0_2) + ABCDtemp * (Qtempx * x_5_0_2 + WQtempx * x_5_0_3);
                            QUICKDouble x_11_7_1 = Qtempx * x_11_1_1 + WQtempx * x_11_1_2 + CDtemp * (x_11_0_1 -  ABcom * x_11_0_2) + 2 * ABCDtemp * (Qtempx * x_4_0_2 + WQtempx * x_4_0_3 + ABCDtemp * x_2_0_3);
                            QUICKDouble x_12_7_1 = Qtempx * x_12_1_1 + WQtempx * x_12_1_2 + CDtemp * (x_12_0_1 -  ABcom * x_12_0_2) + ABCDtemp * (Qtempx * x_8_0_2 + WQtempx * x_8_0_3);
                            QUICKDouble x_13_7_1 = Qtempx * x_13_1_1 + WQtempx * x_13_1_2 + CDtemp * (x_13_0_1 -  ABcom * x_13_0_2) + 2 * ABCDtemp * (Qtempx * x_6_0_2 + WQtempx * x_6_0_3 + ABCDtemp * x_3_0_3);
                            QUICKDouble x_14_7_1 = Qtempx * x_14_1_1 + WQtempx * x_14_1_2 + CDtemp * (x_14_0_1 -  ABcom * x_14_0_2) + ABCDtemp * (Qtempx * x_9_0_2 + WQtempx * x_9_0_3);
                            QUICKDouble x_15_7_1 = Qtempx * x_15_1_1 + WQtempx * x_15_1_2 + CDtemp * (x_15_0_1 -  ABcom * x_15_0_2);
                            QUICKDouble x_16_7_1 = Qtempx * x_16_1_1 + WQtempx * x_16_1_2 + CDtemp * (x_16_0_1 -  ABcom * x_16_0_2);
                            QUICKDouble x_17_7_1 = Qtempx * x_17_1_1 + WQtempx * x_17_1_2 + CDtemp * (x_17_0_1 -  ABcom * x_17_0_2) + 3 * ABCDtemp * (Qtempx * x_7_0_2 + WQtempx * x_7_0_3 + 2 * ABCDtemp * x_1_0_3);
                            QUICKDouble x_18_7_1 = Qtempx * x_18_1_1 + WQtempx * x_18_1_2 + CDtemp * (x_18_0_1 -  ABcom * x_18_0_2);
                            QUICKDouble x_19_7_1 = Qtempx * x_19_1_1 + WQtempx * x_19_1_2 + CDtemp * (x_19_0_1 -  ABcom * x_19_0_2);
                            QUICKDouble x_10_8_1 = Qtempy * x_10_2_1 + WQtempy * x_10_2_2 + CDtemp * (x_10_0_1 -  ABcom * x_10_0_2) + ABCDtemp * x_6_2_2;
                            QUICKDouble x_11_8_1 = Qtempy * x_11_2_1 + WQtempy * x_11_2_2 + CDtemp * (x_11_0_1 -  ABcom * x_11_0_2) + ABCDtemp * x_7_2_2;
                            QUICKDouble x_12_8_1 = Qtempy * x_12_2_1 + WQtempy * x_12_2_2 + CDtemp * (x_12_0_1 -  ABcom * x_12_0_2) + 2 * ABCDtemp * x_4_2_2;
                            QUICKDouble x_13_8_1 = Qtempy * x_13_2_1 + WQtempy * x_13_2_2 + CDtemp * (x_13_0_1 -  ABcom * x_13_0_2);
                            QUICKDouble x_14_8_1 = Qtempy * x_14_2_1 + WQtempy * x_14_2_2 + CDtemp * (x_14_0_1 -  ABcom * x_14_0_2);
                            QUICKDouble x_15_8_1 = Qtempy * x_15_2_1 + WQtempy * x_15_2_2 + CDtemp * (x_15_0_1 -  ABcom * x_15_0_2) + 2 * ABCDtemp * x_5_2_2;
                            QUICKDouble x_16_8_1 = Qtempy * x_16_2_1 + WQtempy * x_16_2_2 + CDtemp * (x_16_0_1 -  ABcom * x_16_0_2) + ABCDtemp * x_9_2_2;
                            QUICKDouble x_17_8_1 = Qtempy * x_17_2_1 + WQtempy * x_17_2_2 + CDtemp * (x_17_0_1 -  ABcom * x_17_0_2);
                            QUICKDouble x_18_8_1 = Qtempy * x_18_2_1 + WQtempy * x_18_2_2 + CDtemp * (x_18_0_1 -  ABcom * x_18_0_2) + 3 * ABCDtemp * x_8_2_2;
                            QUICKDouble x_19_8_1 = Qtempy * x_19_2_1 + WQtempy * x_19_2_2 + CDtemp * (x_19_0_1 -  ABcom * x_19_0_2);
                            QUICKDouble x_10_9_1 = Qtempz * x_10_3_1 + WQtempz * x_10_3_2 + CDtemp * (x_10_0_1 -  ABcom * x_10_0_2) + ABCDtemp * x_4_3_2;
                            QUICKDouble x_11_9_1 = Qtempz * x_11_3_1 + WQtempz * x_11_3_2 + CDtemp * (x_11_0_1 -  ABcom * x_11_0_2);
                            QUICKDouble x_12_9_1 = Qtempz * x_12_3_1 + WQtempz * x_12_3_2 + CDtemp * (x_12_0_1 -  ABcom * x_12_0_2);
                            QUICKDouble x_13_9_1 = Qtempz * x_13_3_1 + WQtempz * x_13_3_2 + CDtemp * (x_13_0_1 -  ABcom * x_13_0_2) + ABCDtemp * x_7_3_2;
                            QUICKDouble x_14_9_1 = Qtempz * x_14_3_1 + WQtempz * x_14_3_2 + CDtemp * (x_14_0_1 -  ABcom * x_14_0_2) + 2 * ABCDtemp * x_6_3_2;
                            QUICKDouble x_15_9_1 = Qtempz * x_15_3_1 + WQtempz * x_15_3_2 + CDtemp * (x_15_0_1 -  ABcom * x_15_0_2) + ABCDtemp * x_8_3_2;
                            QUICKDouble x_16_9_1 = Qtempz * x_16_3_1 + WQtempz * x_16_3_2 + CDtemp * (x_16_0_1 -  ABcom * x_16_0_2) + 2 * ABCDtemp * x_5_3_2;
                            QUICKDouble x_17_9_1 = Qtempz * x_17_3_1 + WQtempz * x_17_3_2 + CDtemp * (x_17_0_1 -  ABcom * x_17_0_2);
                            QUICKDouble x_18_9_1 = Qtempz * x_18_3_1 + WQtempz * x_18_3_2 + CDtemp * (x_18_0_1 -  ABcom * x_18_0_2);
                            QUICKDouble x_19_9_1 = Qtempz * x_19_3_1 + WQtempz * x_19_3_2 + CDtemp * (x_19_0_1 -  ABcom * x_19_0_2) + 3 * ABCDtemp * x_9_3_2;
                            
                            // Subroutine for B =            3  L =            3 , m=           0
                            
                            // WRITE LAST FOR I =            3  J=           3
                            LOC2(store, 10, 10, STOREDIM, STOREDIM) = (Qtempx * x_10_5_0 + WQtempx * x_10_5_1 + ABCDtemp * x_5_5_1);
                            LOC2(store, 10, 11, STOREDIM, STOREDIM) = (Qtempx * x_10_4_0 + WQtempx * x_10_4_1 + CDtemp * (x_10_2_0 -  ABcom * x_10_2_1) + ABCDtemp * (Ptempy * x_3_4_1 + WPtempy * x_3_4_2 + ABCDtemp * x_3_1_2));
                            LOC2(store, 10, 12, STOREDIM, STOREDIM) = (Qtempx * x_10_8_0 + WQtempx * x_10_8_1 + ABCDtemp * x_5_8_1);
                            LOC2(store, 10, 13, STOREDIM, STOREDIM) = (Qtempx * x_10_6_0 + WQtempx * x_10_6_1 + CDtemp * (x_10_3_0 -  ABcom * x_10_3_1) + ABCDtemp * (Ptempy * x_3_6_1 + WPtempy * x_3_6_2));
                            LOC2(store, 10, 14, STOREDIM, STOREDIM) = (Qtempx * x_10_9_0 + WQtempx * x_10_9_1 + ABCDtemp * x_5_9_1);
                            LOC2(store, 10, 15, STOREDIM, STOREDIM) = (Qtempy * x_10_5_0 + WQtempy * x_10_5_1 + CDtemp * (x_10_3_0 -  ABcom * x_10_3_1) + ABCDtemp * x_6_5_1);
                            LOC2(store, 10, 16, STOREDIM, STOREDIM) = (Qtempy * x_10_9_0 + WQtempy * x_10_9_1 + ABCDtemp * x_6_9_1);
                            LOC2(store, 10, 17, STOREDIM, STOREDIM) = (Qtempx * x_10_7_0 + WQtempx * x_10_7_1 + CDtemp * 2 * (x_10_1_0 -  ABcom * x_10_1_1) + ABCDtemp * (Ptempy * x_3_7_1 + WPtempy * x_3_7_2));
                            LOC2(store, 10, 18, STOREDIM, STOREDIM) = (Qtempy * x_10_8_0 + WQtempy * x_10_8_1 + CDtemp * 2 * (x_10_2_0 -  ABcom * x_10_2_1) + ABCDtemp * x_6_8_1);
                            LOC2(store, 10, 19, STOREDIM, STOREDIM) = (Qtempz * x_10_9_0 + WQtempz * x_10_9_1 + CDtemp * 2 * (x_10_3_0 -  ABcom * x_10_3_1) + ABCDtemp * x_4_9_1);
                            LOC2(store, 11, 10, STOREDIM, STOREDIM) = (Qtempx * x_11_5_0 + WQtempx * x_11_5_1 + 2 * ABCDtemp * x_4_5_1);
                            LOC2(store, 11, 11, STOREDIM, STOREDIM) = (Qtempx * x_11_4_0 + WQtempx * x_11_4_1 + CDtemp * (x_11_2_0 -  ABcom * x_11_2_1) + 2 * ABCDtemp * (Ptempx * x_2_4_1 + WPtempx * x_2_4_2 + ABCDtemp * x_2_2_2));
                            LOC2(store, 11, 12, STOREDIM, STOREDIM) = (Qtempx * x_11_8_0 + WQtempx * x_11_8_1 + 2 * ABCDtemp * x_4_8_1);
                            LOC2(store, 11, 13, STOREDIM, STOREDIM) = (Qtempx * x_11_6_0 + WQtempx * x_11_6_1 + CDtemp * (x_11_3_0 -  ABcom * x_11_3_1) + 2 * ABCDtemp * (Ptempx * x_2_6_1 + WPtempx * x_2_6_2 + ABCDtemp * x_2_3_2));
                            LOC2(store, 11, 14, STOREDIM, STOREDIM) = (Qtempx * x_11_9_0 + WQtempx * x_11_9_1 + 2 * ABCDtemp * x_4_9_1);
                            LOC2(store, 11, 15, STOREDIM, STOREDIM) = (Qtempy * x_11_5_0 + WQtempy * x_11_5_1 + CDtemp * (x_11_3_0 -  ABcom * x_11_3_1) + ABCDtemp * x_7_5_1);
                            LOC2(store, 11, 16, STOREDIM, STOREDIM) = (Qtempy * x_11_9_0 + WQtempy * x_11_9_1 + ABCDtemp * x_7_9_1);
                            LOC2(store, 11, 17, STOREDIM, STOREDIM) = (Qtempx * x_11_7_0 + WQtempx * x_11_7_1 + CDtemp * 2 * (x_11_1_0 -  ABcom * x_11_1_1) + 2 * ABCDtemp * (Ptempx * x_2_7_1 + WPtempx * x_2_7_2 + 2 * ABCDtemp * x_2_1_2));
                            LOC2(store, 11, 18, STOREDIM, STOREDIM) = (Qtempy * x_11_8_0 + WQtempy * x_11_8_1 + CDtemp * 2 * (x_11_2_0 -  ABcom * x_11_2_1) + ABCDtemp * x_7_8_1);
                            LOC2(store, 11, 19, STOREDIM, STOREDIM) = (Qtempz * x_11_9_0 + WQtempz * x_11_9_1 + CDtemp * 2 * (x_11_3_0 -  ABcom * x_11_3_1));
                            LOC2(store, 12, 10, STOREDIM, STOREDIM) = (Qtempx * x_12_5_0 + WQtempx * x_12_5_1 + ABCDtemp * x_8_5_1);
                            LOC2(store, 12, 11, STOREDIM, STOREDIM) = (Qtempx * x_12_4_0 + WQtempx * x_12_4_1 + CDtemp * (x_12_2_0 -  ABcom * x_12_2_1) + ABCDtemp * (Ptempy * x_2_4_1 + WPtempy * x_2_4_2 + ABtemp * (x_0_4_1 -  CDcom * x_0_4_2) + ABCDtemp * x_2_1_2));
                            LOC2(store, 12, 12, STOREDIM, STOREDIM) = (Qtempx * x_12_8_0 + WQtempx * x_12_8_1 + ABCDtemp * x_8_8_1);
                            LOC2(store, 12, 13, STOREDIM, STOREDIM) = (Qtempx * x_12_6_0 + WQtempx * x_12_6_1 + CDtemp * (x_12_3_0 -  ABcom * x_12_3_1) + ABCDtemp * (Ptempy * x_2_6_1 + WPtempy * x_2_6_2 + ABtemp * (x_0_6_1 -  CDcom * x_0_6_2)));
                            LOC2(store, 12, 14, STOREDIM, STOREDIM) = (Qtempx * x_12_9_0 + WQtempx * x_12_9_1 + ABCDtemp * x_8_9_1);
                            LOC2(store, 12, 15, STOREDIM, STOREDIM) = (Qtempy * x_12_5_0 + WQtempy * x_12_5_1 + CDtemp * (x_12_3_0 -  ABcom * x_12_3_1) + 2 * ABCDtemp * x_4_5_1);
                            LOC2(store, 12, 16, STOREDIM, STOREDIM) = (Qtempy * x_12_9_0 + WQtempy * x_12_9_1 + 2 * ABCDtemp * x_4_9_1);
                            LOC2(store, 12, 17, STOREDIM, STOREDIM) = (Qtempx * x_12_7_0 + WQtempx * x_12_7_1 + CDtemp * 2 * (x_12_1_0 -  ABcom * x_12_1_1) + ABCDtemp * (Ptempy * x_2_7_1 + WPtempy * x_2_7_2 + ABtemp * (x_0_7_1 -  CDcom * x_0_7_2)));
                            LOC2(store, 12, 18, STOREDIM, STOREDIM) = (Qtempy * x_12_8_0 + WQtempy * x_12_8_1 + CDtemp * 2 * (x_12_2_0 -  ABcom * x_12_2_1) + 2 * ABCDtemp * x_4_8_1);
                            LOC2(store, 12, 19, STOREDIM, STOREDIM) = (Qtempz * x_12_9_0 + WQtempz * x_12_9_1 + CDtemp * 2 * (x_12_3_0 -  ABcom * x_12_3_1));
                            LOC2(store, 13, 10, STOREDIM, STOREDIM) = (Qtempx * x_13_5_0 + WQtempx * x_13_5_1 + 2 * ABCDtemp * x_6_5_1);
                            LOC2(store, 13, 11, STOREDIM, STOREDIM) = (Qtempx * x_13_4_0 + WQtempx * x_13_4_1 + CDtemp * (x_13_2_0 -  ABcom * x_13_2_1) + 2 * ABCDtemp * (Ptempx * x_3_4_1 + WPtempx * x_3_4_2 + ABCDtemp * x_3_2_2));
                            LOC2(store, 13, 12, STOREDIM, STOREDIM) = (Qtempx * x_13_8_0 + WQtempx * x_13_8_1 + 2 * ABCDtemp * x_6_8_1);
                            LOC2(store, 13, 13, STOREDIM, STOREDIM) = (Qtempx * x_13_6_0 + WQtempx * x_13_6_1 + CDtemp * (x_13_3_0 -  ABcom * x_13_3_1) + 2 * ABCDtemp * (Ptempx * x_3_6_1 + WPtempx * x_3_6_2 + ABCDtemp * x_3_3_2));
                            LOC2(store, 13, 14, STOREDIM, STOREDIM) = (Qtempx * x_13_9_0 + WQtempx * x_13_9_1 + 2 * ABCDtemp * x_6_9_1);
                            LOC2(store, 13, 15, STOREDIM, STOREDIM) = (Qtempy * x_13_5_0 + WQtempy * x_13_5_1 + CDtemp * (x_13_3_0 -  ABcom * x_13_3_1));
                            LOC2(store, 13, 16, STOREDIM, STOREDIM) = (Qtempy * x_13_9_0 + WQtempy * x_13_9_1);
                            LOC2(store, 13, 17, STOREDIM, STOREDIM) = (Qtempx * x_13_7_0 + WQtempx * x_13_7_1 + CDtemp * 2 * (x_13_1_0 -  ABcom * x_13_1_1) + 2 * ABCDtemp * (Ptempx * x_3_7_1 + WPtempx * x_3_7_2 + 2 * ABCDtemp * x_3_1_2));
                            LOC2(store, 13, 18, STOREDIM, STOREDIM) = (Qtempy * x_13_8_0 + WQtempy * x_13_8_1 + CDtemp * 2 * (x_13_2_0 -  ABcom * x_13_2_1));
                            LOC2(store, 13, 19, STOREDIM, STOREDIM) = (Qtempz * x_13_9_0 + WQtempz * x_13_9_1 + CDtemp * 2 * (x_13_3_0 -  ABcom * x_13_3_1) + ABCDtemp * x_7_9_1);
                            LOC2(store, 14, 10, STOREDIM, STOREDIM) = (Qtempx * x_14_5_0 + WQtempx * x_14_5_1 + ABCDtemp * x_9_5_1);
                            LOC2(store, 14, 11, STOREDIM, STOREDIM) = (Qtempx * x_14_4_0 + WQtempx * x_14_4_1 + CDtemp * (x_14_2_0 -  ABcom * x_14_2_1) + ABCDtemp * (Ptempz * x_3_4_1 + WPtempz * x_3_4_2 + ABtemp * (x_0_4_1 -  CDcom * x_0_4_2)));
                            LOC2(store, 14, 12, STOREDIM, STOREDIM) = (Qtempx * x_14_8_0 + WQtempx * x_14_8_1 + ABCDtemp * x_9_8_1);
                            LOC2(store, 14, 13, STOREDIM, STOREDIM) = (Qtempx * x_14_6_0 + WQtempx * x_14_6_1 + CDtemp * (x_14_3_0 -  ABcom * x_14_3_1) + ABCDtemp * (Ptempz * x_3_6_1 + WPtempz * x_3_6_2 + ABtemp * (x_0_6_1 -  CDcom * x_0_6_2) + ABCDtemp * x_3_1_2));
                            LOC2(store, 14, 14, STOREDIM, STOREDIM) = (Qtempx * x_14_9_0 + WQtempx * x_14_9_1 + ABCDtemp * x_9_9_1);
                            LOC2(store, 14, 15, STOREDIM, STOREDIM) = (Qtempy * x_14_5_0 + WQtempy * x_14_5_1 + CDtemp * (x_14_3_0 -  ABcom * x_14_3_1));
                            LOC2(store, 14, 16, STOREDIM, STOREDIM) = (Qtempy * x_14_9_0 + WQtempy * x_14_9_1);
                            LOC2(store, 14, 17, STOREDIM, STOREDIM) = (Qtempx * x_14_7_0 + WQtempx * x_14_7_1 + CDtemp * 2 * (x_14_1_0 -  ABcom * x_14_1_1) + ABCDtemp * (Ptempz * x_3_7_1 + WPtempz * x_3_7_2 + ABtemp * (x_0_7_1 -  CDcom * x_0_7_2)));
                            LOC2(store, 14, 18, STOREDIM, STOREDIM) = (Qtempy * x_14_8_0 + WQtempy * x_14_8_1 + CDtemp * 2 * (x_14_2_0 -  ABcom * x_14_2_1));
                            LOC2(store, 14, 19, STOREDIM, STOREDIM) = (Qtempz * x_14_9_0 + WQtempz * x_14_9_1 + CDtemp * 2 * (x_14_3_0 -  ABcom * x_14_3_1) + 2 * ABCDtemp * x_6_9_1);
                            LOC2(store, 15, 10, STOREDIM, STOREDIM) = (Qtempx * x_15_5_0 + WQtempx * x_15_5_1);
                            LOC2(store, 15, 11, STOREDIM, STOREDIM) = (Qtempx * x_15_4_0 + WQtempx * x_15_4_1 + CDtemp * (x_15_2_0 -  ABcom * x_15_2_1));
                            LOC2(store, 15, 12, STOREDIM, STOREDIM) = (Qtempx * x_15_8_0 + WQtempx * x_15_8_1);
                            LOC2(store, 15, 13, STOREDIM, STOREDIM) = (Qtempx * x_15_6_0 + WQtempx * x_15_6_1 + CDtemp * (x_15_3_0 -  ABcom * x_15_3_1));
                            LOC2(store, 15, 14, STOREDIM, STOREDIM) = (Qtempx * x_15_9_0 + WQtempx * x_15_9_1);
                            LOC2(store, 15, 15, STOREDIM, STOREDIM) = (Qtempy * x_15_5_0 + WQtempy * x_15_5_1 + CDtemp * (x_15_3_0 -  ABcom * x_15_3_1) + 2 * ABCDtemp * x_5_5_1);
                            LOC2(store, 15, 16, STOREDIM, STOREDIM) = (Qtempy * x_15_9_0 + WQtempy * x_15_9_1 + 2 * ABCDtemp * x_5_9_1);
                            LOC2(store, 15, 17, STOREDIM, STOREDIM) = (Qtempx * x_15_7_0 + WQtempx * x_15_7_1 + CDtemp * 2 * (x_15_1_0 -  ABcom * x_15_1_1));
                            LOC2(store, 15, 18, STOREDIM, STOREDIM) = (Qtempy * x_15_8_0 + WQtempy * x_15_8_1 + CDtemp * 2 * (x_15_2_0 -  ABcom * x_15_2_1) + 2 * ABCDtemp * x_5_8_1);
                            LOC2(store, 15, 19, STOREDIM, STOREDIM) = (Qtempz * x_15_9_0 + WQtempz * x_15_9_1 + CDtemp * 2 * (x_15_3_0 -  ABcom * x_15_3_1) + ABCDtemp * x_8_9_1);
                            LOC2(store, 16, 10, STOREDIM, STOREDIM) = (Qtempx * x_16_5_0 + WQtempx * x_16_5_1);
                            LOC2(store, 16, 11, STOREDIM, STOREDIM) = (Qtempx * x_16_4_0 + WQtempx * x_16_4_1 + CDtemp * (x_16_2_0 -  ABcom * x_16_2_1));
                            LOC2(store, 16, 12, STOREDIM, STOREDIM) = (Qtempx * x_16_8_0 + WQtempx * x_16_8_1);
                            LOC2(store, 16, 13, STOREDIM, STOREDIM) = (Qtempx * x_16_6_0 + WQtempx * x_16_6_1 + CDtemp * (x_16_3_0 -  ABcom * x_16_3_1));
                            LOC2(store, 16, 14, STOREDIM, STOREDIM) = (Qtempx * x_16_9_0 + WQtempx * x_16_9_1);
                            LOC2(store, 16, 15, STOREDIM, STOREDIM) = (Qtempy * x_16_5_0 + WQtempy * x_16_5_1 + CDtemp * (x_16_3_0 -  ABcom * x_16_3_1) + ABCDtemp * x_9_5_1);
                            LOC2(store, 16, 16, STOREDIM, STOREDIM) = (Qtempy * x_16_9_0 + WQtempy * x_16_9_1 + ABCDtemp * x_9_9_1);
                            LOC2(store, 16, 17, STOREDIM, STOREDIM) = (Qtempx * x_16_7_0 + WQtempx * x_16_7_1 + CDtemp * 2 * (x_16_1_0 -  ABcom * x_16_1_1));
                            LOC2(store, 16, 18, STOREDIM, STOREDIM) = (Qtempy * x_16_8_0 + WQtempy * x_16_8_1 + CDtemp * 2 * (x_16_2_0 -  ABcom * x_16_2_1) + ABCDtemp * x_9_8_1);
                            LOC2(store, 16, 19, STOREDIM, STOREDIM) = (Qtempz * x_16_9_0 + WQtempz * x_16_9_1 + CDtemp * 2 * (x_16_3_0 -  ABcom * x_16_3_1) + 2 * ABCDtemp * x_5_9_1);
                            LOC2(store, 17, 10, STOREDIM, STOREDIM) = (Qtempx * x_17_5_0 + WQtempx * x_17_5_1 + 3 * ABCDtemp * x_7_5_1);
                            LOC2(store, 17, 11, STOREDIM, STOREDIM) = (Qtempx * x_17_4_0 + WQtempx * x_17_4_1 + CDtemp * (x_17_2_0 -  ABcom * x_17_2_1) + 3 * ABCDtemp * (Ptempx * x_1_4_1 + WPtempx * x_1_4_2 + ABtemp * (x_0_4_1 -  CDcom * x_0_4_2) + ABCDtemp * (Ptempx * x_0_2_2 + WPtempx * x_0_2_3)));
                            LOC2(store, 17, 12, STOREDIM, STOREDIM) = (Qtempx * x_17_8_0 + WQtempx * x_17_8_1 + 3 * ABCDtemp * x_7_8_1);
                            LOC2(store, 17, 13, STOREDIM, STOREDIM) = (Qtempx * x_17_6_0 + WQtempx * x_17_6_1 + CDtemp * (x_17_3_0 -  ABcom * x_17_3_1) + 3 * ABCDtemp * (Ptempx * x_1_6_1 + WPtempx * x_1_6_2 + ABtemp * (x_0_6_1 -  CDcom * x_0_6_2) + ABCDtemp * (Ptempx * x_0_3_2 + WPtempx * x_0_3_3)));
                            LOC2(store, 17, 14, STOREDIM, STOREDIM) = (Qtempx * x_17_9_0 + WQtempx * x_17_9_1 + 3 * ABCDtemp * x_7_9_1);
                            LOC2(store, 17, 15, STOREDIM, STOREDIM) = (Qtempy * x_17_5_0 + WQtempy * x_17_5_1 + CDtemp * (x_17_3_0 -  ABcom * x_17_3_1));
                            LOC2(store, 17, 16, STOREDIM, STOREDIM) = (Qtempy * x_17_9_0 + WQtempy * x_17_9_1);
                            LOC2(store, 17, 17, STOREDIM, STOREDIM) = (Qtempx * x_17_7_0 + WQtempx * x_17_7_1 + CDtemp * 2 * (x_17_1_0 -  ABcom * x_17_1_1) + 3 * ABCDtemp * (Ptempx * x_1_7_1 + WPtempx * x_1_7_2 + ABtemp * (x_0_7_1 -  CDcom * x_0_7_2) + 2 * ABCDtemp * (Ptempx * x_0_1_2 + WPtempx * x_0_1_3 + ABCDtemp * VY( 0, 0, 3))));
                            LOC2(store, 17, 18, STOREDIM, STOREDIM) = (Qtempy * x_17_8_0 + WQtempy * x_17_8_1 + CDtemp * 2 * (x_17_2_0 -  ABcom * x_17_2_1));
                            LOC2(store, 17, 19, STOREDIM, STOREDIM) = (Qtempz * x_17_9_0 + WQtempz * x_17_9_1 + CDtemp * 2 * (x_17_3_0 -  ABcom * x_17_3_1));
                            LOC2(store, 18, 10, STOREDIM, STOREDIM) = (Qtempx * x_18_5_0 + WQtempx * x_18_5_1);
                            LOC2(store, 18, 11, STOREDIM, STOREDIM) = (Qtempx * x_18_4_0 + WQtempx * x_18_4_1 + CDtemp * (x_18_2_0 -  ABcom * x_18_2_1));
                            LOC2(store, 18, 12, STOREDIM, STOREDIM) = (Qtempx * x_18_8_0 + WQtempx * x_18_8_1);
                            LOC2(store, 18, 13, STOREDIM, STOREDIM) = (Qtempx * x_18_6_0 + WQtempx * x_18_6_1 + CDtemp * (x_18_3_0 -  ABcom * x_18_3_1));
                            LOC2(store, 18, 14, STOREDIM, STOREDIM) = (Qtempx * x_18_9_0 + WQtempx * x_18_9_1);
                            LOC2(store, 18, 15, STOREDIM, STOREDIM) = (Qtempy * x_18_5_0 + WQtempy * x_18_5_1 + CDtemp * (x_18_3_0 -  ABcom * x_18_3_1) + 3 * ABCDtemp * x_8_5_1);
                            LOC2(store, 18, 16, STOREDIM, STOREDIM) = (Qtempy * x_18_9_0 + WQtempy * x_18_9_1 + 3 * ABCDtemp * x_8_9_1);
                            LOC2(store, 18, 17, STOREDIM, STOREDIM) = (Qtempx * x_18_7_0 + WQtempx * x_18_7_1 + CDtemp * 2 * (x_18_1_0 -  ABcom * x_18_1_1));
                            LOC2(store, 18, 18, STOREDIM, STOREDIM) = (Qtempy * x_18_8_0 + WQtempy * x_18_8_1 + CDtemp * 2 * (x_18_2_0 -  ABcom * x_18_2_1) + 3 * ABCDtemp * x_8_8_1);
                            LOC2(store, 18, 19, STOREDIM, STOREDIM) = (Qtempz * x_18_9_0 + WQtempz * x_18_9_1 + CDtemp * 2 * (x_18_3_0 -  ABcom * x_18_3_1));
                            LOC2(store, 19, 10, STOREDIM, STOREDIM) = (Qtempx * x_19_5_0 + WQtempx * x_19_5_1);
                            LOC2(store, 19, 11, STOREDIM, STOREDIM) = (Qtempx * x_19_4_0 + WQtempx * x_19_4_1 + CDtemp * (x_19_2_0 -  ABcom * x_19_2_1));
                            LOC2(store, 19, 12, STOREDIM, STOREDIM) = (Qtempx * x_19_8_0 + WQtempx * x_19_8_1);
                            LOC2(store, 19, 13, STOREDIM, STOREDIM) = (Qtempx * x_19_6_0 + WQtempx * x_19_6_1 + CDtemp * (x_19_3_0 -  ABcom * x_19_3_1));
                            LOC2(store, 19, 14, STOREDIM, STOREDIM) = (Qtempx * x_19_9_0 + WQtempx * x_19_9_1);
                            LOC2(store, 19, 15, STOREDIM, STOREDIM) = (Qtempy * x_19_5_0 + WQtempy * x_19_5_1 + CDtemp * (x_19_3_0 -  ABcom * x_19_3_1));
                            LOC2(store, 19, 16, STOREDIM, STOREDIM) = (Qtempy * x_19_9_0 + WQtempy * x_19_9_1);
                            LOC2(store, 19, 17, STOREDIM, STOREDIM) = (Qtempx * x_19_7_0 + WQtempx * x_19_7_1 + CDtemp * 2 * (x_19_1_0 -  ABcom * x_19_1_1));
                            LOC2(store, 19, 18, STOREDIM, STOREDIM) = (Qtempy * x_19_8_0 + WQtempy * x_19_8_1 + CDtemp * 2 * (x_19_2_0 -  ABcom * x_19_2_1));
                            LOC2(store, 19, 19, STOREDIM, STOREDIM) = (Qtempz * x_19_9_0 + WQtempz * x_19_9_1 + CDtemp * 2 * (x_19_3_0 -  ABcom * x_19_3_1) + 3 * ABCDtemp * x_9_9_1);
                            if ((I+J) >=  3 && (K+L)>= 4) {
                                // Subroutine for L =            0  B =            1 , m=           0
                                QUICKDouble x_0_1_0 = Qtempx * VY( 0, 0, 0) + WQtempx * VY( 0, 0, 1);
                                QUICKDouble x_0_2_0 = Qtempy * VY( 0, 0, 0) + WQtempy * VY( 0, 0, 1);
                                QUICKDouble x_0_3_0 = Qtempz * VY( 0, 0, 0) + WQtempz * VY( 0, 0, 1);
                                
                                // Subroutine for L =            0  B =            1 , m=           5
                                QUICKDouble x_0_1_5 = Qtempx * VY( 0, 0, 5) + WQtempx * VY( 0, 0, 6);
                                QUICKDouble x_0_2_5 = Qtempy * VY( 0, 0, 5) + WQtempy * VY( 0, 0, 6);
                                QUICKDouble x_0_3_5 = Qtempz * VY( 0, 0, 5) + WQtempz * VY( 0, 0, 6);
                                
                                // Subroutine for L =            0  B =            1 , m=           6
                                QUICKDouble x_0_2_6 = Qtempy * VY( 0, 0, 6) + WQtempy * VY( 0, 0, 7);
                                QUICKDouble x_0_3_6 = Qtempz * VY( 0, 0, 6) + WQtempz * VY( 0, 0, 7);
                                
                                // Subroutine for L =            0  B =            2 , m=           0
                                QUICKDouble x_0_4_0 = Qtempx * x_0_2_0 + WQtempx * x_0_2_1;
                                QUICKDouble x_0_5_0 = Qtempy * x_0_3_0 + WQtempy * x_0_3_1;
                                QUICKDouble x_0_6_0 = Qtempx * x_0_3_0 + WQtempx * x_0_3_1;
                                QUICKDouble x_0_7_0 = Qtempx * x_0_1_0 + WQtempx * x_0_1_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                                QUICKDouble x_0_8_0 = Qtempy * x_0_2_0 + WQtempy * x_0_2_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                                QUICKDouble x_0_9_0 = Qtempz * x_0_3_0 + WQtempz * x_0_3_1 + CDtemp * (VY( 0, 0, 0) -  ABcom * VY( 0, 0, 1));
                                
                                // Subroutine for L =            0  B =            2 , m=           4
                                QUICKDouble x_0_4_4 = Qtempx * x_0_2_4 + WQtempx * x_0_2_5;
                                QUICKDouble x_0_5_4 = Qtempy * x_0_3_4 + WQtempy * x_0_3_5;
                                QUICKDouble x_0_6_4 = Qtempx * x_0_3_4 + WQtempx * x_0_3_5;
                                QUICKDouble x_0_7_4 = Qtempx * x_0_1_4 + WQtempx * x_0_1_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                                QUICKDouble x_0_8_4 = Qtempy * x_0_2_4 + WQtempy * x_0_2_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                                QUICKDouble x_0_9_4 = Qtempz * x_0_3_4 + WQtempz * x_0_3_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                                
                                // Subroutine for L =            0  B =            2 , m=           5
                                QUICKDouble x_0_5_5 = Qtempy * x_0_3_5 + WQtempy * x_0_3_6;
                                QUICKDouble x_0_8_5 = Qtempy * x_0_2_5 + WQtempy * x_0_2_6 + CDtemp * (VY( 0, 0, 5) -  ABcom * VY( 0, 0, 6));
                                QUICKDouble x_0_9_5 = Qtempz * x_0_3_5 + WQtempz * x_0_3_6 + CDtemp * (VY( 0, 0, 5) -  ABcom * VY( 0, 0, 6));
                                
                                // Subroutine for L =            0  B =            3 , m=           0
                                QUICKDouble x_0_10_0 = Qtempx * x_0_5_0 + WQtempx * x_0_5_1;
                                QUICKDouble x_0_11_0 = Qtempx * x_0_4_0 + WQtempx * x_0_4_1 + CDtemp * (x_0_2_0 -  ABcom * x_0_2_1);
                                QUICKDouble x_0_12_0 = Qtempx * x_0_8_0 + WQtempx * x_0_8_1;
                                QUICKDouble x_0_13_0 = Qtempx * x_0_6_0 + WQtempx * x_0_6_1 + CDtemp * (x_0_3_0 -  ABcom * x_0_3_1);
                                QUICKDouble x_0_14_0 = Qtempx * x_0_9_0 + WQtempx * x_0_9_1;
                                QUICKDouble x_0_15_0 = Qtempy * x_0_5_0 + WQtempy * x_0_5_1 + CDtemp * (x_0_3_0 -  ABcom * x_0_3_1);
                                QUICKDouble x_0_16_0 = Qtempy * x_0_9_0 + WQtempy * x_0_9_1;
                                QUICKDouble x_0_17_0 = Qtempx * x_0_7_0 + WQtempx * x_0_7_1 + CDtemp * 2 * (x_0_1_0 -  ABcom * x_0_1_1);
                                QUICKDouble x_0_18_0 = Qtempy * x_0_8_0 + WQtempy * x_0_8_1 + CDtemp * 2 * (x_0_2_0 -  ABcom * x_0_2_1);
                                QUICKDouble x_0_19_0 = Qtempz * x_0_9_0 + WQtempz * x_0_9_1 + CDtemp * 2 * (x_0_3_0 -  ABcom * x_0_3_1);
                                
                                // Subroutine for L =            0  B =            3 , m=           1
                                QUICKDouble x_0_10_1 = Qtempx * x_0_5_1 + WQtempx * x_0_5_2;
                                QUICKDouble x_0_11_1 = Qtempx * x_0_4_1 + WQtempx * x_0_4_2 + CDtemp * (x_0_2_1 -  ABcom * x_0_2_2);
                                QUICKDouble x_0_12_1 = Qtempx * x_0_8_1 + WQtempx * x_0_8_2;
                                QUICKDouble x_0_13_1 = Qtempx * x_0_6_1 + WQtempx * x_0_6_2 + CDtemp * (x_0_3_1 -  ABcom * x_0_3_2);
                                QUICKDouble x_0_14_1 = Qtempx * x_0_9_1 + WQtempx * x_0_9_2;
                                QUICKDouble x_0_15_1 = Qtempy * x_0_5_1 + WQtempy * x_0_5_2 + CDtemp * (x_0_3_1 -  ABcom * x_0_3_2);
                                QUICKDouble x_0_16_1 = Qtempy * x_0_9_1 + WQtempy * x_0_9_2;
                                QUICKDouble x_0_17_1 = Qtempx * x_0_7_1 + WQtempx * x_0_7_2 + CDtemp * 2 * (x_0_1_1 -  ABcom * x_0_1_2);
                                QUICKDouble x_0_18_1 = Qtempy * x_0_8_1 + WQtempy * x_0_8_2 + CDtemp * 2 * (x_0_2_1 -  ABcom * x_0_2_2);
                                QUICKDouble x_0_19_1 = Qtempz * x_0_9_1 + WQtempz * x_0_9_2 + CDtemp * 2 * (x_0_3_1 -  ABcom * x_0_3_2);
                                
                                // Subroutine for L =            0  B =            3 , m=           2
                                QUICKDouble x_0_10_2 = Qtempx * x_0_5_2 + WQtempx * x_0_5_3;
                                QUICKDouble x_0_11_2 = Qtempx * x_0_4_2 + WQtempx * x_0_4_3 + CDtemp * (x_0_2_2 -  ABcom * x_0_2_3);
                                QUICKDouble x_0_12_2 = Qtempx * x_0_8_2 + WQtempx * x_0_8_3;
                                QUICKDouble x_0_13_2 = Qtempx * x_0_6_2 + WQtempx * x_0_6_3 + CDtemp * (x_0_3_2 -  ABcom * x_0_3_3);
                                QUICKDouble x_0_14_2 = Qtempx * x_0_9_2 + WQtempx * x_0_9_3;
                                QUICKDouble x_0_15_2 = Qtempy * x_0_5_2 + WQtempy * x_0_5_3 + CDtemp * (x_0_3_2 -  ABcom * x_0_3_3);
                                QUICKDouble x_0_16_2 = Qtempy * x_0_9_2 + WQtempy * x_0_9_3;
                                QUICKDouble x_0_17_2 = Qtempx * x_0_7_2 + WQtempx * x_0_7_3 + CDtemp * 2 * (x_0_1_2 -  ABcom * x_0_1_3);
                                QUICKDouble x_0_18_2 = Qtempy * x_0_8_2 + WQtempy * x_0_8_3 + CDtemp * 2 * (x_0_2_2 -  ABcom * x_0_2_3);
                                QUICKDouble x_0_19_2 = Qtempz * x_0_9_2 + WQtempz * x_0_9_3 + CDtemp * 2 * (x_0_3_2 -  ABcom * x_0_3_3);
                                
                                // Subroutine for L =            0  B =            3 , m=           3
                                QUICKDouble x_0_10_3 = Qtempx * x_0_5_3 + WQtempx * x_0_5_4;
                                QUICKDouble x_0_11_3 = Qtempx * x_0_4_3 + WQtempx * x_0_4_4 + CDtemp * (x_0_2_3 -  ABcom * x_0_2_4);
                                QUICKDouble x_0_12_3 = Qtempx * x_0_8_3 + WQtempx * x_0_8_4;
                                QUICKDouble x_0_13_3 = Qtempx * x_0_6_3 + WQtempx * x_0_6_4 + CDtemp * (x_0_3_3 -  ABcom * x_0_3_4);
                                QUICKDouble x_0_14_3 = Qtempx * x_0_9_3 + WQtempx * x_0_9_4;
                                QUICKDouble x_0_15_3 = Qtempy * x_0_5_3 + WQtempy * x_0_5_4 + CDtemp * (x_0_3_3 -  ABcom * x_0_3_4);
                                QUICKDouble x_0_16_3 = Qtempy * x_0_9_3 + WQtempy * x_0_9_4;
                                QUICKDouble x_0_17_3 = Qtempx * x_0_7_3 + WQtempx * x_0_7_4 + CDtemp * 2 * (x_0_1_3 -  ABcom * x_0_1_4);
                                QUICKDouble x_0_18_3 = Qtempy * x_0_8_3 + WQtempy * x_0_8_4 + CDtemp * 2 * (x_0_2_3 -  ABcom * x_0_2_4);
                                QUICKDouble x_0_19_3 = Qtempz * x_0_9_3 + WQtempz * x_0_9_4 + CDtemp * 2 * (x_0_3_3 -  ABcom * x_0_3_4);
                                
                                // Subroutine for L =            0  B =            3 , m=           4
                                QUICKDouble x_0_15_4 = Qtempy * x_0_5_4 + WQtempy * x_0_5_5 + CDtemp * (x_0_3_4 -  ABcom * x_0_3_5);
                                QUICKDouble x_0_16_4 = Qtempy * x_0_9_4 + WQtempy * x_0_9_5;
                                QUICKDouble x_0_18_4 = Qtempy * x_0_8_4 + WQtempy * x_0_8_5 + CDtemp * 2 * (x_0_2_4 -  ABcom * x_0_2_5);
                                QUICKDouble x_0_19_4 = Qtempz * x_0_9_4 + WQtempz * x_0_9_5 + CDtemp * 2 * (x_0_3_4 -  ABcom * x_0_3_5);
                                
                                // Subroutine for L =            0  B =            4 , m=           0
                                QUICKDouble x_0_20_0 = Qtempx * x_0_12_0 + WQtempx * x_0_12_1 + CDtemp * (x_0_8_0 -  ABcom * x_0_8_1);
                                QUICKDouble x_0_21_0 = Qtempx * x_0_14_0 + WQtempx * x_0_14_1 + CDtemp * (x_0_9_0 -  ABcom * x_0_9_1);
                                QUICKDouble x_0_22_0 = Qtempy * x_0_16_0 + WQtempy * x_0_16_1 + CDtemp * (x_0_9_0 -  ABcom * x_0_9_1);
                                QUICKDouble x_0_23_0 = Qtempx * x_0_10_0 + WQtempx * x_0_10_1 + CDtemp * (x_0_5_0 -  ABcom * x_0_5_1);
                                QUICKDouble x_0_24_0 = Qtempx * x_0_15_0 + WQtempx * x_0_15_1;
                                QUICKDouble x_0_25_0 = Qtempx * x_0_16_0 + WQtempx * x_0_16_1;
                                QUICKDouble x_0_26_0 = Qtempx * x_0_13_0 + WQtempx * x_0_13_1 + CDtemp * 2 * (x_0_6_0 -  ABcom * x_0_6_1);
                                QUICKDouble x_0_27_0 = Qtempx * x_0_19_0 + WQtempx * x_0_19_1;
                                QUICKDouble x_0_28_0 = Qtempx * x_0_11_0 + WQtempx * x_0_11_1 + CDtemp * 2 * (x_0_4_0 -  ABcom * x_0_4_1);
                                QUICKDouble x_0_29_0 = Qtempx * x_0_18_0 + WQtempx * x_0_18_1;
                                QUICKDouble x_0_30_0 = Qtempy * x_0_15_0 + WQtempy * x_0_15_1 + CDtemp * 2 * (x_0_5_0 -  ABcom * x_0_5_1);
                                QUICKDouble x_0_31_0 = Qtempy * x_0_19_0 + WQtempy * x_0_19_1;
                                QUICKDouble x_0_32_0 = Qtempx * x_0_17_0 + WQtempx * x_0_17_1 + CDtemp * 3 * (x_0_7_0 -  ABcom * x_0_7_1);
                                QUICKDouble x_0_33_0 = Qtempy * x_0_18_0 + WQtempy * x_0_18_1 + CDtemp * 3 * (x_0_8_0 -  ABcom * x_0_8_1);
                                QUICKDouble x_0_34_0 = Qtempz * x_0_19_0 + WQtempz * x_0_19_1 + CDtemp * 3 * (x_0_9_0 -  ABcom * x_0_9_1);
                                
                                // Subroutine for L =            0  B =            4 , m=           1
                                QUICKDouble x_0_20_1 = Qtempx * x_0_12_1 + WQtempx * x_0_12_2 + CDtemp * (x_0_8_1 -  ABcom * x_0_8_2);
                                QUICKDouble x_0_21_1 = Qtempx * x_0_14_1 + WQtempx * x_0_14_2 + CDtemp * (x_0_9_1 -  ABcom * x_0_9_2);
                                QUICKDouble x_0_22_1 = Qtempy * x_0_16_1 + WQtempy * x_0_16_2 + CDtemp * (x_0_9_1 -  ABcom * x_0_9_2);
                                QUICKDouble x_0_23_1 = Qtempx * x_0_10_1 + WQtempx * x_0_10_2 + CDtemp * (x_0_5_1 -  ABcom * x_0_5_2);
                                QUICKDouble x_0_24_1 = Qtempx * x_0_15_1 + WQtempx * x_0_15_2;
                                QUICKDouble x_0_25_1 = Qtempx * x_0_16_1 + WQtempx * x_0_16_2;
                                QUICKDouble x_0_26_1 = Qtempx * x_0_13_1 + WQtempx * x_0_13_2 + CDtemp * 2 * (x_0_6_1 -  ABcom * x_0_6_2);
                                QUICKDouble x_0_27_1 = Qtempx * x_0_19_1 + WQtempx * x_0_19_2;
                                QUICKDouble x_0_28_1 = Qtempx * x_0_11_1 + WQtempx * x_0_11_2 + CDtemp * 2 * (x_0_4_1 -  ABcom * x_0_4_2);
                                QUICKDouble x_0_29_1 = Qtempx * x_0_18_1 + WQtempx * x_0_18_2;
                                QUICKDouble x_0_30_1 = Qtempy * x_0_15_1 + WQtempy * x_0_15_2 + CDtemp * 2 * (x_0_5_1 -  ABcom * x_0_5_2);
                                QUICKDouble x_0_31_1 = Qtempy * x_0_19_1 + WQtempy * x_0_19_2;
                                QUICKDouble x_0_32_1 = Qtempx * x_0_17_1 + WQtempx * x_0_17_2 + CDtemp * 3 * (x_0_7_1 -  ABcom * x_0_7_2);
                                QUICKDouble x_0_33_1 = Qtempy * x_0_18_1 + WQtempy * x_0_18_2 + CDtemp * 3 * (x_0_8_1 -  ABcom * x_0_8_2);
                                QUICKDouble x_0_34_1 = Qtempz * x_0_19_1 + WQtempz * x_0_19_2 + CDtemp * 3 * (x_0_9_1 -  ABcom * x_0_9_2);
                                
                                // Subroutine for L =            0  B =            4 , m=           2
                                QUICKDouble x_0_20_2 = Qtempx * x_0_12_2 + WQtempx * x_0_12_3 + CDtemp * (x_0_8_2 -  ABcom * x_0_8_3);
                                QUICKDouble x_0_21_2 = Qtempx * x_0_14_2 + WQtempx * x_0_14_3 + CDtemp * (x_0_9_2 -  ABcom * x_0_9_3);
                                QUICKDouble x_0_22_2 = Qtempy * x_0_16_2 + WQtempy * x_0_16_3 + CDtemp * (x_0_9_2 -  ABcom * x_0_9_3);
                                QUICKDouble x_0_23_2 = Qtempx * x_0_10_2 + WQtempx * x_0_10_3 + CDtemp * (x_0_5_2 -  ABcom * x_0_5_3);
                                QUICKDouble x_0_24_2 = Qtempx * x_0_15_2 + WQtempx * x_0_15_3;
                                QUICKDouble x_0_25_2 = Qtempx * x_0_16_2 + WQtempx * x_0_16_3;
                                QUICKDouble x_0_26_2 = Qtempx * x_0_13_2 + WQtempx * x_0_13_3 + CDtemp * 2 * (x_0_6_2 -  ABcom * x_0_6_3);
                                QUICKDouble x_0_27_2 = Qtempx * x_0_19_2 + WQtempx * x_0_19_3;
                                QUICKDouble x_0_28_2 = Qtempx * x_0_11_2 + WQtempx * x_0_11_3 + CDtemp * 2 * (x_0_4_2 -  ABcom * x_0_4_3);
                                QUICKDouble x_0_29_2 = Qtempx * x_0_18_2 + WQtempx * x_0_18_3;
                                QUICKDouble x_0_30_2 = Qtempy * x_0_15_2 + WQtempy * x_0_15_3 + CDtemp * 2 * (x_0_5_2 -  ABcom * x_0_5_3);
                                QUICKDouble x_0_31_2 = Qtempy * x_0_19_2 + WQtempy * x_0_19_3;
                                QUICKDouble x_0_32_2 = Qtempx * x_0_17_2 + WQtempx * x_0_17_3 + CDtemp * 3 * (x_0_7_2 -  ABcom * x_0_7_3);
                                QUICKDouble x_0_33_2 = Qtempy * x_0_18_2 + WQtempy * x_0_18_3 + CDtemp * 3 * (x_0_8_2 -  ABcom * x_0_8_3);
                                QUICKDouble x_0_34_2 = Qtempz * x_0_19_2 + WQtempz * x_0_19_3 + CDtemp * 3 * (x_0_9_2 -  ABcom * x_0_9_3);
                                
                                // Subroutine for L =            0  B =            4 , m=           3
                                QUICKDouble x_0_20_3 = Qtempx * x_0_12_3 + WQtempx * (    Qtempx * x_0_8_4 + WQtempx * x_0_8_5) + CDtemp * (x_0_8_3 -  ABcom * x_0_8_4);
                                QUICKDouble x_0_21_3 = Qtempx * x_0_14_3 + WQtempx * (    Qtempx * x_0_9_4 + WQtempx * x_0_9_5) + CDtemp * (x_0_9_3 -  ABcom * x_0_9_4);
                                QUICKDouble x_0_22_3 = Qtempy * x_0_16_3 + WQtempy * x_0_16_4 + CDtemp * (x_0_9_3 -  ABcom * x_0_9_4);
                                QUICKDouble x_0_23_3 = Qtempx * x_0_10_3 + WQtempx * (    Qtempx * x_0_5_4 + WQtempx * x_0_5_5) + CDtemp * (x_0_5_3 -  ABcom * x_0_5_4);
                                QUICKDouble x_0_24_3 = Qtempx * x_0_15_3 + WQtempx * x_0_15_4;
                                QUICKDouble x_0_25_3 = Qtempx * x_0_16_3 + WQtempx * x_0_16_4;
                                QUICKDouble x_0_26_3 = Qtempx * x_0_13_3 + WQtempx * (    Qtempx * x_0_6_4 + WQtempx * (    Qtempx * x_0_3_5 + WQtempx * x_0_3_6) + CDtemp * (x_0_3_4 -  ABcom * x_0_3_5)) + CDtemp * 2 * (x_0_6_3 -  ABcom * x_0_6_4);
                                QUICKDouble x_0_27_3 = Qtempx * x_0_19_3 + WQtempx * x_0_19_4;
                                QUICKDouble x_0_28_3 = Qtempx * x_0_11_3 + WQtempx * (    Qtempx * x_0_4_4 + WQtempx * (    Qtempx * x_0_2_5 + WQtempx * x_0_2_6) + CDtemp * (x_0_2_4 -  ABcom * x_0_2_5)) + CDtemp * 2 * (x_0_4_3 -  ABcom * x_0_4_4);
                                QUICKDouble x_0_29_3 = Qtempx * x_0_18_3 + WQtempx * x_0_18_4;
                                QUICKDouble x_0_30_3 = Qtempy * x_0_15_3 + WQtempy * x_0_15_4 + CDtemp * 2 * (x_0_5_3 -  ABcom * x_0_5_4);
                                QUICKDouble x_0_31_3 = Qtempy * x_0_19_3 + WQtempy * x_0_19_4;
                                QUICKDouble x_0_32_3 = Qtempx * x_0_17_3 + WQtempx * (    Qtempx * x_0_7_4 + WQtempx * (    Qtempx * x_0_1_5 + WQtempx * (    Qtempx * VY( 0, 0, 6) + WQtempx * VY( 0, 0, 7)) + CDtemp * (VY( 0, 0, 5) -  ABcom * VY( 0, 0, 6))) + CDtemp * 2 * (x_0_1_4 -  ABcom * x_0_1_5)) + CDtemp * 3 * (x_0_7_3 -  ABcom * x_0_7_4);
                                QUICKDouble x_0_33_3 = Qtempy * x_0_18_3 + WQtempy * x_0_18_4 + CDtemp * 3 * (x_0_8_3 -  ABcom * x_0_8_4);
                                QUICKDouble x_0_34_3 = Qtempz * x_0_19_3 + WQtempz * x_0_19_4 + CDtemp * 3 * (x_0_9_3 -  ABcom * x_0_9_4);
                                
                                // Subroutine for L =            1  B =            3 , m=           1
                                QUICKDouble x_1_10_1 = Ptempx * x_0_10_1 + WPtempx * x_0_10_2 + ABCDtemp * x_0_5_2;
                                QUICKDouble x_1_11_1 = Ptempx * x_0_11_1 + WPtempx * x_0_11_2 + 2 * ABCDtemp * x_0_4_2;
                                QUICKDouble x_1_12_1 = Ptempx * x_0_12_1 + WPtempx * x_0_12_2 + ABCDtemp * x_0_8_2;
                                QUICKDouble x_1_13_1 = Ptempx * x_0_13_1 + WPtempx * x_0_13_2 + 2 * ABCDtemp * x_0_6_2;
                                QUICKDouble x_1_14_1 = Ptempx * x_0_14_1 + WPtempx * x_0_14_2 + ABCDtemp * x_0_9_2;
                                QUICKDouble x_1_15_1 = Ptempx * x_0_15_1 + WPtempx * x_0_15_2;
                                QUICKDouble x_1_16_1 = Ptempx * x_0_16_1 + WPtempx * x_0_16_2;
                                QUICKDouble x_1_17_1 = Ptempx * x_0_17_1 + WPtempx * x_0_17_2 + 3 * ABCDtemp * x_0_7_2;
                                QUICKDouble x_1_18_1 = Ptempx * x_0_18_1 + WPtempx * x_0_18_2;
                                QUICKDouble x_1_19_1 = Ptempx * x_0_19_1 + WPtempx * x_0_19_2;
                                QUICKDouble x_2_10_1 = Ptempy * x_0_10_1 + WPtempy * x_0_10_2 + ABCDtemp * x_0_6_2;
                                QUICKDouble x_2_11_1 = Ptempy * x_0_11_1 + WPtempy * x_0_11_2 + ABCDtemp * x_0_7_2;
                                QUICKDouble x_2_12_1 = Ptempy * x_0_12_1 + WPtempy * x_0_12_2 + 2 * ABCDtemp * x_0_4_2;
                                QUICKDouble x_2_13_1 = Ptempy * x_0_13_1 + WPtempy * x_0_13_2;
                                QUICKDouble x_2_14_1 = Ptempy * x_0_14_1 + WPtempy * x_0_14_2;
                                QUICKDouble x_2_15_1 = Ptempy * x_0_15_1 + WPtempy * x_0_15_2 + 2 * ABCDtemp * x_0_5_2;
                                QUICKDouble x_2_16_1 = Ptempy * x_0_16_1 + WPtempy * x_0_16_2 + ABCDtemp * x_0_9_2;
                                QUICKDouble x_2_17_1 = Ptempy * x_0_17_1 + WPtempy * x_0_17_2;
                                QUICKDouble x_2_18_1 = Ptempy * x_0_18_1 + WPtempy * x_0_18_2 + 3 * ABCDtemp * x_0_8_2;
                                QUICKDouble x_2_19_1 = Ptempy * x_0_19_1 + WPtempy * x_0_19_2;
                                QUICKDouble x_3_10_1 = Ptempz * x_0_10_1 + WPtempz * x_0_10_2 + ABCDtemp * x_0_4_2;
                                QUICKDouble x_3_11_1 = Ptempz * x_0_11_1 + WPtempz * x_0_11_2;
                                QUICKDouble x_3_12_1 = Ptempz * x_0_12_1 + WPtempz * x_0_12_2;
                                QUICKDouble x_3_13_1 = Ptempz * x_0_13_1 + WPtempz * x_0_13_2 + ABCDtemp * x_0_7_2;
                                QUICKDouble x_3_14_1 = Ptempz * x_0_14_1 + WPtempz * x_0_14_2 + 2 * ABCDtemp * x_0_6_2;
                                QUICKDouble x_3_15_1 = Ptempz * x_0_15_1 + WPtempz * x_0_15_2 + ABCDtemp * x_0_8_2;
                                QUICKDouble x_3_16_1 = Ptempz * x_0_16_1 + WPtempz * x_0_16_2 + 2 * ABCDtemp * x_0_5_2;
                                QUICKDouble x_3_17_1 = Ptempz * x_0_17_1 + WPtempz * x_0_17_2;
                                QUICKDouble x_3_18_1 = Ptempz * x_0_18_1 + WPtempz * x_0_18_2;
                                QUICKDouble x_3_19_1 = Ptempz * x_0_19_1 + WPtempz * x_0_19_2 + 3 * ABCDtemp * x_0_9_2;
                                
                                // Subroutine for L =            1  B =            3 , m=           2
                                QUICKDouble x_1_10_2 = Ptempx * x_0_10_2 + WPtempx * x_0_10_3 + ABCDtemp * x_0_5_3;
                                QUICKDouble x_1_11_2 = Ptempx * x_0_11_2 + WPtempx * x_0_11_3 + 2 * ABCDtemp * x_0_4_3;
                                QUICKDouble x_1_12_2 = Ptempx * x_0_12_2 + WPtempx * x_0_12_3 + ABCDtemp * x_0_8_3;
                                QUICKDouble x_1_13_2 = Ptempx * x_0_13_2 + WPtempx * x_0_13_3 + 2 * ABCDtemp * x_0_6_3;
                                QUICKDouble x_1_14_2 = Ptempx * x_0_14_2 + WPtempx * x_0_14_3 + ABCDtemp * x_0_9_3;
                                QUICKDouble x_1_15_2 = Ptempx * x_0_15_2 + WPtempx * x_0_15_3;
                                QUICKDouble x_1_16_2 = Ptempx * x_0_16_2 + WPtempx * x_0_16_3;
                                QUICKDouble x_1_17_2 = Ptempx * x_0_17_2 + WPtempx * x_0_17_3 + 3 * ABCDtemp * x_0_7_3;
                                QUICKDouble x_1_18_2 = Ptempx * x_0_18_2 + WPtempx * x_0_18_3;
                                QUICKDouble x_1_19_2 = Ptempx * x_0_19_2 + WPtempx * x_0_19_3;
                                QUICKDouble x_2_10_2 = Ptempy * x_0_10_2 + WPtempy * x_0_10_3 + ABCDtemp * x_0_6_3;
                                QUICKDouble x_2_11_2 = Ptempy * x_0_11_2 + WPtempy * x_0_11_3 + ABCDtemp * x_0_7_3;
                                QUICKDouble x_2_12_2 = Ptempy * x_0_12_2 + WPtempy * x_0_12_3 + 2 * ABCDtemp * x_0_4_3;
                                QUICKDouble x_2_13_2 = Ptempy * x_0_13_2 + WPtempy * x_0_13_3;
                                QUICKDouble x_2_14_2 = Ptempy * x_0_14_2 + WPtempy * x_0_14_3;
                                QUICKDouble x_2_15_2 = Ptempy * x_0_15_2 + WPtempy * x_0_15_3 + 2 * ABCDtemp * x_0_5_3;
                                QUICKDouble x_2_16_2 = Ptempy * x_0_16_2 + WPtempy * x_0_16_3 + ABCDtemp * x_0_9_3;
                                QUICKDouble x_2_17_2 = Ptempy * x_0_17_2 + WPtempy * x_0_17_3;
                                QUICKDouble x_2_18_2 = Ptempy * x_0_18_2 + WPtempy * x_0_18_3 + 3 * ABCDtemp * x_0_8_3;
                                QUICKDouble x_2_19_2 = Ptempy * x_0_19_2 + WPtempy * x_0_19_3;
                                QUICKDouble x_3_10_2 = Ptempz * x_0_10_2 + WPtempz * x_0_10_3 + ABCDtemp * x_0_4_3;
                                QUICKDouble x_3_11_2 = Ptempz * x_0_11_2 + WPtempz * x_0_11_3;
                                QUICKDouble x_3_12_2 = Ptempz * x_0_12_2 + WPtempz * x_0_12_3;
                                QUICKDouble x_3_13_2 = Ptempz * x_0_13_2 + WPtempz * x_0_13_3 + ABCDtemp * x_0_7_3;
                                QUICKDouble x_3_14_2 = Ptempz * x_0_14_2 + WPtempz * x_0_14_3 + 2 * ABCDtemp * x_0_6_3;
                                QUICKDouble x_3_15_2 = Ptempz * x_0_15_2 + WPtempz * x_0_15_3 + ABCDtemp * x_0_8_3;
                                QUICKDouble x_3_16_2 = Ptempz * x_0_16_2 + WPtempz * x_0_16_3 + 2 * ABCDtemp * x_0_5_3;
                                QUICKDouble x_3_17_2 = Ptempz * x_0_17_2 + WPtempz * x_0_17_3;
                                QUICKDouble x_3_18_2 = Ptempz * x_0_18_2 + WPtempz * x_0_18_3;
                                QUICKDouble x_3_19_2 = Ptempz * x_0_19_2 + WPtempz * x_0_19_3 + 3 * ABCDtemp * x_0_9_3;
                                
                                // Subroutine for L =            1  B =            4 , m=           0
                                QUICKDouble x_1_20_0 = Ptempx * x_0_20_0 + WPtempx * x_0_20_1 + 2 * ABCDtemp * x_0_12_1;
                                QUICKDouble x_1_21_0 = Ptempx * x_0_21_0 + WPtempx * x_0_21_1 + 2 * ABCDtemp * x_0_14_1;
                                QUICKDouble x_1_22_0 = Ptempx * x_0_22_0 + WPtempx * x_0_22_1;
                                QUICKDouble x_1_23_0 = Ptempx * x_0_23_0 + WPtempx * x_0_23_1 + 2 * ABCDtemp * x_0_10_1;
                                QUICKDouble x_1_24_0 = Ptempx * x_0_24_0 + WPtempx * x_0_24_1 + ABCDtemp * x_0_15_1;
                                QUICKDouble x_1_25_0 = Ptempx * x_0_25_0 + WPtempx * x_0_25_1 + ABCDtemp * x_0_16_1;
                                QUICKDouble x_1_26_0 = Ptempx * x_0_26_0 + WPtempx * x_0_26_1 + 3 * ABCDtemp * x_0_13_1;
                                QUICKDouble x_1_27_0 = Ptempx * x_0_27_0 + WPtempx * x_0_27_1 + ABCDtemp * x_0_19_1;
                                QUICKDouble x_1_28_0 = Ptempx * x_0_28_0 + WPtempx * x_0_28_1 + 3 * ABCDtemp * x_0_11_1;
                                QUICKDouble x_1_29_0 = Ptempx * x_0_29_0 + WPtempx * x_0_29_1 + ABCDtemp * x_0_18_1;
                                QUICKDouble x_1_30_0 = Ptempx * x_0_30_0 + WPtempx * x_0_30_1;
                                QUICKDouble x_1_31_0 = Ptempx * x_0_31_0 + WPtempx * x_0_31_1;
                                QUICKDouble x_1_32_0 = Ptempx * x_0_32_0 + WPtempx * x_0_32_1 + 4 * ABCDtemp * x_0_17_1;
                                QUICKDouble x_1_33_0 = Ptempx * x_0_33_0 + WPtempx * x_0_33_1;
                                QUICKDouble x_1_34_0 = Ptempx * x_0_34_0 + WPtempx * x_0_34_1;
                                QUICKDouble x_2_20_0 = Ptempy * x_0_20_0 + WPtempy * x_0_20_1 + 2 * ABCDtemp * x_0_11_1;
                                QUICKDouble x_2_21_0 = Ptempy * x_0_21_0 + WPtempy * x_0_21_1;
                                QUICKDouble x_2_22_0 = Ptempy * x_0_22_0 + WPtempy * x_0_22_1 + 2 * ABCDtemp * x_0_16_1;
                                QUICKDouble x_2_23_0 = Ptempy * x_0_23_0 + WPtempy * x_0_23_1 + ABCDtemp * x_0_13_1;
                                QUICKDouble x_2_24_0 = Ptempy * x_0_24_0 + WPtempy * x_0_24_1 + 2 * ABCDtemp * x_0_10_1;
                                QUICKDouble x_2_25_0 = Ptempy * x_0_25_0 + WPtempy * x_0_25_1 + ABCDtemp * x_0_14_1;
                                QUICKDouble x_2_26_0 = Ptempy * x_0_26_0 + WPtempy * x_0_26_1;
                                QUICKDouble x_2_27_0 = Ptempy * x_0_27_0 + WPtempy * x_0_27_1;
                                QUICKDouble x_2_28_0 = Ptempy * x_0_28_0 + WPtempy * x_0_28_1 + ABCDtemp * x_0_17_1;
                                QUICKDouble x_2_29_0 = Ptempy * x_0_29_0 + WPtempy * x_0_29_1 + 3 * ABCDtemp * x_0_12_1;
                                QUICKDouble x_2_30_0 = Ptempy * x_0_30_0 + WPtempy * x_0_30_1 + 3 * ABCDtemp * x_0_15_1;
                                QUICKDouble x_2_31_0 = Ptempy * x_0_31_0 + WPtempy * x_0_31_1 + ABCDtemp * x_0_19_1;
                                QUICKDouble x_2_32_0 = Ptempy * x_0_32_0 + WPtempy * x_0_32_1;
                                QUICKDouble x_2_33_0 = Ptempy * x_0_33_0 + WPtempy * x_0_33_1 + 4 * ABCDtemp * x_0_18_1;
                                QUICKDouble x_2_34_0 = Ptempy * x_0_34_0 + WPtempy * x_0_34_1;
                                QUICKDouble x_3_20_0 = Ptempz * x_0_20_0 + WPtempz * x_0_20_1;
                                QUICKDouble x_3_21_0 = Ptempz * x_0_21_0 + WPtempz * x_0_21_1 + 2 * ABCDtemp * x_0_13_1;
                                QUICKDouble x_3_22_0 = Ptempz * x_0_22_0 + WPtempz * x_0_22_1 + 2 * ABCDtemp * x_0_15_1;
                                QUICKDouble x_3_23_0 = Ptempz * x_0_23_0 + WPtempz * x_0_23_1 + ABCDtemp * x_0_11_1;
                                QUICKDouble x_3_24_0 = Ptempz * x_0_24_0 + WPtempz * x_0_24_1 + ABCDtemp * x_0_12_1;
                                QUICKDouble x_3_25_0 = Ptempz * x_0_25_0 + WPtempz * x_0_25_1 + 2 * ABCDtemp * x_0_10_1;
                                QUICKDouble x_3_26_0 = Ptempz * x_0_26_0 + WPtempz * x_0_26_1 + ABCDtemp * x_0_17_1;
                                QUICKDouble x_3_27_0 = Ptempz * x_0_27_0 + WPtempz * x_0_27_1 + 3 * ABCDtemp * x_0_14_1;
                                QUICKDouble x_3_28_0 = Ptempz * x_0_28_0 + WPtempz * x_0_28_1;
                                QUICKDouble x_3_29_0 = Ptempz * x_0_29_0 + WPtempz * x_0_29_1;
                                QUICKDouble x_3_30_0 = Ptempz * x_0_30_0 + WPtempz * x_0_30_1 + ABCDtemp * x_0_18_1;
                                QUICKDouble x_3_31_0 = Ptempz * x_0_31_0 + WPtempz * x_0_31_1 + 3 * ABCDtemp * x_0_16_1;
                                QUICKDouble x_3_32_0 = Ptempz * x_0_32_0 + WPtempz * x_0_32_1;
                                QUICKDouble x_3_33_0 = Ptempz * x_0_33_0 + WPtempz * x_0_33_1;
                                QUICKDouble x_3_34_0 = Ptempz * x_0_34_0 + WPtempz * x_0_34_1 + 4 * ABCDtemp * x_0_19_1;
                                
                                // Subroutine for L =            1  B =            4 , m=           1
                                QUICKDouble x_1_20_1 = Ptempx * x_0_20_1 + WPtempx * x_0_20_2 + 2 * ABCDtemp * x_0_12_2;
                                QUICKDouble x_1_21_1 = Ptempx * x_0_21_1 + WPtempx * x_0_21_2 + 2 * ABCDtemp * x_0_14_2;
                                QUICKDouble x_1_22_1 = Ptempx * x_0_22_1 + WPtempx * x_0_22_2;
                                QUICKDouble x_1_23_1 = Ptempx * x_0_23_1 + WPtempx * x_0_23_2 + 2 * ABCDtemp * x_0_10_2;
                                QUICKDouble x_1_24_1 = Ptempx * x_0_24_1 + WPtempx * x_0_24_2 + ABCDtemp * x_0_15_2;
                                QUICKDouble x_1_25_1 = Ptempx * x_0_25_1 + WPtempx * x_0_25_2 + ABCDtemp * x_0_16_2;
                                QUICKDouble x_1_26_1 = Ptempx * x_0_26_1 + WPtempx * x_0_26_2 + 3 * ABCDtemp * x_0_13_2;
                                QUICKDouble x_1_27_1 = Ptempx * x_0_27_1 + WPtempx * x_0_27_2 + ABCDtemp * x_0_19_2;
                                QUICKDouble x_1_28_1 = Ptempx * x_0_28_1 + WPtempx * x_0_28_2 + 3 * ABCDtemp * x_0_11_2;
                                QUICKDouble x_1_29_1 = Ptempx * x_0_29_1 + WPtempx * x_0_29_2 + ABCDtemp * x_0_18_2;
                                QUICKDouble x_1_30_1 = Ptempx * x_0_30_1 + WPtempx * x_0_30_2;
                                QUICKDouble x_1_31_1 = Ptempx * x_0_31_1 + WPtempx * x_0_31_2;
                                QUICKDouble x_1_32_1 = Ptempx * x_0_32_1 + WPtempx * x_0_32_2 + 4 * ABCDtemp * x_0_17_2;
                                QUICKDouble x_1_33_1 = Ptempx * x_0_33_1 + WPtempx * x_0_33_2;
                                QUICKDouble x_1_34_1 = Ptempx * x_0_34_1 + WPtempx * x_0_34_2;
                                QUICKDouble x_2_20_1 = Ptempy * x_0_20_1 + WPtempy * x_0_20_2 + 2 * ABCDtemp * x_0_11_2;
                                QUICKDouble x_2_21_1 = Ptempy * x_0_21_1 + WPtempy * x_0_21_2;
                                QUICKDouble x_2_22_1 = Ptempy * x_0_22_1 + WPtempy * x_0_22_2 + 2 * ABCDtemp * x_0_16_2;
                                QUICKDouble x_2_23_1 = Ptempy * x_0_23_1 + WPtempy * x_0_23_2 + ABCDtemp * x_0_13_2;
                                QUICKDouble x_2_24_1 = Ptempy * x_0_24_1 + WPtempy * x_0_24_2 + 2 * ABCDtemp * x_0_10_2;
                                QUICKDouble x_2_25_1 = Ptempy * x_0_25_1 + WPtempy * x_0_25_2 + ABCDtemp * x_0_14_2;
                                QUICKDouble x_2_26_1 = Ptempy * x_0_26_1 + WPtempy * x_0_26_2;
                                QUICKDouble x_2_27_1 = Ptempy * x_0_27_1 + WPtempy * x_0_27_2;
                                QUICKDouble x_2_28_1 = Ptempy * x_0_28_1 + WPtempy * x_0_28_2 + ABCDtemp * x_0_17_2;
                                QUICKDouble x_2_29_1 = Ptempy * x_0_29_1 + WPtempy * x_0_29_2 + 3 * ABCDtemp * x_0_12_2;
                                QUICKDouble x_2_30_1 = Ptempy * x_0_30_1 + WPtempy * x_0_30_2 + 3 * ABCDtemp * x_0_15_2;
                                QUICKDouble x_2_31_1 = Ptempy * x_0_31_1 + WPtempy * x_0_31_2 + ABCDtemp * x_0_19_2;
                                QUICKDouble x_2_32_1 = Ptempy * x_0_32_1 + WPtempy * x_0_32_2;
                                QUICKDouble x_2_33_1 = Ptempy * x_0_33_1 + WPtempy * x_0_33_2 + 4 * ABCDtemp * x_0_18_2;
                                QUICKDouble x_2_34_1 = Ptempy * x_0_34_1 + WPtempy * x_0_34_2;
                                QUICKDouble x_3_20_1 = Ptempz * x_0_20_1 + WPtempz * x_0_20_2;
                                QUICKDouble x_3_21_1 = Ptempz * x_0_21_1 + WPtempz * x_0_21_2 + 2 * ABCDtemp * x_0_13_2;
                                QUICKDouble x_3_22_1 = Ptempz * x_0_22_1 + WPtempz * x_0_22_2 + 2 * ABCDtemp * x_0_15_2;
                                QUICKDouble x_3_23_1 = Ptempz * x_0_23_1 + WPtempz * x_0_23_2 + ABCDtemp * x_0_11_2;
                                QUICKDouble x_3_24_1 = Ptempz * x_0_24_1 + WPtempz * x_0_24_2 + ABCDtemp * x_0_12_2;
                                QUICKDouble x_3_25_1 = Ptempz * x_0_25_1 + WPtempz * x_0_25_2 + 2 * ABCDtemp * x_0_10_2;
                                QUICKDouble x_3_26_1 = Ptempz * x_0_26_1 + WPtempz * x_0_26_2 + ABCDtemp * x_0_17_2;
                                QUICKDouble x_3_27_1 = Ptempz * x_0_27_1 + WPtempz * x_0_27_2 + 3 * ABCDtemp * x_0_14_2;
                                QUICKDouble x_3_28_1 = Ptempz * x_0_28_1 + WPtempz * x_0_28_2;
                                QUICKDouble x_3_29_1 = Ptempz * x_0_29_1 + WPtempz * x_0_29_2;
                                QUICKDouble x_3_30_1 = Ptempz * x_0_30_1 + WPtempz * x_0_30_2 + ABCDtemp * x_0_18_2;
                                QUICKDouble x_3_31_1 = Ptempz * x_0_31_1 + WPtempz * x_0_31_2 + 3 * ABCDtemp * x_0_16_2;
                                QUICKDouble x_3_32_1 = Ptempz * x_0_32_1 + WPtempz * x_0_32_2;
                                QUICKDouble x_3_33_1 = Ptempz * x_0_33_1 + WPtempz * x_0_33_2;
                                QUICKDouble x_3_34_1 = Ptempz * x_0_34_1 + WPtempz * x_0_34_2 + 4 * ABCDtemp * x_0_19_2;
                                
                                // Subroutine for L =            1  B =            4 , m=           2
                                QUICKDouble x_2_20_2 = Ptempy * x_0_20_2 + WPtempy * x_0_20_3 + 2 * ABCDtemp * x_0_11_3;
                                QUICKDouble x_2_21_2 = Ptempy * x_0_21_2 + WPtempy * x_0_21_3;
                                QUICKDouble x_2_22_2 = Ptempy * x_0_22_2 + WPtempy * x_0_22_3 + 2 * ABCDtemp * x_0_16_3;
                                QUICKDouble x_2_23_2 = Ptempy * x_0_23_2 + WPtempy * x_0_23_3 + ABCDtemp * x_0_13_3;
                                QUICKDouble x_2_24_2 = Ptempy * x_0_24_2 + WPtempy * x_0_24_3 + 2 * ABCDtemp * x_0_10_3;
                                QUICKDouble x_2_25_2 = Ptempy * x_0_25_2 + WPtempy * x_0_25_3 + ABCDtemp * x_0_14_3;
                                QUICKDouble x_2_26_2 = Ptempy * x_0_26_2 + WPtempy * x_0_26_3;
                                QUICKDouble x_2_27_2 = Ptempy * x_0_27_2 + WPtempy * x_0_27_3;
                                QUICKDouble x_2_28_2 = Ptempy * x_0_28_2 + WPtempy * x_0_28_3 + ABCDtemp * x_0_17_3;
                                QUICKDouble x_2_29_2 = Ptempy * x_0_29_2 + WPtempy * x_0_29_3 + 3 * ABCDtemp * x_0_12_3;
                                QUICKDouble x_2_30_2 = Ptempy * x_0_30_2 + WPtempy * x_0_30_3 + 3 * ABCDtemp * x_0_15_3;
                                QUICKDouble x_2_31_2 = Ptempy * x_0_31_2 + WPtempy * x_0_31_3 + ABCDtemp * x_0_19_3;
                                QUICKDouble x_2_32_2 = Ptempy * x_0_32_2 + WPtempy * x_0_32_3;
                                QUICKDouble x_2_33_2 = Ptempy * x_0_33_2 + WPtempy * x_0_33_3 + 4 * ABCDtemp * x_0_18_3;
                                QUICKDouble x_2_34_2 = Ptempy * x_0_34_2 + WPtempy * x_0_34_3;
                                QUICKDouble x_3_20_2 = Ptempz * x_0_20_2 + WPtempz * x_0_20_3;
                                QUICKDouble x_3_21_2 = Ptempz * x_0_21_2 + WPtempz * x_0_21_3 + 2 * ABCDtemp * x_0_13_3;
                                QUICKDouble x_3_22_2 = Ptempz * x_0_22_2 + WPtempz * x_0_22_3 + 2 * ABCDtemp * x_0_15_3;
                                QUICKDouble x_3_23_2 = Ptempz * x_0_23_2 + WPtempz * x_0_23_3 + ABCDtemp * x_0_11_3;
                                QUICKDouble x_3_24_2 = Ptempz * x_0_24_2 + WPtempz * x_0_24_3 + ABCDtemp * x_0_12_3;
                                QUICKDouble x_3_25_2 = Ptempz * x_0_25_2 + WPtempz * x_0_25_3 + 2 * ABCDtemp * x_0_10_3;
                                QUICKDouble x_3_26_2 = Ptempz * x_0_26_2 + WPtempz * x_0_26_3 + ABCDtemp * x_0_17_3;
                                QUICKDouble x_3_27_2 = Ptempz * x_0_27_2 + WPtempz * x_0_27_3 + 3 * ABCDtemp * x_0_14_3;
                                QUICKDouble x_3_28_2 = Ptempz * x_0_28_2 + WPtempz * x_0_28_3;
                                QUICKDouble x_3_29_2 = Ptempz * x_0_29_2 + WPtempz * x_0_29_3;
                                QUICKDouble x_3_30_2 = Ptempz * x_0_30_2 + WPtempz * x_0_30_3 + ABCDtemp * x_0_18_3;
                                QUICKDouble x_3_31_2 = Ptempz * x_0_31_2 + WPtempz * x_0_31_3 + 3 * ABCDtemp * x_0_16_3;
                                QUICKDouble x_3_32_2 = Ptempz * x_0_32_2 + WPtempz * x_0_32_3;
                                QUICKDouble x_3_33_2 = Ptempz * x_0_33_2 + WPtempz * x_0_33_3;
                                QUICKDouble x_3_34_2 = Ptempz * x_0_34_2 + WPtempz * x_0_34_3 + 4 * ABCDtemp * x_0_19_3;
                                
                                // Subroutine for L =            2  B =            3 , m=           1
                                QUICKDouble x_5_10_1 = Ptempy * x_3_10_1 + WPtempy * x_3_10_2 + ABCDtemp * x_3_6_2;
                                QUICKDouble x_5_11_1 = Ptempy * x_3_11_1 + WPtempy * x_3_11_2 + ABCDtemp * x_3_7_2;
                                QUICKDouble x_5_12_1 = Ptempy * x_3_12_1 + WPtempy * x_3_12_2 + 2 * ABCDtemp * x_3_4_2;
                                QUICKDouble x_5_13_1 = Ptempy * x_3_13_1 + WPtempy * x_3_13_2;
                                QUICKDouble x_5_14_1 = Ptempy * x_3_14_1 + WPtempy * x_3_14_2;
                                QUICKDouble x_5_15_1 = Ptempy * x_3_15_1 + WPtempy * x_3_15_2 + 2 * ABCDtemp * x_3_5_2;
                                QUICKDouble x_5_16_1 = Ptempy * x_3_16_1 + WPtempy * x_3_16_2 + ABCDtemp * x_3_9_2;
                                QUICKDouble x_5_17_1 = Ptempy * x_3_17_1 + WPtempy * x_3_17_2;
                                QUICKDouble x_5_18_1 = Ptempy * x_3_18_1 + WPtempy * x_3_18_2 + 3 * ABCDtemp * x_3_8_2;
                                QUICKDouble x_5_19_1 = Ptempy * x_3_19_1 + WPtempy * x_3_19_2;
                                QUICKDouble x_8_10_1 = Ptempy * x_2_10_1 + WPtempy * x_2_10_2 + ABtemp * (x_0_10_1 -  CDcom * x_0_10_2) + ABCDtemp * x_2_6_2;
                                QUICKDouble x_8_11_1 = Ptempy * x_2_11_1 + WPtempy * x_2_11_2 + ABtemp * (x_0_11_1 -  CDcom * x_0_11_2) + ABCDtemp * x_2_7_2;
                                QUICKDouble x_8_12_1 = Ptempy * x_2_12_1 + WPtempy * x_2_12_2 + ABtemp * (x_0_12_1 -  CDcom * x_0_12_2) + 2 * ABCDtemp * x_2_4_2;
                                QUICKDouble x_8_13_1 = Ptempy * x_2_13_1 + WPtempy * x_2_13_2 + ABtemp * (x_0_13_1 -  CDcom * x_0_13_2);
                                QUICKDouble x_8_14_1 = Ptempy * x_2_14_1 + WPtempy * x_2_14_2 + ABtemp * (x_0_14_1 -  CDcom * x_0_14_2);
                                QUICKDouble x_8_15_1 = Ptempy * x_2_15_1 + WPtempy * x_2_15_2 + ABtemp * (x_0_15_1 -  CDcom * x_0_15_2) + 2 * ABCDtemp * x_2_5_2;
                                QUICKDouble x_8_16_1 = Ptempy * x_2_16_1 + WPtempy * x_2_16_2 + ABtemp * (x_0_16_1 -  CDcom * x_0_16_2) + ABCDtemp * x_2_9_2;
                                QUICKDouble x_8_17_1 = Ptempy * x_2_17_1 + WPtempy * x_2_17_2 + ABtemp * (x_0_17_1 -  CDcom * x_0_17_2);
                                QUICKDouble x_8_18_1 = Ptempy * x_2_18_1 + WPtempy * x_2_18_2 + ABtemp * (x_0_18_1 -  CDcom * x_0_18_2) + 3 * ABCDtemp * x_2_8_2;
                                QUICKDouble x_8_19_1 = Ptempy * x_2_19_1 + WPtempy * x_2_19_2 + ABtemp * (x_0_19_1 -  CDcom * x_0_19_2);
                                QUICKDouble x_9_10_1 = Ptempz * x_3_10_1 + WPtempz * x_3_10_2 + ABtemp * (x_0_10_1 -  CDcom * x_0_10_2) + ABCDtemp * x_3_4_2;
                                QUICKDouble x_9_11_1 = Ptempz * x_3_11_1 + WPtempz * x_3_11_2 + ABtemp * (x_0_11_1 -  CDcom * x_0_11_2);
                                QUICKDouble x_9_12_1 = Ptempz * x_3_12_1 + WPtempz * x_3_12_2 + ABtemp * (x_0_12_1 -  CDcom * x_0_12_2);
                                QUICKDouble x_9_13_1 = Ptempz * x_3_13_1 + WPtempz * x_3_13_2 + ABtemp * (x_0_13_1 -  CDcom * x_0_13_2) + ABCDtemp * x_3_7_2;
                                QUICKDouble x_9_14_1 = Ptempz * x_3_14_1 + WPtempz * x_3_14_2 + ABtemp * (x_0_14_1 -  CDcom * x_0_14_2) + 2 * ABCDtemp * x_3_6_2;
                                QUICKDouble x_9_15_1 = Ptempz * x_3_15_1 + WPtempz * x_3_15_2 + ABtemp * (x_0_15_1 -  CDcom * x_0_15_2) + ABCDtemp * x_3_8_2;
                                QUICKDouble x_9_16_1 = Ptempz * x_3_16_1 + WPtempz * x_3_16_2 + ABtemp * (x_0_16_1 -  CDcom * x_0_16_2) + 2 * ABCDtemp * x_3_5_2;
                                QUICKDouble x_9_17_1 = Ptempz * x_3_17_1 + WPtempz * x_3_17_2 + ABtemp * (x_0_17_1 -  CDcom * x_0_17_2);
                                QUICKDouble x_9_18_1 = Ptempz * x_3_18_1 + WPtempz * x_3_18_2 + ABtemp * (x_0_18_1 -  CDcom * x_0_18_2);
                                QUICKDouble x_9_19_1 = Ptempz * x_3_19_1 + WPtempz * x_3_19_2 + ABtemp * (x_0_19_1 -  CDcom * x_0_19_2) + 3 * ABCDtemp * x_3_9_2;
                                
                                // Subroutine for L =            2  B =            4 , m=           0
                                QUICKDouble x_4_20_0 = Ptempx * x_2_20_0 + WPtempx * x_2_20_1 + 2 * ABCDtemp * x_2_12_1;
                                QUICKDouble x_4_21_0 = Ptempx * x_2_21_0 + WPtempx * x_2_21_1 + 2 * ABCDtemp * x_2_14_1;
                                QUICKDouble x_4_22_0 = Ptempx * x_2_22_0 + WPtempx * x_2_22_1;
                                QUICKDouble x_4_23_0 = Ptempx * x_2_23_0 + WPtempx * x_2_23_1 + 2 * ABCDtemp * x_2_10_1;
                                QUICKDouble x_4_24_0 = Ptempx * x_2_24_0 + WPtempx * x_2_24_1 + ABCDtemp * x_2_15_1;
                                QUICKDouble x_4_25_0 = Ptempx * x_2_25_0 + WPtempx * x_2_25_1 + ABCDtemp * x_2_16_1;
                                QUICKDouble x_4_26_0 = Ptempx * x_2_26_0 + WPtempx * x_2_26_1 + 3 * ABCDtemp * x_2_13_1;
                                QUICKDouble x_4_27_0 = Ptempx * x_2_27_0 + WPtempx * x_2_27_1 + ABCDtemp * x_2_19_1;
                                QUICKDouble x_4_28_0 = Ptempx * x_2_28_0 + WPtempx * x_2_28_1 + 3 * ABCDtemp * x_2_11_1;
                                QUICKDouble x_4_29_0 = Ptempx * x_2_29_0 + WPtempx * x_2_29_1 + ABCDtemp * x_2_18_1;
                                QUICKDouble x_4_30_0 = Ptempx * x_2_30_0 + WPtempx * x_2_30_1;
                                QUICKDouble x_4_31_0 = Ptempx * x_2_31_0 + WPtempx * x_2_31_1;
                                QUICKDouble x_4_32_0 = Ptempx * x_2_32_0 + WPtempx * x_2_32_1 + 4 * ABCDtemp * x_2_17_1;
                                QUICKDouble x_4_33_0 = Ptempx * x_2_33_0 + WPtempx * x_2_33_1;
                                QUICKDouble x_4_34_0 = Ptempx * x_2_34_0 + WPtempx * x_2_34_1;
                                QUICKDouble x_5_20_0 = Ptempy * x_3_20_0 + WPtempy * x_3_20_1 + 2 * ABCDtemp * x_3_11_1;
                                QUICKDouble x_5_21_0 = Ptempy * x_3_21_0 + WPtempy * x_3_21_1;
                                QUICKDouble x_5_22_0 = Ptempy * x_3_22_0 + WPtempy * x_3_22_1 + 2 * ABCDtemp * x_3_16_1;
                                QUICKDouble x_5_23_0 = Ptempy * x_3_23_0 + WPtempy * x_3_23_1 + ABCDtemp * x_3_13_1;
                                QUICKDouble x_5_24_0 = Ptempy * x_3_24_0 + WPtempy * x_3_24_1 + 2 * ABCDtemp * x_3_10_1;
                                QUICKDouble x_5_25_0 = Ptempy * x_3_25_0 + WPtempy * x_3_25_1 + ABCDtemp * x_3_14_1;
                                QUICKDouble x_5_26_0 = Ptempy * x_3_26_0 + WPtempy * x_3_26_1;
                                QUICKDouble x_5_27_0 = Ptempy * x_3_27_0 + WPtempy * x_3_27_1;
                                QUICKDouble x_5_28_0 = Ptempy * x_3_28_0 + WPtempy * x_3_28_1 + ABCDtemp * x_3_17_1;
                                QUICKDouble x_5_29_0 = Ptempy * x_3_29_0 + WPtempy * x_3_29_1 + 3 * ABCDtemp * x_3_12_1;
                                QUICKDouble x_5_30_0 = Ptempy * x_3_30_0 + WPtempy * x_3_30_1 + 3 * ABCDtemp * x_3_15_1;
                                QUICKDouble x_5_31_0 = Ptempy * x_3_31_0 + WPtempy * x_3_31_1 + ABCDtemp * x_3_19_1;
                                QUICKDouble x_5_32_0 = Ptempy * x_3_32_0 + WPtempy * x_3_32_1;
                                QUICKDouble x_5_33_0 = Ptempy * x_3_33_0 + WPtempy * x_3_33_1 + 4 * ABCDtemp * x_3_18_1;
                                QUICKDouble x_5_34_0 = Ptempy * x_3_34_0 + WPtempy * x_3_34_1;
                                QUICKDouble x_6_20_0 = Ptempx * x_3_20_0 + WPtempx * x_3_20_1 + 2 * ABCDtemp * x_3_12_1;
                                QUICKDouble x_6_21_0 = Ptempx * x_3_21_0 + WPtempx * x_3_21_1 + 2 * ABCDtemp * x_3_14_1;
                                QUICKDouble x_6_22_0 = Ptempx * x_3_22_0 + WPtempx * x_3_22_1;
                                QUICKDouble x_6_23_0 = Ptempx * x_3_23_0 + WPtempx * x_3_23_1 + 2 * ABCDtemp * x_3_10_1;
                                QUICKDouble x_6_24_0 = Ptempx * x_3_24_0 + WPtempx * x_3_24_1 + ABCDtemp * x_3_15_1;
                                QUICKDouble x_6_25_0 = Ptempx * x_3_25_0 + WPtempx * x_3_25_1 + ABCDtemp * x_3_16_1;
                                QUICKDouble x_6_26_0 = Ptempx * x_3_26_0 + WPtempx * x_3_26_1 + 3 * ABCDtemp * x_3_13_1;
                                QUICKDouble x_6_27_0 = Ptempx * x_3_27_0 + WPtempx * x_3_27_1 + ABCDtemp * x_3_19_1;
                                QUICKDouble x_6_28_0 = Ptempx * x_3_28_0 + WPtempx * x_3_28_1 + 3 * ABCDtemp * x_3_11_1;
                                QUICKDouble x_6_29_0 = Ptempx * x_3_29_0 + WPtempx * x_3_29_1 + ABCDtemp * x_3_18_1;
                                QUICKDouble x_6_30_0 = Ptempx * x_3_30_0 + WPtempx * x_3_30_1;
                                QUICKDouble x_6_31_0 = Ptempx * x_3_31_0 + WPtempx * x_3_31_1;
                                QUICKDouble x_6_32_0 = Ptempx * x_3_32_0 + WPtempx * x_3_32_1 + 4 * ABCDtemp * x_3_17_1;
                                QUICKDouble x_6_33_0 = Ptempx * x_3_33_0 + WPtempx * x_3_33_1;
                                QUICKDouble x_6_34_0 = Ptempx * x_3_34_0 + WPtempx * x_3_34_1;
                                QUICKDouble x_7_20_0 = Ptempx * x_1_20_0 + WPtempx * x_1_20_1 + ABtemp * (x_0_20_0 -  CDcom * x_0_20_1) + 2 * ABCDtemp * x_1_12_1;
                                QUICKDouble x_7_21_0 = Ptempx * x_1_21_0 + WPtempx * x_1_21_1 + ABtemp * (x_0_21_0 -  CDcom * x_0_21_1) + 2 * ABCDtemp * x_1_14_1;
                                QUICKDouble x_7_22_0 = Ptempx * x_1_22_0 + WPtempx * x_1_22_1 + ABtemp * (x_0_22_0 -  CDcom * x_0_22_1);
                                QUICKDouble x_7_23_0 = Ptempx * x_1_23_0 + WPtempx * x_1_23_1 + ABtemp * (x_0_23_0 -  CDcom * x_0_23_1) + 2 * ABCDtemp * x_1_10_1;
                                QUICKDouble x_7_24_0 = Ptempx * x_1_24_0 + WPtempx * x_1_24_1 + ABtemp * (x_0_24_0 -  CDcom * x_0_24_1) + ABCDtemp * x_1_15_1;
                                QUICKDouble x_7_25_0 = Ptempx * x_1_25_0 + WPtempx * x_1_25_1 + ABtemp * (x_0_25_0 -  CDcom * x_0_25_1) + ABCDtemp * x_1_16_1;
                                QUICKDouble x_7_26_0 = Ptempx * x_1_26_0 + WPtempx * x_1_26_1 + ABtemp * (x_0_26_0 -  CDcom * x_0_26_1) + 3 * ABCDtemp * x_1_13_1;
                                QUICKDouble x_7_27_0 = Ptempx * x_1_27_0 + WPtempx * x_1_27_1 + ABtemp * (x_0_27_0 -  CDcom * x_0_27_1) + ABCDtemp * x_1_19_1;
                                QUICKDouble x_7_28_0 = Ptempx * x_1_28_0 + WPtempx * x_1_28_1 + ABtemp * (x_0_28_0 -  CDcom * x_0_28_1) + 3 * ABCDtemp * x_1_11_1;
                                QUICKDouble x_7_29_0 = Ptempx * x_1_29_0 + WPtempx * x_1_29_1 + ABtemp * (x_0_29_0 -  CDcom * x_0_29_1) + ABCDtemp * x_1_18_1;
                                QUICKDouble x_7_30_0 = Ptempx * x_1_30_0 + WPtempx * x_1_30_1 + ABtemp * (x_0_30_0 -  CDcom * x_0_30_1);
                                QUICKDouble x_7_31_0 = Ptempx * x_1_31_0 + WPtempx * x_1_31_1 + ABtemp * (x_0_31_0 -  CDcom * x_0_31_1);
                                QUICKDouble x_7_32_0 = Ptempx * x_1_32_0 + WPtempx * x_1_32_1 + ABtemp * (x_0_32_0 -  CDcom * x_0_32_1) + 4 * ABCDtemp * x_1_17_1;
                                QUICKDouble x_7_33_0 = Ptempx * x_1_33_0 + WPtempx * x_1_33_1 + ABtemp * (x_0_33_0 -  CDcom * x_0_33_1);
                                QUICKDouble x_7_34_0 = Ptempx * x_1_34_0 + WPtempx * x_1_34_1 + ABtemp * (x_0_34_0 -  CDcom * x_0_34_1);
                                QUICKDouble x_8_20_0 = Ptempy * x_2_20_0 + WPtempy * x_2_20_1 + ABtemp * (x_0_20_0 -  CDcom * x_0_20_1) + 2 * ABCDtemp * x_2_11_1;
                                QUICKDouble x_8_21_0 = Ptempy * x_2_21_0 + WPtempy * x_2_21_1 + ABtemp * (x_0_21_0 -  CDcom * x_0_21_1);
                                QUICKDouble x_8_22_0 = Ptempy * x_2_22_0 + WPtempy * x_2_22_1 + ABtemp * (x_0_22_0 -  CDcom * x_0_22_1) + 2 * ABCDtemp * x_2_16_1;
                                QUICKDouble x_8_23_0 = Ptempy * x_2_23_0 + WPtempy * x_2_23_1 + ABtemp * (x_0_23_0 -  CDcom * x_0_23_1) + ABCDtemp * x_2_13_1;
                                QUICKDouble x_8_24_0 = Ptempy * x_2_24_0 + WPtempy * x_2_24_1 + ABtemp * (x_0_24_0 -  CDcom * x_0_24_1) + 2 * ABCDtemp * x_2_10_1;
                                QUICKDouble x_8_25_0 = Ptempy * x_2_25_0 + WPtempy * x_2_25_1 + ABtemp * (x_0_25_0 -  CDcom * x_0_25_1) + ABCDtemp * x_2_14_1;
                                QUICKDouble x_8_26_0 = Ptempy * x_2_26_0 + WPtempy * x_2_26_1 + ABtemp * (x_0_26_0 -  CDcom * x_0_26_1);
                                QUICKDouble x_8_27_0 = Ptempy * x_2_27_0 + WPtempy * x_2_27_1 + ABtemp * (x_0_27_0 -  CDcom * x_0_27_1);
                                QUICKDouble x_8_28_0 = Ptempy * x_2_28_0 + WPtempy * x_2_28_1 + ABtemp * (x_0_28_0 -  CDcom * x_0_28_1) + ABCDtemp * x_2_17_1;
                                QUICKDouble x_8_29_0 = Ptempy * x_2_29_0 + WPtempy * x_2_29_1 + ABtemp * (x_0_29_0 -  CDcom * x_0_29_1) + 3 * ABCDtemp * x_2_12_1;
                                QUICKDouble x_8_30_0 = Ptempy * x_2_30_0 + WPtempy * x_2_30_1 + ABtemp * (x_0_30_0 -  CDcom * x_0_30_1) + 3 * ABCDtemp * x_2_15_1;
                                QUICKDouble x_8_31_0 = Ptempy * x_2_31_0 + WPtempy * x_2_31_1 + ABtemp * (x_0_31_0 -  CDcom * x_0_31_1) + ABCDtemp * x_2_19_1;
                                QUICKDouble x_8_32_0 = Ptempy * x_2_32_0 + WPtempy * x_2_32_1 + ABtemp * (x_0_32_0 -  CDcom * x_0_32_1);
                                QUICKDouble x_8_33_0 = Ptempy * x_2_33_0 + WPtempy * x_2_33_1 + ABtemp * (x_0_33_0 -  CDcom * x_0_33_1) + 4 * ABCDtemp * x_2_18_1;
                                QUICKDouble x_8_34_0 = Ptempy * x_2_34_0 + WPtempy * x_2_34_1 + ABtemp * (x_0_34_0 -  CDcom * x_0_34_1);
                                QUICKDouble x_9_20_0 = Ptempz * x_3_20_0 + WPtempz * x_3_20_1 + ABtemp * (x_0_20_0 -  CDcom * x_0_20_1);
                                QUICKDouble x_9_21_0 = Ptempz * x_3_21_0 + WPtempz * x_3_21_1 + ABtemp * (x_0_21_0 -  CDcom * x_0_21_1) + 2 * ABCDtemp * x_3_13_1;
                                QUICKDouble x_9_22_0 = Ptempz * x_3_22_0 + WPtempz * x_3_22_1 + ABtemp * (x_0_22_0 -  CDcom * x_0_22_1) + 2 * ABCDtemp * x_3_15_1;
                                QUICKDouble x_9_23_0 = Ptempz * x_3_23_0 + WPtempz * x_3_23_1 + ABtemp * (x_0_23_0 -  CDcom * x_0_23_1) + ABCDtemp * x_3_11_1;
                                QUICKDouble x_9_24_0 = Ptempz * x_3_24_0 + WPtempz * x_3_24_1 + ABtemp * (x_0_24_0 -  CDcom * x_0_24_1) + ABCDtemp * x_3_12_1;
                                QUICKDouble x_9_25_0 = Ptempz * x_3_25_0 + WPtempz * x_3_25_1 + ABtemp * (x_0_25_0 -  CDcom * x_0_25_1) + 2 * ABCDtemp * x_3_10_1;
                                QUICKDouble x_9_26_0 = Ptempz * x_3_26_0 + WPtempz * x_3_26_1 + ABtemp * (x_0_26_0 -  CDcom * x_0_26_1) + ABCDtemp * x_3_17_1;
                                QUICKDouble x_9_27_0 = Ptempz * x_3_27_0 + WPtempz * x_3_27_1 + ABtemp * (x_0_27_0 -  CDcom * x_0_27_1) + 3 * ABCDtemp * x_3_14_1;
                                QUICKDouble x_9_28_0 = Ptempz * x_3_28_0 + WPtempz * x_3_28_1 + ABtemp * (x_0_28_0 -  CDcom * x_0_28_1);
                                QUICKDouble x_9_29_0 = Ptempz * x_3_29_0 + WPtempz * x_3_29_1 + ABtemp * (x_0_29_0 -  CDcom * x_0_29_1);
                                QUICKDouble x_9_30_0 = Ptempz * x_3_30_0 + WPtempz * x_3_30_1 + ABtemp * (x_0_30_0 -  CDcom * x_0_30_1) + ABCDtemp * x_3_18_1;
                                QUICKDouble x_9_31_0 = Ptempz * x_3_31_0 + WPtempz * x_3_31_1 + ABtemp * (x_0_31_0 -  CDcom * x_0_31_1) + 3 * ABCDtemp * x_3_16_1;
                                QUICKDouble x_9_32_0 = Ptempz * x_3_32_0 + WPtempz * x_3_32_1 + ABtemp * (x_0_32_0 -  CDcom * x_0_32_1);
                                QUICKDouble x_9_33_0 = Ptempz * x_3_33_0 + WPtempz * x_3_33_1 + ABtemp * (x_0_33_0 -  CDcom * x_0_33_1);
                                QUICKDouble x_9_34_0 = Ptempz * x_3_34_0 + WPtempz * x_3_34_1 + ABtemp * (x_0_34_0 -  CDcom * x_0_34_1) + 4 * ABCDtemp * x_3_19_1;
                                
                                // Subroutine for L =            2  B =            4 , m=           1
                                QUICKDouble x_5_20_1 = Ptempy * x_3_20_1 + WPtempy * x_3_20_2 + 2 * ABCDtemp * x_3_11_2;
                                QUICKDouble x_5_21_1 = Ptempy * x_3_21_1 + WPtempy * x_3_21_2;
                                QUICKDouble x_5_22_1 = Ptempy * x_3_22_1 + WPtempy * x_3_22_2 + 2 * ABCDtemp * x_3_16_2;
                                QUICKDouble x_5_23_1 = Ptempy * x_3_23_1 + WPtempy * x_3_23_2 + ABCDtemp * x_3_13_2;
                                QUICKDouble x_5_24_1 = Ptempy * x_3_24_1 + WPtempy * x_3_24_2 + 2 * ABCDtemp * x_3_10_2;
                                QUICKDouble x_5_25_1 = Ptempy * x_3_25_1 + WPtempy * x_3_25_2 + ABCDtemp * x_3_14_2;
                                QUICKDouble x_5_26_1 = Ptempy * x_3_26_1 + WPtempy * x_3_26_2;
                                QUICKDouble x_5_27_1 = Ptempy * x_3_27_1 + WPtempy * x_3_27_2;
                                QUICKDouble x_5_28_1 = Ptempy * x_3_28_1 + WPtempy * x_3_28_2 + ABCDtemp * x_3_17_2;
                                QUICKDouble x_5_29_1 = Ptempy * x_3_29_1 + WPtempy * x_3_29_2 + 3 * ABCDtemp * x_3_12_2;
                                QUICKDouble x_5_30_1 = Ptempy * x_3_30_1 + WPtempy * x_3_30_2 + 3 * ABCDtemp * x_3_15_2;
                                QUICKDouble x_5_31_1 = Ptempy * x_3_31_1 + WPtempy * x_3_31_2 + ABCDtemp * x_3_19_2;
                                QUICKDouble x_5_32_1 = Ptempy * x_3_32_1 + WPtempy * x_3_32_2;
                                QUICKDouble x_5_33_1 = Ptempy * x_3_33_1 + WPtempy * x_3_33_2 + 4 * ABCDtemp * x_3_18_2;
                                QUICKDouble x_5_34_1 = Ptempy * x_3_34_1 + WPtempy * x_3_34_2;
                                QUICKDouble x_8_20_1 = Ptempy * x_2_20_1 + WPtempy * x_2_20_2 + ABtemp * (x_0_20_1 -  CDcom * x_0_20_2) + 2 * ABCDtemp * x_2_11_2;
                                QUICKDouble x_8_21_1 = Ptempy * x_2_21_1 + WPtempy * x_2_21_2 + ABtemp * (x_0_21_1 -  CDcom * x_0_21_2);
                                QUICKDouble x_8_22_1 = Ptempy * x_2_22_1 + WPtempy * x_2_22_2 + ABtemp * (x_0_22_1 -  CDcom * x_0_22_2) + 2 * ABCDtemp * x_2_16_2;
                                QUICKDouble x_8_23_1 = Ptempy * x_2_23_1 + WPtempy * x_2_23_2 + ABtemp * (x_0_23_1 -  CDcom * x_0_23_2) + ABCDtemp * x_2_13_2;
                                QUICKDouble x_8_24_1 = Ptempy * x_2_24_1 + WPtempy * x_2_24_2 + ABtemp * (x_0_24_1 -  CDcom * x_0_24_2) + 2 * ABCDtemp * x_2_10_2;
                                QUICKDouble x_8_25_1 = Ptempy * x_2_25_1 + WPtempy * x_2_25_2 + ABtemp * (x_0_25_1 -  CDcom * x_0_25_2) + ABCDtemp * x_2_14_2;
                                QUICKDouble x_8_26_1 = Ptempy * x_2_26_1 + WPtempy * x_2_26_2 + ABtemp * (x_0_26_1 -  CDcom * x_0_26_2);
                                QUICKDouble x_8_27_1 = Ptempy * x_2_27_1 + WPtempy * x_2_27_2 + ABtemp * (x_0_27_1 -  CDcom * x_0_27_2);
                                QUICKDouble x_8_28_1 = Ptempy * x_2_28_1 + WPtempy * x_2_28_2 + ABtemp * (x_0_28_1 -  CDcom * x_0_28_2) + ABCDtemp * x_2_17_2;
                                QUICKDouble x_8_29_1 = Ptempy * x_2_29_1 + WPtempy * x_2_29_2 + ABtemp * (x_0_29_1 -  CDcom * x_0_29_2) + 3 * ABCDtemp * x_2_12_2;
                                QUICKDouble x_8_30_1 = Ptempy * x_2_30_1 + WPtempy * x_2_30_2 + ABtemp * (x_0_30_1 -  CDcom * x_0_30_2) + 3 * ABCDtemp * x_2_15_2;
                                QUICKDouble x_8_31_1 = Ptempy * x_2_31_1 + WPtempy * x_2_31_2 + ABtemp * (x_0_31_1 -  CDcom * x_0_31_2) + ABCDtemp * x_2_19_2;
                                QUICKDouble x_8_32_1 = Ptempy * x_2_32_1 + WPtempy * x_2_32_2 + ABtemp * (x_0_32_1 -  CDcom * x_0_32_2);
                                QUICKDouble x_8_33_1 = Ptempy * x_2_33_1 + WPtempy * x_2_33_2 + ABtemp * (x_0_33_1 -  CDcom * x_0_33_2) + 4 * ABCDtemp * x_2_18_2;
                                QUICKDouble x_8_34_1 = Ptempy * x_2_34_1 + WPtempy * x_2_34_2 + ABtemp * (x_0_34_1 -  CDcom * x_0_34_2);
                                QUICKDouble x_9_20_1 = Ptempz * x_3_20_1 + WPtempz * x_3_20_2 + ABtemp * (x_0_20_1 -  CDcom * x_0_20_2);
                                QUICKDouble x_9_21_1 = Ptempz * x_3_21_1 + WPtempz * x_3_21_2 + ABtemp * (x_0_21_1 -  CDcom * x_0_21_2) + 2 * ABCDtemp * x_3_13_2;
                                QUICKDouble x_9_22_1 = Ptempz * x_3_22_1 + WPtempz * x_3_22_2 + ABtemp * (x_0_22_1 -  CDcom * x_0_22_2) + 2 * ABCDtemp * x_3_15_2;
                                QUICKDouble x_9_23_1 = Ptempz * x_3_23_1 + WPtempz * x_3_23_2 + ABtemp * (x_0_23_1 -  CDcom * x_0_23_2) + ABCDtemp * x_3_11_2;
                                QUICKDouble x_9_24_1 = Ptempz * x_3_24_1 + WPtempz * x_3_24_2 + ABtemp * (x_0_24_1 -  CDcom * x_0_24_2) + ABCDtemp * x_3_12_2;
                                QUICKDouble x_9_25_1 = Ptempz * x_3_25_1 + WPtempz * x_3_25_2 + ABtemp * (x_0_25_1 -  CDcom * x_0_25_2) + 2 * ABCDtemp * x_3_10_2;
                                QUICKDouble x_9_26_1 = Ptempz * x_3_26_1 + WPtempz * x_3_26_2 + ABtemp * (x_0_26_1 -  CDcom * x_0_26_2) + ABCDtemp * x_3_17_2;
                                QUICKDouble x_9_27_1 = Ptempz * x_3_27_1 + WPtempz * x_3_27_2 + ABtemp * (x_0_27_1 -  CDcom * x_0_27_2) + 3 * ABCDtemp * x_3_14_2;
                                QUICKDouble x_9_28_1 = Ptempz * x_3_28_1 + WPtempz * x_3_28_2 + ABtemp * (x_0_28_1 -  CDcom * x_0_28_2);
                                QUICKDouble x_9_29_1 = Ptempz * x_3_29_1 + WPtempz * x_3_29_2 + ABtemp * (x_0_29_1 -  CDcom * x_0_29_2);
                                QUICKDouble x_9_30_1 = Ptempz * x_3_30_1 + WPtempz * x_3_30_2 + ABtemp * (x_0_30_1 -  CDcom * x_0_30_2) + ABCDtemp * x_3_18_2;
                                QUICKDouble x_9_31_1 = Ptempz * x_3_31_1 + WPtempz * x_3_31_2 + ABtemp * (x_0_31_1 -  CDcom * x_0_31_2) + 3 * ABCDtemp * x_3_16_2;
                                QUICKDouble x_9_32_1 = Ptempz * x_3_32_1 + WPtempz * x_3_32_2 + ABtemp * (x_0_32_1 -  CDcom * x_0_32_2);
                                QUICKDouble x_9_33_1 = Ptempz * x_3_33_1 + WPtempz * x_3_33_2 + ABtemp * (x_0_33_1 -  CDcom * x_0_33_2);
                                QUICKDouble x_9_34_1 = Ptempz * x_3_34_1 + WPtempz * x_3_34_2 + ABtemp * (x_0_34_1 -  CDcom * x_0_34_2) + 4 * ABCDtemp * x_3_19_2;
                                
                                // Subroutine for L =            3  B =            4 , m=           0
                                
                                // WRITE LAST FOR I =            3  J=           4
                                LOC2(store, 10, 20, STOREDIM, STOREDIM) = (    Ptempx * x_5_20_0 + WPtempx * x_5_20_1 + 2 * ABCDtemp * x_5_12_1);
                                LOC2(store, 10, 21, STOREDIM, STOREDIM) = (    Ptempx * x_5_21_0 + WPtempx * x_5_21_1 + 2 * ABCDtemp * x_5_14_1);
                                LOC2(store, 10, 22, STOREDIM, STOREDIM) = (    Ptempx * x_5_22_0 + WPtempx * x_5_22_1);
                                LOC2(store, 10, 23, STOREDIM, STOREDIM) = (    Ptempx * x_5_23_0 + WPtempx * x_5_23_1 + 2 * ABCDtemp * x_5_10_1);
                                LOC2(store, 10, 24, STOREDIM, STOREDIM) = (    Ptempx * x_5_24_0 + WPtempx * x_5_24_1 + ABCDtemp * x_5_15_1);
                                LOC2(store, 10, 25, STOREDIM, STOREDIM) = (    Ptempx * x_5_25_0 + WPtempx * x_5_25_1 + ABCDtemp * x_5_16_1);
                                LOC2(store, 10, 26, STOREDIM, STOREDIM) = (    Ptempx * x_5_26_0 + WPtempx * x_5_26_1 + 3 * ABCDtemp * x_5_13_1);
                                LOC2(store, 10, 27, STOREDIM, STOREDIM) = (    Ptempx * x_5_27_0 + WPtempx * x_5_27_1 + ABCDtemp * x_5_19_1);
                                LOC2(store, 10, 28, STOREDIM, STOREDIM) = (    Ptempx * x_5_28_0 + WPtempx * x_5_28_1 + 3 * ABCDtemp * x_5_11_1);
                                LOC2(store, 10, 29, STOREDIM, STOREDIM) = (    Ptempx * x_5_29_0 + WPtempx * x_5_29_1 + ABCDtemp * x_5_18_1);
                                LOC2(store, 10, 30, STOREDIM, STOREDIM) = (    Ptempx * x_5_30_0 + WPtempx * x_5_30_1);
                                LOC2(store, 10, 31, STOREDIM, STOREDIM) = (    Ptempx * x_5_31_0 + WPtempx * x_5_31_1);
                                LOC2(store, 10, 32, STOREDIM, STOREDIM) = (    Ptempx * x_5_32_0 + WPtempx * x_5_32_1 + 4 * ABCDtemp * x_5_17_1);
                                LOC2(store, 10, 33, STOREDIM, STOREDIM) = (    Ptempx * x_5_33_0 + WPtempx * x_5_33_1);
                                LOC2(store, 10, 34, STOREDIM, STOREDIM) = (    Ptempx * x_5_34_0 + WPtempx * x_5_34_1);
                                LOC2(store, 11, 20, STOREDIM, STOREDIM) = (    Ptempx * x_4_20_0 + WPtempx * (    Ptempx * x_2_20_1 + WPtempx * x_2_20_2 + 2 * ABCDtemp * x_2_12_2) + ABtemp * (x_2_20_0 -  CDcom * x_2_20_1) + 2 * ABCDtemp * (    Ptempx * x_2_12_1 + WPtempx * x_2_12_2 + ABCDtemp * x_2_8_2));
                                LOC2(store, 11, 21, STOREDIM, STOREDIM) = (    Ptempx * x_4_21_0 + WPtempx * (    Ptempx * x_2_21_1 + WPtempx * x_2_21_2 + 2 * ABCDtemp * x_2_14_2) + ABtemp * (x_2_21_0 -  CDcom * x_2_21_1) + 2 * ABCDtemp * (    Ptempx * x_2_14_1 + WPtempx * x_2_14_2 + ABCDtemp * x_2_9_2));
                                LOC2(store, 11, 22, STOREDIM, STOREDIM) = (    Ptempx * x_4_22_0 + WPtempx * (    Ptempx * x_2_22_1 + WPtempx * x_2_22_2) + ABtemp * (x_2_22_0 -  CDcom * x_2_22_1));
                                LOC2(store, 11, 23, STOREDIM, STOREDIM) = (    Ptempx * x_4_23_0 + WPtempx * (    Ptempx * x_2_23_1 + WPtempx * x_2_23_2 + 2 * ABCDtemp * x_2_10_2) + ABtemp * (x_2_23_0 -  CDcom * x_2_23_1) + 2 * ABCDtemp * (    Ptempx * x_2_10_1 + WPtempx * x_2_10_2 + ABCDtemp * x_2_5_2));
                                LOC2(store, 11, 24, STOREDIM, STOREDIM) = (    Ptempx * x_4_24_0 + WPtempx * (    Ptempx * x_2_24_1 + WPtempx * x_2_24_2 + ABCDtemp * x_2_15_2) + ABtemp * (x_2_24_0 -  CDcom * x_2_24_1) + ABCDtemp * (    Ptempx * x_2_15_1 + WPtempx * x_2_15_2));
                                LOC2(store, 11, 25, STOREDIM, STOREDIM) = (    Ptempx * x_4_25_0 + WPtempx * (    Ptempx * x_2_25_1 + WPtempx * x_2_25_2 + ABCDtemp * x_2_16_2) + ABtemp * (x_2_25_0 -  CDcom * x_2_25_1) + ABCDtemp * (    Ptempx * x_2_16_1 + WPtempx * x_2_16_2));
                                LOC2(store, 11, 26, STOREDIM, STOREDIM) = (    Ptempx * x_4_26_0 + WPtempx * (    Ptempx * x_2_26_1 + WPtempx * x_2_26_2 + 3 * ABCDtemp * x_2_13_2) + ABtemp * (x_2_26_0 -  CDcom * x_2_26_1) + 3 * ABCDtemp * (    Ptempx * x_2_13_1 + WPtempx * x_2_13_2 + 2 * ABCDtemp * x_2_6_2));
                                LOC2(store, 11, 27, STOREDIM, STOREDIM) = (    Ptempx * x_4_27_0 + WPtempx * (    Ptempx * x_2_27_1 + WPtempx * x_2_27_2 + ABCDtemp * x_2_19_2) + ABtemp * (x_2_27_0 -  CDcom * x_2_27_1) + ABCDtemp * (    Ptempx * x_2_19_1 + WPtempx * x_2_19_2));
                                LOC2(store, 11, 28, STOREDIM, STOREDIM) = (    Ptempx * x_4_28_0 + WPtempx * (    Ptempx * x_2_28_1 + WPtempx * x_2_28_2 + 3 * ABCDtemp * x_2_11_2) + ABtemp * (x_2_28_0 -  CDcom * x_2_28_1) + 3 * ABCDtemp * (    Ptempx * x_2_11_1 + WPtempx * x_2_11_2 + 2 * ABCDtemp * x_2_4_2));
                                LOC2(store, 11, 29, STOREDIM, STOREDIM) = (    Ptempx * x_4_29_0 + WPtempx * (    Ptempx * x_2_29_1 + WPtempx * x_2_29_2 + ABCDtemp * x_2_18_2) + ABtemp * (x_2_29_0 -  CDcom * x_2_29_1) + ABCDtemp * (    Ptempx * x_2_18_1 + WPtempx * x_2_18_2));
                                LOC2(store, 11, 30, STOREDIM, STOREDIM) = (    Ptempx * x_4_30_0 + WPtempx * (    Ptempx * x_2_30_1 + WPtempx * x_2_30_2) + ABtemp * (x_2_30_0 -  CDcom * x_2_30_1));
                                LOC2(store, 11, 31, STOREDIM, STOREDIM) = (    Ptempx * x_4_31_0 + WPtempx * (    Ptempx * x_2_31_1 + WPtempx * x_2_31_2) + ABtemp * (x_2_31_0 -  CDcom * x_2_31_1));
                                LOC2(store, 11, 32, STOREDIM, STOREDIM) = (    Ptempx * x_4_32_0 + WPtempx * (    Ptempx * x_2_32_1 + WPtempx * x_2_32_2 + 4 * ABCDtemp * x_2_17_2) + ABtemp * (x_2_32_0 -  CDcom * x_2_32_1) + 4 * ABCDtemp * (    Ptempx * x_2_17_1 + WPtempx * x_2_17_2 + 3 * ABCDtemp * x_2_7_2));
                                LOC2(store, 11, 33, STOREDIM, STOREDIM) = (    Ptempx * x_4_33_0 + WPtempx * (    Ptempx * x_2_33_1 + WPtempx * x_2_33_2) + ABtemp * (x_2_33_0 -  CDcom * x_2_33_1));
                                LOC2(store, 11, 34, STOREDIM, STOREDIM) = (    Ptempx * x_4_34_0 + WPtempx * (    Ptempx * x_2_34_1 + WPtempx * x_2_34_2) + ABtemp * (x_2_34_0 -  CDcom * x_2_34_1));
                                LOC2(store, 12, 20, STOREDIM, STOREDIM) = (    Ptempx * x_8_20_0 + WPtempx * x_8_20_1 + 2 * ABCDtemp * x_8_12_1);
                                LOC2(store, 12, 21, STOREDIM, STOREDIM) = (    Ptempx * x_8_21_0 + WPtempx * x_8_21_1 + 2 * ABCDtemp * x_8_14_1);
                                LOC2(store, 12, 22, STOREDIM, STOREDIM) = (    Ptempx * x_8_22_0 + WPtempx * x_8_22_1);
                                LOC2(store, 12, 23, STOREDIM, STOREDIM) = (    Ptempx * x_8_23_0 + WPtempx * x_8_23_1 + 2 * ABCDtemp * x_8_10_1);
                                LOC2(store, 12, 24, STOREDIM, STOREDIM) = (    Ptempx * x_8_24_0 + WPtempx * x_8_24_1 + ABCDtemp * x_8_15_1);
                                LOC2(store, 12, 25, STOREDIM, STOREDIM) = (    Ptempx * x_8_25_0 + WPtempx * x_8_25_1 + ABCDtemp * x_8_16_1);
                                LOC2(store, 12, 26, STOREDIM, STOREDIM) = (    Ptempx * x_8_26_0 + WPtempx * x_8_26_1 + 3 * ABCDtemp * x_8_13_1);
                                LOC2(store, 12, 27, STOREDIM, STOREDIM) = (    Ptempx * x_8_27_0 + WPtempx * x_8_27_1 + ABCDtemp * x_8_19_1);
                                LOC2(store, 12, 28, STOREDIM, STOREDIM) = (    Ptempx * x_8_28_0 + WPtempx * x_8_28_1 + 3 * ABCDtemp * x_8_11_1);
                                LOC2(store, 12, 29, STOREDIM, STOREDIM) = (    Ptempx * x_8_29_0 + WPtempx * x_8_29_1 + ABCDtemp * x_8_18_1);
                                LOC2(store, 12, 30, STOREDIM, STOREDIM) = (    Ptempx * x_8_30_0 + WPtempx * x_8_30_1);
                                LOC2(store, 12, 31, STOREDIM, STOREDIM) = (    Ptempx * x_8_31_0 + WPtempx * x_8_31_1);
                                LOC2(store, 12, 32, STOREDIM, STOREDIM) = (    Ptempx * x_8_32_0 + WPtempx * x_8_32_1 + 4 * ABCDtemp * x_8_17_1);
                                LOC2(store, 12, 33, STOREDIM, STOREDIM) = (    Ptempx * x_8_33_0 + WPtempx * x_8_33_1);
                                LOC2(store, 12, 34, STOREDIM, STOREDIM) = (    Ptempx * x_8_34_0 + WPtempx * x_8_34_1);
                                LOC2(store, 13, 20, STOREDIM, STOREDIM) = (    Ptempx * x_6_20_0 + WPtempx * (    Ptempx * x_3_20_1 + WPtempx * x_3_20_2 + 2 * ABCDtemp * x_3_12_2) + ABtemp * (x_3_20_0 -  CDcom * x_3_20_1) + 2 * ABCDtemp * (    Ptempx * x_3_12_1 + WPtempx * x_3_12_2 + ABCDtemp * x_3_8_2));
                                LOC2(store, 13, 21, STOREDIM, STOREDIM) = (    Ptempx * x_6_21_0 + WPtempx * (    Ptempx * x_3_21_1 + WPtempx * x_3_21_2 + 2 * ABCDtemp * x_3_14_2) + ABtemp * (x_3_21_0 -  CDcom * x_3_21_1) + 2 * ABCDtemp * (    Ptempx * x_3_14_1 + WPtempx * x_3_14_2 + ABCDtemp * x_3_9_2));
                                LOC2(store, 13, 22, STOREDIM, STOREDIM) = (    Ptempx * x_6_22_0 + WPtempx * (    Ptempx * x_3_22_1 + WPtempx * x_3_22_2) + ABtemp * (x_3_22_0 -  CDcom * x_3_22_1));
                                LOC2(store, 13, 23, STOREDIM, STOREDIM) = (    Ptempx * x_6_23_0 + WPtempx * (    Ptempx * x_3_23_1 + WPtempx * x_3_23_2 + 2 * ABCDtemp * x_3_10_2) + ABtemp * (x_3_23_0 -  CDcom * x_3_23_1) + 2 * ABCDtemp * (    Ptempx * x_3_10_1 + WPtempx * x_3_10_2 + ABCDtemp * x_3_5_2));
                                LOC2(store, 13, 24, STOREDIM, STOREDIM) = (    Ptempx * x_6_24_0 + WPtempx * (    Ptempx * x_3_24_1 + WPtempx * x_3_24_2 + ABCDtemp * x_3_15_2) + ABtemp * (x_3_24_0 -  CDcom * x_3_24_1) + ABCDtemp * (    Ptempx * x_3_15_1 + WPtempx * x_3_15_2));
                                LOC2(store, 13, 25, STOREDIM, STOREDIM) = (    Ptempx * x_6_25_0 + WPtempx * (    Ptempx * x_3_25_1 + WPtempx * x_3_25_2 + ABCDtemp * x_3_16_2) + ABtemp * (x_3_25_0 -  CDcom * x_3_25_1) + ABCDtemp * (    Ptempx * x_3_16_1 + WPtempx * x_3_16_2));
                                LOC2(store, 13, 26, STOREDIM, STOREDIM) = (    Ptempx * x_6_26_0 + WPtempx * (    Ptempx * x_3_26_1 + WPtempx * x_3_26_2 + 3 * ABCDtemp * x_3_13_2) + ABtemp * (x_3_26_0 -  CDcom * x_3_26_1) + 3 * ABCDtemp * (    Ptempx * x_3_13_1 + WPtempx * x_3_13_2 + 2 * ABCDtemp * x_3_6_2));
                                LOC2(store, 13, 27, STOREDIM, STOREDIM) = (    Ptempx * x_6_27_0 + WPtempx * (    Ptempx * x_3_27_1 + WPtempx * x_3_27_2 + ABCDtemp * x_3_19_2) + ABtemp * (x_3_27_0 -  CDcom * x_3_27_1) + ABCDtemp * (    Ptempx * x_3_19_1 + WPtempx * x_3_19_2));
                                LOC2(store, 13, 28, STOREDIM, STOREDIM) = (    Ptempx * x_6_28_0 + WPtempx * (    Ptempx * x_3_28_1 + WPtempx * x_3_28_2 + 3 * ABCDtemp * x_3_11_2) + ABtemp * (x_3_28_0 -  CDcom * x_3_28_1) + 3 * ABCDtemp * (    Ptempx * x_3_11_1 + WPtempx * x_3_11_2 + 2 * ABCDtemp * x_3_4_2));
                                LOC2(store, 13, 29, STOREDIM, STOREDIM) = (    Ptempx * x_6_29_0 + WPtempx * (    Ptempx * x_3_29_1 + WPtempx * x_3_29_2 + ABCDtemp * x_3_18_2) + ABtemp * (x_3_29_0 -  CDcom * x_3_29_1) + ABCDtemp * (    Ptempx * x_3_18_1 + WPtempx * x_3_18_2));
                                LOC2(store, 13, 30, STOREDIM, STOREDIM) = (    Ptempx * x_6_30_0 + WPtempx * (    Ptempx * x_3_30_1 + WPtempx * x_3_30_2) + ABtemp * (x_3_30_0 -  CDcom * x_3_30_1));
                                LOC2(store, 13, 31, STOREDIM, STOREDIM) = (    Ptempx * x_6_31_0 + WPtempx * (    Ptempx * x_3_31_1 + WPtempx * x_3_31_2) + ABtemp * (x_3_31_0 -  CDcom * x_3_31_1));
                                LOC2(store, 13, 32, STOREDIM, STOREDIM) = (    Ptempx * x_6_32_0 + WPtempx * (    Ptempx * x_3_32_1 + WPtempx * x_3_32_2 + 4 * ABCDtemp * x_3_17_2) + ABtemp * (x_3_32_0 -  CDcom * x_3_32_1) + 4 * ABCDtemp * (    Ptempx * x_3_17_1 + WPtempx * x_3_17_2 + 3 * ABCDtemp * x_3_7_2));
                                LOC2(store, 13, 33, STOREDIM, STOREDIM) = (    Ptempx * x_6_33_0 + WPtempx * (    Ptempx * x_3_33_1 + WPtempx * x_3_33_2) + ABtemp * (x_3_33_0 -  CDcom * x_3_33_1));
                                LOC2(store, 13, 34, STOREDIM, STOREDIM) = (    Ptempx * x_6_34_0 + WPtempx * (    Ptempx * x_3_34_1 + WPtempx * x_3_34_2) + ABtemp * (x_3_34_0 -  CDcom * x_3_34_1));
                                LOC2(store, 14, 20, STOREDIM, STOREDIM) = (    Ptempx * x_9_20_0 + WPtempx * x_9_20_1 + 2 * ABCDtemp * x_9_12_1);
                                LOC2(store, 14, 21, STOREDIM, STOREDIM) = (    Ptempx * x_9_21_0 + WPtempx * x_9_21_1 + 2 * ABCDtemp * x_9_14_1);
                                LOC2(store, 14, 22, STOREDIM, STOREDIM) = (    Ptempx * x_9_22_0 + WPtempx * x_9_22_1);
                                LOC2(store, 14, 23, STOREDIM, STOREDIM) = (    Ptempx * x_9_23_0 + WPtempx * x_9_23_1 + 2 * ABCDtemp * x_9_10_1);
                                LOC2(store, 14, 24, STOREDIM, STOREDIM) = (    Ptempx * x_9_24_0 + WPtempx * x_9_24_1 + ABCDtemp * x_9_15_1);
                                LOC2(store, 14, 25, STOREDIM, STOREDIM) = (    Ptempx * x_9_25_0 + WPtempx * x_9_25_1 + ABCDtemp * x_9_16_1);
                                LOC2(store, 14, 26, STOREDIM, STOREDIM) = (    Ptempx * x_9_26_0 + WPtempx * x_9_26_1 + 3 * ABCDtemp * x_9_13_1);
                                LOC2(store, 14, 27, STOREDIM, STOREDIM) = (    Ptempx * x_9_27_0 + WPtempx * x_9_27_1 + ABCDtemp * x_9_19_1);
                                LOC2(store, 14, 28, STOREDIM, STOREDIM) = (    Ptempx * x_9_28_0 + WPtempx * x_9_28_1 + 3 * ABCDtemp * x_9_11_1);
                                LOC2(store, 14, 29, STOREDIM, STOREDIM) = (    Ptempx * x_9_29_0 + WPtempx * x_9_29_1 + ABCDtemp * x_9_18_1);
                                LOC2(store, 14, 30, STOREDIM, STOREDIM) = (    Ptempx * x_9_30_0 + WPtempx * x_9_30_1);
                                LOC2(store, 14, 31, STOREDIM, STOREDIM) = (    Ptempx * x_9_31_0 + WPtempx * x_9_31_1);
                                LOC2(store, 14, 32, STOREDIM, STOREDIM) = (    Ptempx * x_9_32_0 + WPtempx * x_9_32_1 + 4 * ABCDtemp * x_9_17_1);
                                LOC2(store, 14, 33, STOREDIM, STOREDIM) = (    Ptempx * x_9_33_0 + WPtempx * x_9_33_1);
                                LOC2(store, 14, 34, STOREDIM, STOREDIM) = (    Ptempx * x_9_34_0 + WPtempx * x_9_34_1);
                                LOC2(store, 15, 20, STOREDIM, STOREDIM) = (    Ptempy * x_5_20_0 + WPtempy * x_5_20_1 + ABtemp * (x_3_20_0 -  CDcom * x_3_20_1) + 2 * ABCDtemp * x_5_11_1);
                                LOC2(store, 15, 21, STOREDIM, STOREDIM) = (    Ptempy * x_5_21_0 + WPtempy * x_5_21_1 + ABtemp * (x_3_21_0 -  CDcom * x_3_21_1));
                                LOC2(store, 15, 22, STOREDIM, STOREDIM) = (    Ptempy * x_5_22_0 + WPtempy * x_5_22_1 + ABtemp * (x_3_22_0 -  CDcom * x_3_22_1) + 2 * ABCDtemp * x_5_16_1);
                                LOC2(store, 15, 23, STOREDIM, STOREDIM) = (    Ptempy * x_5_23_0 + WPtempy * x_5_23_1 + ABtemp * (x_3_23_0 -  CDcom * x_3_23_1) + ABCDtemp * x_5_13_1);
                                LOC2(store, 15, 24, STOREDIM, STOREDIM) = (    Ptempy * x_5_24_0 + WPtempy * x_5_24_1 + ABtemp * (x_3_24_0 -  CDcom * x_3_24_1) + 2 * ABCDtemp * x_5_10_1);
                                LOC2(store, 15, 25, STOREDIM, STOREDIM) = (    Ptempy * x_5_25_0 + WPtempy * x_5_25_1 + ABtemp * (x_3_25_0 -  CDcom * x_3_25_1) + ABCDtemp * x_5_14_1);
                                LOC2(store, 15, 26, STOREDIM, STOREDIM) = (    Ptempy * x_5_26_0 + WPtempy * x_5_26_1 + ABtemp * (x_3_26_0 -  CDcom * x_3_26_1));
                                LOC2(store, 15, 27, STOREDIM, STOREDIM) = (    Ptempy * x_5_27_0 + WPtempy * x_5_27_1 + ABtemp * (x_3_27_0 -  CDcom * x_3_27_1));
                                LOC2(store, 15, 28, STOREDIM, STOREDIM) = (    Ptempy * x_5_28_0 + WPtempy * x_5_28_1 + ABtemp * (x_3_28_0 -  CDcom * x_3_28_1) + ABCDtemp * x_5_17_1);
                                LOC2(store, 15, 29, STOREDIM, STOREDIM) = (    Ptempy * x_5_29_0 + WPtempy * x_5_29_1 + ABtemp * (x_3_29_0 -  CDcom * x_3_29_1) + 3 * ABCDtemp * x_5_12_1);
                                LOC2(store, 15, 30, STOREDIM, STOREDIM) = (    Ptempy * x_5_30_0 + WPtempy * x_5_30_1 + ABtemp * (x_3_30_0 -  CDcom * x_3_30_1) + 3 * ABCDtemp * x_5_15_1);
                                LOC2(store, 15, 31, STOREDIM, STOREDIM) = (    Ptempy * x_5_31_0 + WPtempy * x_5_31_1 + ABtemp * (x_3_31_0 -  CDcom * x_3_31_1) + ABCDtemp * x_5_19_1);
                                LOC2(store, 15, 32, STOREDIM, STOREDIM) = (    Ptempy * x_5_32_0 + WPtempy * x_5_32_1 + ABtemp * (x_3_32_0 -  CDcom * x_3_32_1));
                                LOC2(store, 15, 33, STOREDIM, STOREDIM) = (    Ptempy * x_5_33_0 + WPtempy * x_5_33_1 + ABtemp * (x_3_33_0 -  CDcom * x_3_33_1) + 4 * ABCDtemp * x_5_18_1);
                                LOC2(store, 15, 34, STOREDIM, STOREDIM) = (    Ptempy * x_5_34_0 + WPtempy * x_5_34_1 + ABtemp * (x_3_34_0 -  CDcom * x_3_34_1));
                                LOC2(store, 16, 20, STOREDIM, STOREDIM) = (    Ptempy * x_9_20_0 + WPtempy * x_9_20_1 + 2 * ABCDtemp * x_9_11_1);
                                LOC2(store, 16, 21, STOREDIM, STOREDIM) = (    Ptempy * x_9_21_0 + WPtempy * x_9_21_1);
                                LOC2(store, 16, 22, STOREDIM, STOREDIM) = (    Ptempy * x_9_22_0 + WPtempy * x_9_22_1 + 2 * ABCDtemp * x_9_16_1);
                                LOC2(store, 16, 23, STOREDIM, STOREDIM) = (    Ptempy * x_9_23_0 + WPtempy * x_9_23_1 + ABCDtemp * x_9_13_1);
                                LOC2(store, 16, 24, STOREDIM, STOREDIM) = (    Ptempy * x_9_24_0 + WPtempy * x_9_24_1 + 2 * ABCDtemp * x_9_10_1);
                                LOC2(store, 16, 25, STOREDIM, STOREDIM) = (    Ptempy * x_9_25_0 + WPtempy * x_9_25_1 + ABCDtemp * x_9_14_1);
                                LOC2(store, 16, 26, STOREDIM, STOREDIM) = (    Ptempy * x_9_26_0 + WPtempy * x_9_26_1);
                                LOC2(store, 16, 27, STOREDIM, STOREDIM) = (    Ptempy * x_9_27_0 + WPtempy * x_9_27_1);
                                LOC2(store, 16, 28, STOREDIM, STOREDIM) = (    Ptempy * x_9_28_0 + WPtempy * x_9_28_1 + ABCDtemp * x_9_17_1);
                                LOC2(store, 16, 29, STOREDIM, STOREDIM) = (    Ptempy * x_9_29_0 + WPtempy * x_9_29_1 + 3 * ABCDtemp * x_9_12_1);
                                LOC2(store, 16, 30, STOREDIM, STOREDIM) = (    Ptempy * x_9_30_0 + WPtempy * x_9_30_1 + 3 * ABCDtemp * x_9_15_1);
                                LOC2(store, 16, 31, STOREDIM, STOREDIM) = (    Ptempy * x_9_31_0 + WPtempy * x_9_31_1 + ABCDtemp * x_9_19_1);
                                LOC2(store, 16, 32, STOREDIM, STOREDIM) = (    Ptempy * x_9_32_0 + WPtempy * x_9_32_1);
                                LOC2(store, 16, 33, STOREDIM, STOREDIM) = (    Ptempy * x_9_33_0 + WPtempy * x_9_33_1 + 4 * ABCDtemp * x_9_18_1);
                                LOC2(store, 16, 34, STOREDIM, STOREDIM) = (    Ptempy * x_9_34_0 + WPtempy * x_9_34_1);
                                LOC2(store, 17, 20, STOREDIM, STOREDIM) = (    Ptempx * x_7_20_0 + WPtempx * (    Ptempx * x_1_20_1 + WPtempx * (    Ptempx * x_0_20_2 + WPtempx * x_0_20_3 + 2 * ABCDtemp * x_0_12_3) + ABtemp * (x_0_20_1 -  CDcom * x_0_20_2) + 2 * ABCDtemp * x_1_12_2) + ABtemp * 2 * (x_1_20_0 -  CDcom * x_1_20_1) + 2 * ABCDtemp * (    Ptempx * x_1_12_1 + WPtempx * x_1_12_2 + ABtemp * (x_0_12_1 -  CDcom * x_0_12_2) + ABCDtemp * x_1_8_2));
                                LOC2(store, 17, 21, STOREDIM, STOREDIM) = (    Ptempx * x_7_21_0 + WPtempx * (    Ptempx * x_1_21_1 + WPtempx * (    Ptempx * x_0_21_2 + WPtempx * x_0_21_3 + 2 * ABCDtemp * x_0_14_3) + ABtemp * (x_0_21_1 -  CDcom * x_0_21_2) + 2 * ABCDtemp * x_1_14_2) + ABtemp * 2 * (x_1_21_0 -  CDcom * x_1_21_1) + 2 * ABCDtemp * (    Ptempx * x_1_14_1 + WPtempx * x_1_14_2 + ABtemp * (x_0_14_1 -  CDcom * x_0_14_2) + ABCDtemp * x_1_9_2));
                                LOC2(store, 17, 22, STOREDIM, STOREDIM) = (    Ptempx * x_7_22_0 + WPtempx * (    Ptempx * x_1_22_1 + WPtempx * (    Ptempx * x_0_22_2 + WPtempx * x_0_22_3) + ABtemp * (x_0_22_1 -  CDcom * x_0_22_2)) + ABtemp * 2 * (x_1_22_0 -  CDcom * x_1_22_1));
                                LOC2(store, 17, 23, STOREDIM, STOREDIM) = (    Ptempx * x_7_23_0 + WPtempx * (    Ptempx * x_1_23_1 + WPtempx * (    Ptempx * x_0_23_2 + WPtempx * x_0_23_3 + 2 * ABCDtemp * x_0_10_3) + ABtemp * (x_0_23_1 -  CDcom * x_0_23_2) + 2 * ABCDtemp * x_1_10_2) + ABtemp * 2 * (x_1_23_0 -  CDcom * x_1_23_1) + 2 * ABCDtemp * (    Ptempx * x_1_10_1 + WPtempx * x_1_10_2 + ABtemp * (x_0_10_1 -  CDcom * x_0_10_2) + ABCDtemp * x_1_5_2));
                                LOC2(store, 17, 24, STOREDIM, STOREDIM) = (    Ptempx * x_7_24_0 + WPtempx * (    Ptempx * x_1_24_1 + WPtempx * (    Ptempx * x_0_24_2 + WPtempx * x_0_24_3 + ABCDtemp * x_0_15_3) + ABtemp * (x_0_24_1 -  CDcom * x_0_24_2) + ABCDtemp * x_1_15_2) + ABtemp * 2 * (x_1_24_0 -  CDcom * x_1_24_1) + ABCDtemp * (    Ptempx * x_1_15_1 + WPtempx * x_1_15_2 + ABtemp * (x_0_15_1 -  CDcom * x_0_15_2)));
                                LOC2(store, 17, 25, STOREDIM, STOREDIM) = (    Ptempx * x_7_25_0 + WPtempx * (    Ptempx * x_1_25_1 + WPtempx * (    Ptempx * x_0_25_2 + WPtempx * x_0_25_3 + ABCDtemp * x_0_16_3) + ABtemp * (x_0_25_1 -  CDcom * x_0_25_2) + ABCDtemp * x_1_16_2) + ABtemp * 2 * (x_1_25_0 -  CDcom * x_1_25_1) + ABCDtemp * (    Ptempx * x_1_16_1 + WPtempx * x_1_16_2 + ABtemp * (x_0_16_1 -  CDcom * x_0_16_2)));
                                LOC2(store, 17, 26, STOREDIM, STOREDIM) = (    Ptempx * x_7_26_0 + WPtempx * (    Ptempx * x_1_26_1 + WPtempx * (    Ptempx * x_0_26_2 + WPtempx * x_0_26_3 + 3 * ABCDtemp * x_0_13_3) + ABtemp * (x_0_26_1 -  CDcom * x_0_26_2) + 3 * ABCDtemp * x_1_13_2) + ABtemp * 2 * (x_1_26_0 -  CDcom * x_1_26_1) + 3 * ABCDtemp * (    Ptempx * x_1_13_1 + WPtempx * x_1_13_2 + ABtemp * (x_0_13_1 -  CDcom * x_0_13_2) + 2 * ABCDtemp * x_1_6_2));
                                LOC2(store, 17, 27, STOREDIM, STOREDIM) = (    Ptempx * x_7_27_0 + WPtempx * (    Ptempx * x_1_27_1 + WPtempx * (    Ptempx * x_0_27_2 + WPtempx * x_0_27_3 + ABCDtemp * x_0_19_3) + ABtemp * (x_0_27_1 -  CDcom * x_0_27_2) + ABCDtemp * x_1_19_2) + ABtemp * 2 * (x_1_27_0 -  CDcom * x_1_27_1) + ABCDtemp * (    Ptempx * x_1_19_1 + WPtempx * x_1_19_2 + ABtemp * (x_0_19_1 -  CDcom * x_0_19_2)));
                                LOC2(store, 17, 28, STOREDIM, STOREDIM) = (    Ptempx * x_7_28_0 + WPtempx * (    Ptempx * x_1_28_1 + WPtempx * (    Ptempx * x_0_28_2 + WPtempx * x_0_28_3 + 3 * ABCDtemp * x_0_11_3) + ABtemp * (x_0_28_1 -  CDcom * x_0_28_2) + 3 * ABCDtemp * x_1_11_2) + ABtemp * 2 * (x_1_28_0 -  CDcom * x_1_28_1) + 3 * ABCDtemp * (    Ptempx * x_1_11_1 + WPtempx * x_1_11_2 + ABtemp * (x_0_11_1 -  CDcom * x_0_11_2) + 2 * ABCDtemp * x_1_4_2));
                                LOC2(store, 17, 29, STOREDIM, STOREDIM) = (    Ptempx * x_7_29_0 + WPtempx * (    Ptempx * x_1_29_1 + WPtempx * (    Ptempx * x_0_29_2 + WPtempx * x_0_29_3 + ABCDtemp * x_0_18_3) + ABtemp * (x_0_29_1 -  CDcom * x_0_29_2) + ABCDtemp * x_1_18_2) + ABtemp * 2 * (x_1_29_0 -  CDcom * x_1_29_1) + ABCDtemp * (    Ptempx * x_1_18_1 + WPtempx * x_1_18_2 + ABtemp * (x_0_18_1 -  CDcom * x_0_18_2)));
                                LOC2(store, 17, 30, STOREDIM, STOREDIM) = (    Ptempx * x_7_30_0 + WPtempx * (    Ptempx * x_1_30_1 + WPtempx * (    Ptempx * x_0_30_2 + WPtempx * x_0_30_3) + ABtemp * (x_0_30_1 -  CDcom * x_0_30_2)) + ABtemp * 2 * (x_1_30_0 -  CDcom * x_1_30_1));
                                LOC2(store, 17, 31, STOREDIM, STOREDIM) = (    Ptempx * x_7_31_0 + WPtempx * (    Ptempx * x_1_31_1 + WPtempx * (    Ptempx * x_0_31_2 + WPtempx * x_0_31_3) + ABtemp * (x_0_31_1 -  CDcom * x_0_31_2)) + ABtemp * 2 * (x_1_31_0 -  CDcom * x_1_31_1));
                                LOC2(store, 17, 32, STOREDIM, STOREDIM) = (    Ptempx * x_7_32_0 + WPtempx * (    Ptempx * x_1_32_1 + WPtempx * (    Ptempx * x_0_32_2 + WPtempx * x_0_32_3 + 4 * ABCDtemp * x_0_17_3) + ABtemp * (x_0_32_1 -  CDcom * x_0_32_2) + 4 * ABCDtemp * x_1_17_2) + ABtemp * 2 * (x_1_32_0 -  CDcom * x_1_32_1) + 4 * ABCDtemp * (    Ptempx * x_1_17_1 + WPtempx * x_1_17_2 + ABtemp * (x_0_17_1 -  CDcom * x_0_17_2) + 3 * ABCDtemp * x_1_7_2));
                                LOC2(store, 17, 33, STOREDIM, STOREDIM) = (    Ptempx * x_7_33_0 + WPtempx * (    Ptempx * x_1_33_1 + WPtempx * (    Ptempx * x_0_33_2 + WPtempx * x_0_33_3) + ABtemp * (x_0_33_1 -  CDcom * x_0_33_2)) + ABtemp * 2 * (x_1_33_0 -  CDcom * x_1_33_1));
                                LOC2(store, 17, 34, STOREDIM, STOREDIM) = (    Ptempx * x_7_34_0 + WPtempx * (    Ptempx * x_1_34_1 + WPtempx * (    Ptempx * x_0_34_2 + WPtempx * x_0_34_3) + ABtemp * (x_0_34_1 -  CDcom * x_0_34_2)) + ABtemp * 2 * (x_1_34_0 -  CDcom * x_1_34_1));
                                LOC2(store, 18, 20, STOREDIM, STOREDIM) = (    Ptempy * x_8_20_0 + WPtempy * x_8_20_1 + ABtemp * 2 * (x_2_20_0 -  CDcom * x_2_20_1) + 2 * ABCDtemp * x_8_11_1);
                                LOC2(store, 18, 21, STOREDIM, STOREDIM) = (    Ptempy * x_8_21_0 + WPtempy * x_8_21_1 + ABtemp * 2 * (x_2_21_0 -  CDcom * x_2_21_1));
                                LOC2(store, 18, 22, STOREDIM, STOREDIM) = (    Ptempy * x_8_22_0 + WPtempy * x_8_22_1 + ABtemp * 2 * (x_2_22_0 -  CDcom * x_2_22_1) + 2 * ABCDtemp * x_8_16_1);
                                LOC2(store, 18, 23, STOREDIM, STOREDIM) = (    Ptempy * x_8_23_0 + WPtempy * x_8_23_1 + ABtemp * 2 * (x_2_23_0 -  CDcom * x_2_23_1) + ABCDtemp * x_8_13_1);
                                LOC2(store, 18, 24, STOREDIM, STOREDIM) = (    Ptempy * x_8_24_0 + WPtempy * x_8_24_1 + ABtemp * 2 * (x_2_24_0 -  CDcom * x_2_24_1) + 2 * ABCDtemp * x_8_10_1);
                                LOC2(store, 18, 25, STOREDIM, STOREDIM) = (    Ptempy * x_8_25_0 + WPtempy * x_8_25_1 + ABtemp * 2 * (x_2_25_0 -  CDcom * x_2_25_1) + ABCDtemp * x_8_14_1);
                                LOC2(store, 18, 26, STOREDIM, STOREDIM) = (    Ptempy * x_8_26_0 + WPtempy * x_8_26_1 + ABtemp * 2 * (x_2_26_0 -  CDcom * x_2_26_1));
                                LOC2(store, 18, 27, STOREDIM, STOREDIM) = (    Ptempy * x_8_27_0 + WPtempy * x_8_27_1 + ABtemp * 2 * (x_2_27_0 -  CDcom * x_2_27_1));
                                LOC2(store, 18, 28, STOREDIM, STOREDIM) = (    Ptempy * x_8_28_0 + WPtempy * x_8_28_1 + ABtemp * 2 * (x_2_28_0 -  CDcom * x_2_28_1) + ABCDtemp * x_8_17_1);
                                LOC2(store, 18, 29, STOREDIM, STOREDIM) = (    Ptempy * x_8_29_0 + WPtempy * x_8_29_1 + ABtemp * 2 * (x_2_29_0 -  CDcom * x_2_29_1) + 3 * ABCDtemp * x_8_12_1);
                                LOC2(store, 18, 30, STOREDIM, STOREDIM) = (    Ptempy * x_8_30_0 + WPtempy * x_8_30_1 + ABtemp * 2 * (x_2_30_0 -  CDcom * x_2_30_1) + 3 * ABCDtemp * x_8_15_1);
                                LOC2(store, 18, 31, STOREDIM, STOREDIM) = (    Ptempy * x_8_31_0 + WPtempy * x_8_31_1 + ABtemp * 2 * (x_2_31_0 -  CDcom * x_2_31_1) + ABCDtemp * x_8_19_1);
                                LOC2(store, 18, 32, STOREDIM, STOREDIM) = (    Ptempy * x_8_32_0 + WPtempy * x_8_32_1 + ABtemp * 2 * (x_2_32_0 -  CDcom * x_2_32_1));
                                LOC2(store, 18, 33, STOREDIM, STOREDIM) = (    Ptempy * x_8_33_0 + WPtempy * x_8_33_1 + ABtemp * 2 * (x_2_33_0 -  CDcom * x_2_33_1) + 4 * ABCDtemp * x_8_18_1);
                                LOC2(store, 18, 34, STOREDIM, STOREDIM) = (    Ptempy * x_8_34_0 + WPtempy * x_8_34_1 + ABtemp * 2 * (x_2_34_0 -  CDcom * x_2_34_1));
                                LOC2(store, 19, 20, STOREDIM, STOREDIM) = (    Ptempz * x_9_20_0 + WPtempz * x_9_20_1 + ABtemp * 2 * (x_3_20_0 -  CDcom * x_3_20_1));
                                LOC2(store, 19, 21, STOREDIM, STOREDIM) = (    Ptempz * x_9_21_0 + WPtempz * x_9_21_1 + ABtemp * 2 * (x_3_21_0 -  CDcom * x_3_21_1) + 2 * ABCDtemp * x_9_13_1);
                                LOC2(store, 19, 22, STOREDIM, STOREDIM) = (    Ptempz * x_9_22_0 + WPtempz * x_9_22_1 + ABtemp * 2 * (x_3_22_0 -  CDcom * x_3_22_1) + 2 * ABCDtemp * x_9_15_1);
                                LOC2(store, 19, 23, STOREDIM, STOREDIM) = (    Ptempz * x_9_23_0 + WPtempz * x_9_23_1 + ABtemp * 2 * (x_3_23_0 -  CDcom * x_3_23_1) + ABCDtemp * x_9_11_1);
                                LOC2(store, 19, 24, STOREDIM, STOREDIM) = (    Ptempz * x_9_24_0 + WPtempz * x_9_24_1 + ABtemp * 2 * (x_3_24_0 -  CDcom * x_3_24_1) + ABCDtemp * x_9_12_1);
                                LOC2(store, 19, 25, STOREDIM, STOREDIM) = (    Ptempz * x_9_25_0 + WPtempz * x_9_25_1 + ABtemp * 2 * (x_3_25_0 -  CDcom * x_3_25_1) + 2 * ABCDtemp * x_9_10_1);
                                LOC2(store, 19, 26, STOREDIM, STOREDIM) = (    Ptempz * x_9_26_0 + WPtempz * x_9_26_1 + ABtemp * 2 * (x_3_26_0 -  CDcom * x_3_26_1) + ABCDtemp * x_9_17_1);
                                LOC2(store, 19, 27, STOREDIM, STOREDIM) = (    Ptempz * x_9_27_0 + WPtempz * x_9_27_1 + ABtemp * 2 * (x_3_27_0 -  CDcom * x_3_27_1) + 3 * ABCDtemp * x_9_14_1);
                                LOC2(store, 19, 28, STOREDIM, STOREDIM) = (    Ptempz * x_9_28_0 + WPtempz * x_9_28_1 + ABtemp * 2 * (x_3_28_0 -  CDcom * x_3_28_1));
                                LOC2(store, 19, 29, STOREDIM, STOREDIM) = (    Ptempz * x_9_29_0 + WPtempz * x_9_29_1 + ABtemp * 2 * (x_3_29_0 -  CDcom * x_3_29_1));
                                LOC2(store, 19, 30, STOREDIM, STOREDIM) = (    Ptempz * x_9_30_0 + WPtempz * x_9_30_1 + ABtemp * 2 * (x_3_30_0 -  CDcom * x_3_30_1) + ABCDtemp * x_9_18_1);
                                LOC2(store, 19, 31, STOREDIM, STOREDIM) = (    Ptempz * x_9_31_0 + WPtempz * x_9_31_1 + ABtemp * 2 * (x_3_31_0 -  CDcom * x_3_31_1) + 3 * ABCDtemp * x_9_16_1);
                                LOC2(store, 19, 32, STOREDIM, STOREDIM) = (    Ptempz * x_9_32_0 + WPtempz * x_9_32_1 + ABtemp * 2 * (x_3_32_0 -  CDcom * x_3_32_1));
                                LOC2(store, 19, 33, STOREDIM, STOREDIM) = (    Ptempz * x_9_33_0 + WPtempz * x_9_33_1 + ABtemp * 2 * (x_3_33_0 -  CDcom * x_3_33_1));
                                LOC2(store, 19, 34, STOREDIM, STOREDIM) = (    Ptempz * x_9_34_0 + WPtempz * x_9_34_1 + ABtemp * 2 * (x_3_34_0 -  CDcom * x_3_34_1) + 4 * ABCDtemp * x_9_19_1);
                            }
                            if ((I+J) >=  4 && (K+L)>= 3) {
                                // Subroutine for L =            1  B =            0 , m=           6
                                QUICKDouble x_1_0_6 = Ptempx * VY( 0, 0, 6) + WPtempx * VY( 0, 0, 7);
                                QUICKDouble x_2_0_6 = Ptempy * VY( 0, 0, 6) + WPtempy * VY( 0, 0, 7);
                                QUICKDouble x_3_0_6 = Ptempz * VY( 0, 0, 6) + WPtempz * VY( 0, 0, 7);
                                // Subroutine for L =            2  B =            0 , m=           5
                                QUICKDouble x_4_0_5 = Ptempx * x_2_0_5 + WPtempx * x_2_0_6;
                                QUICKDouble x_5_0_5 = Ptempy * x_3_0_5 + WPtempy * x_3_0_6;
                                QUICKDouble x_6_0_5 = Ptempx * x_3_0_5 + WPtempx * x_3_0_6;
                                QUICKDouble x_7_0_5 = Ptempx * x_1_0_5 + WPtempx * x_1_0_6 + ABtemp * (VY( 0, 0, 5) -  CDcom * VY( 0, 0, 6));
                                QUICKDouble x_8_0_5 = Ptempy * x_2_0_5 + WPtempy * x_2_0_6 + ABtemp * (VY( 0, 0, 5) -  CDcom * VY( 0, 0, 6));
                                QUICKDouble x_9_0_5 = Ptempz * x_3_0_5 + WPtempz * x_3_0_6 + ABtemp * (VY( 0, 0, 5) -  CDcom * VY( 0, 0, 6));
                                // Subroutine for L =            3  B =            0 , m=           4
                                QUICKDouble x_10_0_4 = Ptempx * x_5_0_4 + WPtempx * x_5_0_5;
                                QUICKDouble x_11_0_4 = Ptempx * x_4_0_4 + WPtempx * x_4_0_5 + ABtemp * (x_2_0_4 -  CDcom * x_2_0_5);
                                QUICKDouble x_12_0_4 = Ptempx * x_8_0_4 + WPtempx * x_8_0_5;
                                QUICKDouble x_13_0_4 = Ptempx * x_6_0_4 + WPtempx * x_6_0_5 + ABtemp * (x_3_0_4 -  CDcom * x_3_0_5);
                                QUICKDouble x_14_0_4 = Ptempx * x_9_0_4 + WPtempx * x_9_0_5;
                                QUICKDouble x_15_0_4 = Ptempy * x_5_0_4 + WPtempy * x_5_0_5 + ABtemp * (x_3_0_4 -  CDcom * x_3_0_5);
                                QUICKDouble x_16_0_4 = Ptempy * x_9_0_4 + WPtempy * x_9_0_5;
                                QUICKDouble x_17_0_4 = Ptempx * x_7_0_4 + WPtempx * x_7_0_5 + ABtemp * 2 * (x_1_0_4 -  CDcom * x_1_0_5);
                                QUICKDouble x_18_0_4 = Ptempy * x_8_0_4 + WPtempy * x_8_0_5 + ABtemp * 2 * (x_2_0_4 -  CDcom * x_2_0_5);
                                QUICKDouble x_19_0_4 = Ptempz * x_9_0_4 + WPtempz * x_9_0_5 + ABtemp * 2 * (x_3_0_4 -  CDcom * x_3_0_5);
                                // Subroutine for L =            4  B =            0 , m=           0
                                QUICKDouble x_20_0_0 = Ptempx * x_12_0_0 + WPtempx * x_12_0_1 + ABtemp * (x_8_0_0 -  CDcom * x_8_0_1);
                                QUICKDouble x_21_0_0 = Ptempx * x_14_0_0 + WPtempx * x_14_0_1 + ABtemp * (x_9_0_0 -  CDcom * x_9_0_1);
                                QUICKDouble x_22_0_0 = Ptempy * x_16_0_0 + WPtempy * x_16_0_1 + ABtemp * (x_9_0_0 -  CDcom * x_9_0_1);
                                QUICKDouble x_23_0_0 = Ptempx * x_10_0_0 + WPtempx * x_10_0_1 + ABtemp * (x_5_0_0 -  CDcom * x_5_0_1);
                                QUICKDouble x_24_0_0 = Ptempx * x_15_0_0 + WPtempx * x_15_0_1;
                                QUICKDouble x_25_0_0 = Ptempx * x_16_0_0 + WPtempx * x_16_0_1;
                                QUICKDouble x_26_0_0 = Ptempx * x_13_0_0 + WPtempx * x_13_0_1 + ABtemp * 2 * (x_6_0_0 -  CDcom * x_6_0_1);
                                QUICKDouble x_27_0_0 = Ptempx * x_19_0_0 + WPtempx * x_19_0_1;
                                QUICKDouble x_28_0_0 = Ptempx * x_11_0_0 + WPtempx * x_11_0_1 + ABtemp * 2 * (x_4_0_0 -  CDcom * x_4_0_1);
                                QUICKDouble x_29_0_0 = Ptempx * x_18_0_0 + WPtempx * x_18_0_1;
                                QUICKDouble x_30_0_0 = Ptempy * x_15_0_0 + WPtempy * x_15_0_1 + ABtemp * 2 * (x_5_0_0 -  CDcom * x_5_0_1);
                                QUICKDouble x_31_0_0 = Ptempy * x_19_0_0 + WPtempy * x_19_0_1;
                                QUICKDouble x_32_0_0 = Ptempx * x_17_0_0 + WPtempx * x_17_0_1 + ABtemp * 3 * (x_7_0_0 -  CDcom * x_7_0_1);
                                QUICKDouble x_33_0_0 = Ptempy * x_18_0_0 + WPtempy * x_18_0_1 + ABtemp * 3 * (x_8_0_0 -  CDcom * x_8_0_1);
                                QUICKDouble x_34_0_0 = Ptempz * x_19_0_0 + WPtempz * x_19_0_1 + ABtemp * 3 * (x_9_0_0 -  CDcom * x_9_0_1);
                                // Subroutine for L =            4  B =            0 , m=           1
                                QUICKDouble x_20_0_1 = Ptempx * x_12_0_1 + WPtempx * x_12_0_2 + ABtemp * (x_8_0_1 -  CDcom * x_8_0_2);
                                QUICKDouble x_21_0_1 = Ptempx * x_14_0_1 + WPtempx * x_14_0_2 + ABtemp * (x_9_0_1 -  CDcom * x_9_0_2);
                                QUICKDouble x_22_0_1 = Ptempy * x_16_0_1 + WPtempy * x_16_0_2 + ABtemp * (x_9_0_1 -  CDcom * x_9_0_2);
                                QUICKDouble x_23_0_1 = Ptempx * x_10_0_1 + WPtempx * x_10_0_2 + ABtemp * (x_5_0_1 -  CDcom * x_5_0_2);
                                QUICKDouble x_24_0_1 = Ptempx * x_15_0_1 + WPtempx * x_15_0_2;
                                QUICKDouble x_25_0_1 = Ptempx * x_16_0_1 + WPtempx * x_16_0_2;
                                QUICKDouble x_26_0_1 = Ptempx * x_13_0_1 + WPtempx * x_13_0_2 + ABtemp * 2 * (x_6_0_1 -  CDcom * x_6_0_2);
                                QUICKDouble x_27_0_1 = Ptempx * x_19_0_1 + WPtempx * x_19_0_2;
                                QUICKDouble x_28_0_1 = Ptempx * x_11_0_1 + WPtempx * x_11_0_2 + ABtemp * 2 * (x_4_0_1 -  CDcom * x_4_0_2);
                                QUICKDouble x_29_0_1 = Ptempx * x_18_0_1 + WPtempx * x_18_0_2;
                                QUICKDouble x_30_0_1 = Ptempy * x_15_0_1 + WPtempy * x_15_0_2 + ABtemp * 2 * (x_5_0_1 -  CDcom * x_5_0_2);
                                QUICKDouble x_31_0_1 = Ptempy * x_19_0_1 + WPtempy * x_19_0_2;
                                QUICKDouble x_32_0_1 = Ptempx * x_17_0_1 + WPtempx * x_17_0_2 + ABtemp * 3 * (x_7_0_1 -  CDcom * x_7_0_2);
                                QUICKDouble x_33_0_1 = Ptempy * x_18_0_1 + WPtempy * x_18_0_2 + ABtemp * 3 * (x_8_0_1 -  CDcom * x_8_0_2);
                                QUICKDouble x_34_0_1 = Ptempz * x_19_0_1 + WPtempz * x_19_0_2 + ABtemp * 3 * (x_9_0_1 -  CDcom * x_9_0_2);
                                // Subroutine for L =            4  B =            0 , m=           2
                                QUICKDouble x_20_0_2 = Ptempx * x_12_0_2 + WPtempx * x_12_0_3 + ABtemp * (x_8_0_2 -  CDcom * x_8_0_3);
                                QUICKDouble x_21_0_2 = Ptempx * x_14_0_2 + WPtempx * x_14_0_3 + ABtemp * (x_9_0_2 -  CDcom * x_9_0_3);
                                QUICKDouble x_22_0_2 = Ptempy * x_16_0_2 + WPtempy * x_16_0_3 + ABtemp * (x_9_0_2 -  CDcom * x_9_0_3);
                                QUICKDouble x_23_0_2 = Ptempx * x_10_0_2 + WPtempx * x_10_0_3 + ABtemp * (x_5_0_2 -  CDcom * x_5_0_3);
                                QUICKDouble x_24_0_2 = Ptempx * x_15_0_2 + WPtempx * x_15_0_3;
                                QUICKDouble x_25_0_2 = Ptempx * x_16_0_2 + WPtempx * x_16_0_3;
                                QUICKDouble x_26_0_2 = Ptempx * x_13_0_2 + WPtempx * x_13_0_3 + ABtemp * 2 * (x_6_0_2 -  CDcom * x_6_0_3);
                                QUICKDouble x_27_0_2 = Ptempx * x_19_0_2 + WPtempx * x_19_0_3;
                                QUICKDouble x_28_0_2 = Ptempx * x_11_0_2 + WPtempx * x_11_0_3 + ABtemp * 2 * (x_4_0_2 -  CDcom * x_4_0_3);
                                QUICKDouble x_29_0_2 = Ptempx * x_18_0_2 + WPtempx * x_18_0_3;
                                QUICKDouble x_30_0_2 = Ptempy * x_15_0_2 + WPtempy * x_15_0_3 + ABtemp * 2 * (x_5_0_2 -  CDcom * x_5_0_3);
                                QUICKDouble x_31_0_2 = Ptempy * x_19_0_2 + WPtempy * x_19_0_3;
                                QUICKDouble x_32_0_2 = Ptempx * x_17_0_2 + WPtempx * x_17_0_3 + ABtemp * 3 * (x_7_0_2 -  CDcom * x_7_0_3);
                                QUICKDouble x_33_0_2 = Ptempy * x_18_0_2 + WPtempy * x_18_0_3 + ABtemp * 3 * (x_8_0_2 -  CDcom * x_8_0_3);
                                QUICKDouble x_34_0_2 = Ptempz * x_19_0_2 + WPtempz * x_19_0_3 + ABtemp * 3 * (x_9_0_2 -  CDcom * x_9_0_3);
                                // Subroutine for L =            4  B =            0 , m=           3
                                QUICKDouble x_20_0_3 = Ptempx * x_12_0_3 + WPtempx * x_12_0_4 + ABtemp * (x_8_0_3 -  CDcom * x_8_0_4);
                                QUICKDouble x_21_0_3 = Ptempx * x_14_0_3 + WPtempx * x_14_0_4 + ABtemp * (x_9_0_3 -  CDcom * x_9_0_4);
                                QUICKDouble x_22_0_3 = Ptempy * x_16_0_3 + WPtempy * x_16_0_4 + ABtemp * (x_9_0_3 -  CDcom * x_9_0_4);
                                QUICKDouble x_23_0_3 = Ptempx * x_10_0_3 + WPtempx * x_10_0_4 + ABtemp * (x_5_0_3 -  CDcom * x_5_0_4);
                                QUICKDouble x_24_0_3 = Ptempx * x_15_0_3 + WPtempx * x_15_0_4;
                                QUICKDouble x_25_0_3 = Ptempx * x_16_0_3 + WPtempx * x_16_0_4;
                                QUICKDouble x_26_0_3 = Ptempx * x_13_0_3 + WPtempx * x_13_0_4 + ABtemp * 2 * (x_6_0_3 -  CDcom * x_6_0_4);
                                QUICKDouble x_27_0_3 = Ptempx * x_19_0_3 + WPtempx * x_19_0_4;
                                QUICKDouble x_28_0_3 = Ptempx * x_11_0_3 + WPtempx * x_11_0_4 + ABtemp * 2 * (x_4_0_3 -  CDcom * x_4_0_4);
                                QUICKDouble x_29_0_3 = Ptempx * x_18_0_3 + WPtempx * x_18_0_4;
                                QUICKDouble x_30_0_3 = Ptempy * x_15_0_3 + WPtempy * x_15_0_4 + ABtemp * 2 * (x_5_0_3 -  CDcom * x_5_0_4);
                                QUICKDouble x_31_0_3 = Ptempy * x_19_0_3 + WPtempy * x_19_0_4;
                                QUICKDouble x_32_0_3 = Ptempx * x_17_0_3 + WPtempx * x_17_0_4 + ABtemp * 3 * (x_7_0_3 -  CDcom * x_7_0_4);
                                QUICKDouble x_33_0_3 = Ptempy * x_18_0_3 + WPtempy * x_18_0_4 + ABtemp * 3 * (x_8_0_3 -  CDcom * x_8_0_4);
                                QUICKDouble x_34_0_3 = Ptempz * x_19_0_3 + WPtempz * x_19_0_4 + ABtemp * 3 * (x_9_0_3 -  CDcom * x_9_0_4);
                                // Subroutine for B =            4  L =            1 , m=           0
                                QUICKDouble x_20_1_0 = Qtempx * x_20_0_0 + WQtempx * x_20_0_1 + 2 * ABCDtemp * x_12_0_1;
                                QUICKDouble x_21_1_0 = Qtempx * x_21_0_0 + WQtempx * x_21_0_1 + 2 * ABCDtemp * x_14_0_1;
                                QUICKDouble x_22_1_0 = Qtempx * x_22_0_0 + WQtempx * x_22_0_1;
                                QUICKDouble x_23_1_0 = Qtempx * x_23_0_0 + WQtempx * x_23_0_1 + 2 * ABCDtemp * x_10_0_1;
                                QUICKDouble x_24_1_0 = Qtempx * x_24_0_0 + WQtempx * x_24_0_1 + ABCDtemp * x_15_0_1;
                                QUICKDouble x_25_1_0 = Qtempx * x_25_0_0 + WQtempx * x_25_0_1 + ABCDtemp * x_16_0_1;
                                QUICKDouble x_26_1_0 = Qtempx * x_26_0_0 + WQtempx * x_26_0_1 + 3 * ABCDtemp * x_13_0_1;
                                QUICKDouble x_27_1_0 = Qtempx * x_27_0_0 + WQtempx * x_27_0_1 + ABCDtemp * x_19_0_1;
                                QUICKDouble x_28_1_0 = Qtempx * x_28_0_0 + WQtempx * x_28_0_1 + 3 * ABCDtemp * x_11_0_1;
                                QUICKDouble x_29_1_0 = Qtempx * x_29_0_0 + WQtempx * x_29_0_1 + ABCDtemp * x_18_0_1;
                                QUICKDouble x_30_1_0 = Qtempx * x_30_0_0 + WQtempx * x_30_0_1;
                                QUICKDouble x_31_1_0 = Qtempx * x_31_0_0 + WQtempx * x_31_0_1;
                                QUICKDouble x_32_1_0 = Qtempx * x_32_0_0 + WQtempx * x_32_0_1 + 4 * ABCDtemp * x_17_0_1;
                                QUICKDouble x_33_1_0 = Qtempx * x_33_0_0 + WQtempx * x_33_0_1;
                                QUICKDouble x_34_1_0 = Qtempx * x_34_0_0 + WQtempx * x_34_0_1;
                                QUICKDouble x_20_2_0 = Qtempy * x_20_0_0 + WQtempy * x_20_0_1 + 2 * ABCDtemp * x_11_0_1;
                                QUICKDouble x_21_2_0 = Qtempy * x_21_0_0 + WQtempy * x_21_0_1;
                                QUICKDouble x_22_2_0 = Qtempy * x_22_0_0 + WQtempy * x_22_0_1 + 2 * ABCDtemp * x_16_0_1;
                                QUICKDouble x_23_2_0 = Qtempy * x_23_0_0 + WQtempy * x_23_0_1 + ABCDtemp * x_13_0_1;
                                QUICKDouble x_24_2_0 = Qtempy * x_24_0_0 + WQtempy * x_24_0_1 + 2 * ABCDtemp * x_10_0_1;
                                QUICKDouble x_25_2_0 = Qtempy * x_25_0_0 + WQtempy * x_25_0_1 + ABCDtemp * x_14_0_1;
                                QUICKDouble x_26_2_0 = Qtempy * x_26_0_0 + WQtempy * x_26_0_1;
                                QUICKDouble x_27_2_0 = Qtempy * x_27_0_0 + WQtempy * x_27_0_1;
                                QUICKDouble x_28_2_0 = Qtempy * x_28_0_0 + WQtempy * x_28_0_1 + ABCDtemp * x_17_0_1;
                                QUICKDouble x_29_2_0 = Qtempy * x_29_0_0 + WQtempy * x_29_0_1 + 3 * ABCDtemp * x_12_0_1;
                                QUICKDouble x_30_2_0 = Qtempy * x_30_0_0 + WQtempy * x_30_0_1 + 3 * ABCDtemp * x_15_0_1;
                                QUICKDouble x_31_2_0 = Qtempy * x_31_0_0 + WQtempy * x_31_0_1 + ABCDtemp * x_19_0_1;
                                QUICKDouble x_32_2_0 = Qtempy * x_32_0_0 + WQtempy * x_32_0_1;
                                QUICKDouble x_33_2_0 = Qtempy * x_33_0_0 + WQtempy * x_33_0_1 + 4 * ABCDtemp * x_18_0_1;
                                QUICKDouble x_34_2_0 = Qtempy * x_34_0_0 + WQtempy * x_34_0_1;
                                QUICKDouble x_20_3_0 = Qtempz * x_20_0_0 + WQtempz * x_20_0_1;
                                QUICKDouble x_21_3_0 = Qtempz * x_21_0_0 + WQtempz * x_21_0_1 + 2 * ABCDtemp * x_13_0_1;
                                QUICKDouble x_22_3_0 = Qtempz * x_22_0_0 + WQtempz * x_22_0_1 + 2 * ABCDtemp * x_15_0_1;
                                QUICKDouble x_23_3_0 = Qtempz * x_23_0_0 + WQtempz * x_23_0_1 + ABCDtemp * x_11_0_1;
                                QUICKDouble x_24_3_0 = Qtempz * x_24_0_0 + WQtempz * x_24_0_1 + ABCDtemp * x_12_0_1;
                                QUICKDouble x_25_3_0 = Qtempz * x_25_0_0 + WQtempz * x_25_0_1 + 2 * ABCDtemp * x_10_0_1;
                                QUICKDouble x_26_3_0 = Qtempz * x_26_0_0 + WQtempz * x_26_0_1 + ABCDtemp * x_17_0_1;
                                QUICKDouble x_27_3_0 = Qtempz * x_27_0_0 + WQtempz * x_27_0_1 + 3 * ABCDtemp * x_14_0_1;
                                QUICKDouble x_28_3_0 = Qtempz * x_28_0_0 + WQtempz * x_28_0_1;
                                QUICKDouble x_29_3_0 = Qtempz * x_29_0_0 + WQtempz * x_29_0_1;
                                QUICKDouble x_30_3_0 = Qtempz * x_30_0_0 + WQtempz * x_30_0_1 + ABCDtemp * x_18_0_1;
                                QUICKDouble x_31_3_0 = Qtempz * x_31_0_0 + WQtempz * x_31_0_1 + 3 * ABCDtemp * x_16_0_1;
                                QUICKDouble x_32_3_0 = Qtempz * x_32_0_0 + WQtempz * x_32_0_1;
                                QUICKDouble x_33_3_0 = Qtempz * x_33_0_0 + WQtempz * x_33_0_1;
                                QUICKDouble x_34_3_0 = Qtempz * x_34_0_0 + WQtempz * x_34_0_1 + 4 * ABCDtemp * x_19_0_1;
                                
                                // Subroutine for B =            4  L =            1 , m=           1
                                QUICKDouble x_20_1_1 = Qtempx * x_20_0_1 + WQtempx * x_20_0_2 + 2 * ABCDtemp * x_12_0_2;
                                QUICKDouble x_21_1_1 = Qtempx * x_21_0_1 + WQtempx * x_21_0_2 + 2 * ABCDtemp * x_14_0_2;
                                QUICKDouble x_22_1_1 = Qtempx * x_22_0_1 + WQtempx * x_22_0_2;
                                QUICKDouble x_23_1_1 = Qtempx * x_23_0_1 + WQtempx * x_23_0_2 + 2 * ABCDtemp * x_10_0_2;
                                QUICKDouble x_24_1_1 = Qtempx * x_24_0_1 + WQtempx * x_24_0_2 + ABCDtemp * x_15_0_2;
                                QUICKDouble x_25_1_1 = Qtempx * x_25_0_1 + WQtempx * x_25_0_2 + ABCDtemp * x_16_0_2;
                                QUICKDouble x_26_1_1 = Qtempx * x_26_0_1 + WQtempx * x_26_0_2 + 3 * ABCDtemp * x_13_0_2;
                                QUICKDouble x_27_1_1 = Qtempx * x_27_0_1 + WQtempx * x_27_0_2 + ABCDtemp * x_19_0_2;
                                QUICKDouble x_28_1_1 = Qtempx * x_28_0_1 + WQtempx * x_28_0_2 + 3 * ABCDtemp * x_11_0_2;
                                QUICKDouble x_29_1_1 = Qtempx * x_29_0_1 + WQtempx * x_29_0_2 + ABCDtemp * x_18_0_2;
                                QUICKDouble x_30_1_1 = Qtempx * x_30_0_1 + WQtempx * x_30_0_2;
                                QUICKDouble x_31_1_1 = Qtempx * x_31_0_1 + WQtempx * x_31_0_2;
                                QUICKDouble x_32_1_1 = Qtempx * x_32_0_1 + WQtempx * x_32_0_2 + 4 * ABCDtemp * x_17_0_2;
                                QUICKDouble x_33_1_1 = Qtempx * x_33_0_1 + WQtempx * x_33_0_2;
                                QUICKDouble x_34_1_1 = Qtempx * x_34_0_1 + WQtempx * x_34_0_2;
                                QUICKDouble x_20_2_1 = Qtempy * x_20_0_1 + WQtempy * x_20_0_2 + 2 * ABCDtemp * x_11_0_2;
                                QUICKDouble x_21_2_1 = Qtempy * x_21_0_1 + WQtempy * x_21_0_2;
                                QUICKDouble x_22_2_1 = Qtempy * x_22_0_1 + WQtempy * x_22_0_2 + 2 * ABCDtemp * x_16_0_2;
                                QUICKDouble x_23_2_1 = Qtempy * x_23_0_1 + WQtempy * x_23_0_2 + ABCDtemp * x_13_0_2;
                                QUICKDouble x_24_2_1 = Qtempy * x_24_0_1 + WQtempy * x_24_0_2 + 2 * ABCDtemp * x_10_0_2;
                                QUICKDouble x_25_2_1 = Qtempy * x_25_0_1 + WQtempy * x_25_0_2 + ABCDtemp * x_14_0_2;
                                QUICKDouble x_26_2_1 = Qtempy * x_26_0_1 + WQtempy * x_26_0_2;
                                QUICKDouble x_27_2_1 = Qtempy * x_27_0_1 + WQtempy * x_27_0_2;
                                QUICKDouble x_28_2_1 = Qtempy * x_28_0_1 + WQtempy * x_28_0_2 + ABCDtemp * x_17_0_2;
                                QUICKDouble x_29_2_1 = Qtempy * x_29_0_1 + WQtempy * x_29_0_2 + 3 * ABCDtemp * x_12_0_2;
                                QUICKDouble x_30_2_1 = Qtempy * x_30_0_1 + WQtempy * x_30_0_2 + 3 * ABCDtemp * x_15_0_2;
                                QUICKDouble x_31_2_1 = Qtempy * x_31_0_1 + WQtempy * x_31_0_2 + ABCDtemp * x_19_0_2;
                                QUICKDouble x_32_2_1 = Qtempy * x_32_0_1 + WQtempy * x_32_0_2;
                                QUICKDouble x_33_2_1 = Qtempy * x_33_0_1 + WQtempy * x_33_0_2 + 4 * ABCDtemp * x_18_0_2;
                                QUICKDouble x_34_2_1 = Qtempy * x_34_0_1 + WQtempy * x_34_0_2;
                                QUICKDouble x_20_3_1 = Qtempz * x_20_0_1 + WQtempz * x_20_0_2;
                                QUICKDouble x_21_3_1 = Qtempz * x_21_0_1 + WQtempz * x_21_0_2 + 2 * ABCDtemp * x_13_0_2;
                                QUICKDouble x_22_3_1 = Qtempz * x_22_0_1 + WQtempz * x_22_0_2 + 2 * ABCDtemp * x_15_0_2;
                                QUICKDouble x_23_3_1 = Qtempz * x_23_0_1 + WQtempz * x_23_0_2 + ABCDtemp * x_11_0_2;
                                QUICKDouble x_24_3_1 = Qtempz * x_24_0_1 + WQtempz * x_24_0_2 + ABCDtemp * x_12_0_2;
                                QUICKDouble x_25_3_1 = Qtempz * x_25_0_1 + WQtempz * x_25_0_2 + 2 * ABCDtemp * x_10_0_2;
                                QUICKDouble x_26_3_1 = Qtempz * x_26_0_1 + WQtempz * x_26_0_2 + ABCDtemp * x_17_0_2;
                                QUICKDouble x_27_3_1 = Qtempz * x_27_0_1 + WQtempz * x_27_0_2 + 3 * ABCDtemp * x_14_0_2;
                                QUICKDouble x_28_3_1 = Qtempz * x_28_0_1 + WQtempz * x_28_0_2;
                                QUICKDouble x_29_3_1 = Qtempz * x_29_0_1 + WQtempz * x_29_0_2;
                                QUICKDouble x_30_3_1 = Qtempz * x_30_0_1 + WQtempz * x_30_0_2 + ABCDtemp * x_18_0_2;
                                QUICKDouble x_31_3_1 = Qtempz * x_31_0_1 + WQtempz * x_31_0_2 + 3 * ABCDtemp * x_16_0_2;
                                QUICKDouble x_32_3_1 = Qtempz * x_32_0_1 + WQtempz * x_32_0_2;
                                QUICKDouble x_33_3_1 = Qtempz * x_33_0_1 + WQtempz * x_33_0_2;
                                QUICKDouble x_34_3_1 = Qtempz * x_34_0_1 + WQtempz * x_34_0_2 + 4 * ABCDtemp * x_19_0_2;
                                
                                // Subroutine for B =            4  L =            1 , m=           2
                                QUICKDouble x_20_1_2 = Qtempx * x_20_0_2 + WQtempx * x_20_0_3 + 2 * ABCDtemp * x_12_0_3;
                                QUICKDouble x_21_1_2 = Qtempx * x_21_0_2 + WQtempx * x_21_0_3 + 2 * ABCDtemp * x_14_0_3;
                                QUICKDouble x_22_1_2 = Qtempx * x_22_0_2 + WQtempx * x_22_0_3;
                                QUICKDouble x_23_1_2 = Qtempx * x_23_0_2 + WQtempx * x_23_0_3 + 2 * ABCDtemp * x_10_0_3;
                                QUICKDouble x_24_1_2 = Qtempx * x_24_0_2 + WQtempx * x_24_0_3 + ABCDtemp * x_15_0_3;
                                QUICKDouble x_25_1_2 = Qtempx * x_25_0_2 + WQtempx * x_25_0_3 + ABCDtemp * x_16_0_3;
                                QUICKDouble x_26_1_2 = Qtempx * x_26_0_2 + WQtempx * x_26_0_3 + 3 * ABCDtemp * x_13_0_3;
                                QUICKDouble x_27_1_2 = Qtempx * x_27_0_2 + WQtempx * x_27_0_3 + ABCDtemp * x_19_0_3;
                                QUICKDouble x_28_1_2 = Qtempx * x_28_0_2 + WQtempx * x_28_0_3 + 3 * ABCDtemp * x_11_0_3;
                                QUICKDouble x_29_1_2 = Qtempx * x_29_0_2 + WQtempx * x_29_0_3 + ABCDtemp * x_18_0_3;
                                QUICKDouble x_30_1_2 = Qtempx * x_30_0_2 + WQtempx * x_30_0_3;
                                QUICKDouble x_31_1_2 = Qtempx * x_31_0_2 + WQtempx * x_31_0_3;
                                QUICKDouble x_32_1_2 = Qtempx * x_32_0_2 + WQtempx * x_32_0_3 + 4 * ABCDtemp * x_17_0_3;
                                QUICKDouble x_33_1_2 = Qtempx * x_33_0_2 + WQtempx * x_33_0_3;
                                QUICKDouble x_34_1_2 = Qtempx * x_34_0_2 + WQtempx * x_34_0_3;
                                QUICKDouble x_20_2_2 = Qtempy * x_20_0_2 + WQtempy * x_20_0_3 + 2 * ABCDtemp * x_11_0_3;
                                QUICKDouble x_21_2_2 = Qtempy * x_21_0_2 + WQtempy * x_21_0_3;
                                QUICKDouble x_22_2_2 = Qtempy * x_22_0_2 + WQtempy * x_22_0_3 + 2 * ABCDtemp * x_16_0_3;
                                QUICKDouble x_23_2_2 = Qtempy * x_23_0_2 + WQtempy * x_23_0_3 + ABCDtemp * x_13_0_3;
                                QUICKDouble x_24_2_2 = Qtempy * x_24_0_2 + WQtempy * x_24_0_3 + 2 * ABCDtemp * x_10_0_3;
                                QUICKDouble x_25_2_2 = Qtempy * x_25_0_2 + WQtempy * x_25_0_3 + ABCDtemp * x_14_0_3;
                                QUICKDouble x_26_2_2 = Qtempy * x_26_0_2 + WQtempy * x_26_0_3;
                                QUICKDouble x_27_2_2 = Qtempy * x_27_0_2 + WQtempy * x_27_0_3;
                                QUICKDouble x_28_2_2 = Qtempy * x_28_0_2 + WQtempy * x_28_0_3 + ABCDtemp * x_17_0_3;
                                QUICKDouble x_29_2_2 = Qtempy * x_29_0_2 + WQtempy * x_29_0_3 + 3 * ABCDtemp * x_12_0_3;
                                QUICKDouble x_30_2_2 = Qtempy * x_30_0_2 + WQtempy * x_30_0_3 + 3 * ABCDtemp * x_15_0_3;
                                QUICKDouble x_31_2_2 = Qtempy * x_31_0_2 + WQtempy * x_31_0_3 + ABCDtemp * x_19_0_3;
                                QUICKDouble x_32_2_2 = Qtempy * x_32_0_2 + WQtempy * x_32_0_3;
                                QUICKDouble x_33_2_2 = Qtempy * x_33_0_2 + WQtempy * x_33_0_3 + 4 * ABCDtemp * x_18_0_3;
                                QUICKDouble x_34_2_2 = Qtempy * x_34_0_2 + WQtempy * x_34_0_3;
                                QUICKDouble x_20_3_2 = Qtempz * x_20_0_2 + WQtempz * x_20_0_3;
                                QUICKDouble x_21_3_2 = Qtempz * x_21_0_2 + WQtempz * x_21_0_3 + 2 * ABCDtemp * x_13_0_3;
                                QUICKDouble x_22_3_2 = Qtempz * x_22_0_2 + WQtempz * x_22_0_3 + 2 * ABCDtemp * x_15_0_3;
                                QUICKDouble x_23_3_2 = Qtempz * x_23_0_2 + WQtempz * x_23_0_3 + ABCDtemp * x_11_0_3;
                                QUICKDouble x_24_3_2 = Qtempz * x_24_0_2 + WQtempz * x_24_0_3 + ABCDtemp * x_12_0_3;
                                QUICKDouble x_25_3_2 = Qtempz * x_25_0_2 + WQtempz * x_25_0_3 + 2 * ABCDtemp * x_10_0_3;
                                QUICKDouble x_26_3_2 = Qtempz * x_26_0_2 + WQtempz * x_26_0_3 + ABCDtemp * x_17_0_3;
                                QUICKDouble x_27_3_2 = Qtempz * x_27_0_2 + WQtempz * x_27_0_3 + 3 * ABCDtemp * x_14_0_3;
                                QUICKDouble x_28_3_2 = Qtempz * x_28_0_2 + WQtempz * x_28_0_3;
                                QUICKDouble x_29_3_2 = Qtempz * x_29_0_2 + WQtempz * x_29_0_3;
                                QUICKDouble x_30_3_2 = Qtempz * x_30_0_2 + WQtempz * x_30_0_3 + ABCDtemp * x_18_0_3;
                                QUICKDouble x_31_3_2 = Qtempz * x_31_0_2 + WQtempz * x_31_0_3 + 3 * ABCDtemp * x_16_0_3;
                                QUICKDouble x_32_3_2 = Qtempz * x_32_0_2 + WQtempz * x_32_0_3;
                                QUICKDouble x_33_3_2 = Qtempz * x_33_0_2 + WQtempz * x_33_0_3;
                                QUICKDouble x_34_3_2 = Qtempz * x_34_0_2 + WQtempz * x_34_0_3 + 4 * ABCDtemp * x_19_0_3;
                                
                                // Subroutine for B =            4  L =            2 , m=           0
                                QUICKDouble x_20_4_0 = Qtempx * x_20_2_0 + WQtempx * x_20_2_1 + 2 * ABCDtemp * x_12_2_1;
                                QUICKDouble x_21_4_0 = Qtempx * x_21_2_0 + WQtempx * x_21_2_1 + 2 * ABCDtemp * x_14_2_1;
                                QUICKDouble x_22_4_0 = Qtempx * x_22_2_0 + WQtempx * x_22_2_1;
                                QUICKDouble x_23_4_0 = Qtempx * x_23_2_0 + WQtempx * x_23_2_1 + 2 * ABCDtemp * x_10_2_1;
                                QUICKDouble x_24_4_0 = Qtempx * x_24_2_0 + WQtempx * x_24_2_1 + ABCDtemp * x_15_2_1;
                                QUICKDouble x_25_4_0 = Qtempx * x_25_2_0 + WQtempx * x_25_2_1 + ABCDtemp * x_16_2_1;
                                QUICKDouble x_26_4_0 = Qtempx * x_26_2_0 + WQtempx * x_26_2_1 + 3 * ABCDtemp * x_13_2_1;
                                QUICKDouble x_27_4_0 = Qtempx * x_27_2_0 + WQtempx * x_27_2_1 + ABCDtemp * x_19_2_1;
                                QUICKDouble x_28_4_0 = Qtempx * x_28_2_0 + WQtempx * x_28_2_1 + 3 * ABCDtemp * x_11_2_1;
                                QUICKDouble x_29_4_0 = Qtempx * x_29_2_0 + WQtempx * x_29_2_1 + ABCDtemp * x_18_2_1;
                                QUICKDouble x_30_4_0 = Qtempx * x_30_2_0 + WQtempx * x_30_2_1;
                                QUICKDouble x_31_4_0 = Qtempx * x_31_2_0 + WQtempx * x_31_2_1;
                                QUICKDouble x_32_4_0 = Qtempx * x_32_2_0 + WQtempx * x_32_2_1 + 4 * ABCDtemp * x_17_2_1;
                                QUICKDouble x_33_4_0 = Qtempx * x_33_2_0 + WQtempx * x_33_2_1;
                                QUICKDouble x_34_4_0 = Qtempx * x_34_2_0 + WQtempx * x_34_2_1;
                                QUICKDouble x_20_5_0 = Qtempy * x_20_3_0 + WQtempy * x_20_3_1 + 2 * ABCDtemp * x_11_3_1;
                                QUICKDouble x_21_5_0 = Qtempy * x_21_3_0 + WQtempy * x_21_3_1;
                                QUICKDouble x_22_5_0 = Qtempy * x_22_3_0 + WQtempy * x_22_3_1 + 2 * ABCDtemp * x_16_3_1;
                                QUICKDouble x_23_5_0 = Qtempy * x_23_3_0 + WQtempy * x_23_3_1 + ABCDtemp * x_13_3_1;
                                QUICKDouble x_24_5_0 = Qtempy * x_24_3_0 + WQtempy * x_24_3_1 + 2 * ABCDtemp * x_10_3_1;
                                QUICKDouble x_25_5_0 = Qtempy * x_25_3_0 + WQtempy * x_25_3_1 + ABCDtemp * x_14_3_1;
                                QUICKDouble x_26_5_0 = Qtempy * x_26_3_0 + WQtempy * x_26_3_1;
                                QUICKDouble x_27_5_0 = Qtempy * x_27_3_0 + WQtempy * x_27_3_1;
                                QUICKDouble x_28_5_0 = Qtempy * x_28_3_0 + WQtempy * x_28_3_1 + ABCDtemp * x_17_3_1;
                                QUICKDouble x_29_5_0 = Qtempy * x_29_3_0 + WQtempy * x_29_3_1 + 3 * ABCDtemp * x_12_3_1;
                                QUICKDouble x_30_5_0 = Qtempy * x_30_3_0 + WQtempy * x_30_3_1 + 3 * ABCDtemp * x_15_3_1;
                                QUICKDouble x_31_5_0 = Qtempy * x_31_3_0 + WQtempy * x_31_3_1 + ABCDtemp * x_19_3_1;
                                QUICKDouble x_32_5_0 = Qtempy * x_32_3_0 + WQtempy * x_32_3_1;
                                QUICKDouble x_33_5_0 = Qtempy * x_33_3_0 + WQtempy * x_33_3_1 + 4 * ABCDtemp * x_18_3_1;
                                QUICKDouble x_34_5_0 = Qtempy * x_34_3_0 + WQtempy * x_34_3_1;
                                QUICKDouble x_20_6_0 = Qtempx * x_20_3_0 + WQtempx * x_20_3_1 + 2 * ABCDtemp * x_12_3_1;
                                QUICKDouble x_21_6_0 = Qtempx * x_21_3_0 + WQtempx * x_21_3_1 + 2 * ABCDtemp * x_14_3_1;
                                QUICKDouble x_22_6_0 = Qtempx * x_22_3_0 + WQtempx * x_22_3_1;
                                QUICKDouble x_23_6_0 = Qtempx * x_23_3_0 + WQtempx * x_23_3_1 + 2 * ABCDtemp * x_10_3_1;
                                QUICKDouble x_24_6_0 = Qtempx * x_24_3_0 + WQtempx * x_24_3_1 + ABCDtemp * x_15_3_1;
                                QUICKDouble x_25_6_0 = Qtempx * x_25_3_0 + WQtempx * x_25_3_1 + ABCDtemp * x_16_3_1;
                                QUICKDouble x_26_6_0 = Qtempx * x_26_3_0 + WQtempx * x_26_3_1 + 3 * ABCDtemp * x_13_3_1;
                                QUICKDouble x_27_6_0 = Qtempx * x_27_3_0 + WQtempx * x_27_3_1 + ABCDtemp * x_19_3_1;
                                QUICKDouble x_28_6_0 = Qtempx * x_28_3_0 + WQtempx * x_28_3_1 + 3 * ABCDtemp * x_11_3_1;
                                QUICKDouble x_29_6_0 = Qtempx * x_29_3_0 + WQtempx * x_29_3_1 + ABCDtemp * x_18_3_1;
                                QUICKDouble x_30_6_0 = Qtempx * x_30_3_0 + WQtempx * x_30_3_1;
                                QUICKDouble x_31_6_0 = Qtempx * x_31_3_0 + WQtempx * x_31_3_1;
                                QUICKDouble x_32_6_0 = Qtempx * x_32_3_0 + WQtempx * x_32_3_1 + 4 * ABCDtemp * x_17_3_1;
                                QUICKDouble x_33_6_0 = Qtempx * x_33_3_0 + WQtempx * x_33_3_1;
                                QUICKDouble x_34_6_0 = Qtempx * x_34_3_0 + WQtempx * x_34_3_1;
                                QUICKDouble x_20_7_0 = Qtempx * x_20_1_0 + WQtempx * x_20_1_1 + CDtemp * (x_20_0_0 -  ABcom * x_20_0_1) + 2 * ABCDtemp * x_12_1_1;
                                QUICKDouble x_21_7_0 = Qtempx * x_21_1_0 + WQtempx * x_21_1_1 + CDtemp * (x_21_0_0 -  ABcom * x_21_0_1) + 2 * ABCDtemp * x_14_1_1;
                                QUICKDouble x_22_7_0 = Qtempx * x_22_1_0 + WQtempx * x_22_1_1 + CDtemp * (x_22_0_0 -  ABcom * x_22_0_1);
                                QUICKDouble x_23_7_0 = Qtempx * x_23_1_0 + WQtempx * x_23_1_1 + CDtemp * (x_23_0_0 -  ABcom * x_23_0_1) + 2 * ABCDtemp * x_10_1_1;
                                QUICKDouble x_24_7_0 = Qtempx * x_24_1_0 + WQtempx * x_24_1_1 + CDtemp * (x_24_0_0 -  ABcom * x_24_0_1) + ABCDtemp * x_15_1_1;
                                QUICKDouble x_25_7_0 = Qtempx * x_25_1_0 + WQtempx * x_25_1_1 + CDtemp * (x_25_0_0 -  ABcom * x_25_0_1) + ABCDtemp * x_16_1_1;
                                QUICKDouble x_26_7_0 = Qtempx * x_26_1_0 + WQtempx * x_26_1_1 + CDtemp * (x_26_0_0 -  ABcom * x_26_0_1) + 3 * ABCDtemp * x_13_1_1;
                                QUICKDouble x_27_7_0 = Qtempx * x_27_1_0 + WQtempx * x_27_1_1 + CDtemp * (x_27_0_0 -  ABcom * x_27_0_1) + ABCDtemp * x_19_1_1;
                                QUICKDouble x_28_7_0 = Qtempx * x_28_1_0 + WQtempx * x_28_1_1 + CDtemp * (x_28_0_0 -  ABcom * x_28_0_1) + 3 * ABCDtemp * x_11_1_1;
                                QUICKDouble x_29_7_0 = Qtempx * x_29_1_0 + WQtempx * x_29_1_1 + CDtemp * (x_29_0_0 -  ABcom * x_29_0_1) + ABCDtemp * x_18_1_1;
                                QUICKDouble x_30_7_0 = Qtempx * x_30_1_0 + WQtempx * x_30_1_1 + CDtemp * (x_30_0_0 -  ABcom * x_30_0_1);
                                QUICKDouble x_31_7_0 = Qtempx * x_31_1_0 + WQtempx * x_31_1_1 + CDtemp * (x_31_0_0 -  ABcom * x_31_0_1);
                                QUICKDouble x_32_7_0 = Qtempx * x_32_1_0 + WQtempx * x_32_1_1 + CDtemp * (x_32_0_0 -  ABcom * x_32_0_1) + 4 * ABCDtemp * x_17_1_1;
                                QUICKDouble x_33_7_0 = Qtempx * x_33_1_0 + WQtempx * x_33_1_1 + CDtemp * (x_33_0_0 -  ABcom * x_33_0_1);
                                QUICKDouble x_34_7_0 = Qtempx * x_34_1_0 + WQtempx * x_34_1_1 + CDtemp * (x_34_0_0 -  ABcom * x_34_0_1);
                                QUICKDouble x_20_8_0 = Qtempy * x_20_2_0 + WQtempy * x_20_2_1 + CDtemp * (x_20_0_0 -  ABcom * x_20_0_1) + 2 * ABCDtemp * x_11_2_1;
                                QUICKDouble x_21_8_0 = Qtempy * x_21_2_0 + WQtempy * x_21_2_1 + CDtemp * (x_21_0_0 -  ABcom * x_21_0_1);
                                QUICKDouble x_22_8_0 = Qtempy * x_22_2_0 + WQtempy * x_22_2_1 + CDtemp * (x_22_0_0 -  ABcom * x_22_0_1) + 2 * ABCDtemp * x_16_2_1;
                                QUICKDouble x_23_8_0 = Qtempy * x_23_2_0 + WQtempy * x_23_2_1 + CDtemp * (x_23_0_0 -  ABcom * x_23_0_1) + ABCDtemp * x_13_2_1;
                                QUICKDouble x_24_8_0 = Qtempy * x_24_2_0 + WQtempy * x_24_2_1 + CDtemp * (x_24_0_0 -  ABcom * x_24_0_1) + 2 * ABCDtemp * x_10_2_1;
                                QUICKDouble x_25_8_0 = Qtempy * x_25_2_0 + WQtempy * x_25_2_1 + CDtemp * (x_25_0_0 -  ABcom * x_25_0_1) + ABCDtemp * x_14_2_1;
                                QUICKDouble x_26_8_0 = Qtempy * x_26_2_0 + WQtempy * x_26_2_1 + CDtemp * (x_26_0_0 -  ABcom * x_26_0_1);
                                QUICKDouble x_27_8_0 = Qtempy * x_27_2_0 + WQtempy * x_27_2_1 + CDtemp * (x_27_0_0 -  ABcom * x_27_0_1);
                                QUICKDouble x_28_8_0 = Qtempy * x_28_2_0 + WQtempy * x_28_2_1 + CDtemp * (x_28_0_0 -  ABcom * x_28_0_1) + ABCDtemp * x_17_2_1;
                                QUICKDouble x_29_8_0 = Qtempy * x_29_2_0 + WQtempy * x_29_2_1 + CDtemp * (x_29_0_0 -  ABcom * x_29_0_1) + 3 * ABCDtemp * x_12_2_1;
                                QUICKDouble x_30_8_0 = Qtempy * x_30_2_0 + WQtempy * x_30_2_1 + CDtemp * (x_30_0_0 -  ABcom * x_30_0_1) + 3 * ABCDtemp * x_15_2_1;
                                QUICKDouble x_31_8_0 = Qtempy * x_31_2_0 + WQtempy * x_31_2_1 + CDtemp * (x_31_0_0 -  ABcom * x_31_0_1) + ABCDtemp * x_19_2_1;
                                QUICKDouble x_32_8_0 = Qtempy * x_32_2_0 + WQtempy * x_32_2_1 + CDtemp * (x_32_0_0 -  ABcom * x_32_0_1);
                                QUICKDouble x_33_8_0 = Qtempy * x_33_2_0 + WQtempy * x_33_2_1 + CDtemp * (x_33_0_0 -  ABcom * x_33_0_1) + 4 * ABCDtemp * x_18_2_1;
                                QUICKDouble x_34_8_0 = Qtempy * x_34_2_0 + WQtempy * x_34_2_1 + CDtemp * (x_34_0_0 -  ABcom * x_34_0_1);
                                QUICKDouble x_20_9_0 = Qtempz * x_20_3_0 + WQtempz * x_20_3_1 + CDtemp * (x_20_0_0 -  ABcom * x_20_0_1);
                                QUICKDouble x_21_9_0 = Qtempz * x_21_3_0 + WQtempz * x_21_3_1 + CDtemp * (x_21_0_0 -  ABcom * x_21_0_1) + 2 * ABCDtemp * x_13_3_1;
                                QUICKDouble x_22_9_0 = Qtempz * x_22_3_0 + WQtempz * x_22_3_1 + CDtemp * (x_22_0_0 -  ABcom * x_22_0_1) + 2 * ABCDtemp * x_15_3_1;
                                QUICKDouble x_23_9_0 = Qtempz * x_23_3_0 + WQtempz * x_23_3_1 + CDtemp * (x_23_0_0 -  ABcom * x_23_0_1) + ABCDtemp * x_11_3_1;
                                QUICKDouble x_24_9_0 = Qtempz * x_24_3_0 + WQtempz * x_24_3_1 + CDtemp * (x_24_0_0 -  ABcom * x_24_0_1) + ABCDtemp * x_12_3_1;
                                QUICKDouble x_25_9_0 = Qtempz * x_25_3_0 + WQtempz * x_25_3_1 + CDtemp * (x_25_0_0 -  ABcom * x_25_0_1) + 2 * ABCDtemp * x_10_3_1;
                                QUICKDouble x_26_9_0 = Qtempz * x_26_3_0 + WQtempz * x_26_3_1 + CDtemp * (x_26_0_0 -  ABcom * x_26_0_1) + ABCDtemp * x_17_3_1;
                                QUICKDouble x_27_9_0 = Qtempz * x_27_3_0 + WQtempz * x_27_3_1 + CDtemp * (x_27_0_0 -  ABcom * x_27_0_1) + 3 * ABCDtemp * x_14_3_1;
                                QUICKDouble x_28_9_0 = Qtempz * x_28_3_0 + WQtempz * x_28_3_1 + CDtemp * (x_28_0_0 -  ABcom * x_28_0_1);
                                QUICKDouble x_29_9_0 = Qtempz * x_29_3_0 + WQtempz * x_29_3_1 + CDtemp * (x_29_0_0 -  ABcom * x_29_0_1);
                                QUICKDouble x_30_9_0 = Qtempz * x_30_3_0 + WQtempz * x_30_3_1 + CDtemp * (x_30_0_0 -  ABcom * x_30_0_1) + ABCDtemp * x_18_3_1;
                                QUICKDouble x_31_9_0 = Qtempz * x_31_3_0 + WQtempz * x_31_3_1 + CDtemp * (x_31_0_0 -  ABcom * x_31_0_1) + 3 * ABCDtemp * x_16_3_1;
                                QUICKDouble x_32_9_0 = Qtempz * x_32_3_0 + WQtempz * x_32_3_1 + CDtemp * (x_32_0_0 -  ABcom * x_32_0_1);
                                QUICKDouble x_33_9_0 = Qtempz * x_33_3_0 + WQtempz * x_33_3_1 + CDtemp * (x_33_0_0 -  ABcom * x_33_0_1);
                                QUICKDouble x_34_9_0 = Qtempz * x_34_3_0 + WQtempz * x_34_3_1 + CDtemp * (x_34_0_0 -  ABcom * x_34_0_1) + 4 * ABCDtemp * x_19_3_1;
                                
                                // Subroutine for B =            4  L =            2 , m=           1
                                QUICKDouble x_20_4_1 = Qtempx * x_20_2_1 + WQtempx * x_20_2_2 + 2 * ABCDtemp * x_12_2_2;
                                QUICKDouble x_21_4_1 = Qtempx * x_21_2_1 + WQtempx * x_21_2_2 + 2 * ABCDtemp * x_14_2_2;
                                QUICKDouble x_22_4_1 = Qtempx * x_22_2_1 + WQtempx * x_22_2_2;
                                QUICKDouble x_23_4_1 = Qtempx * x_23_2_1 + WQtempx * x_23_2_2 + 2 * ABCDtemp * x_10_2_2;
                                QUICKDouble x_24_4_1 = Qtempx * x_24_2_1 + WQtempx * x_24_2_2 + ABCDtemp * x_15_2_2;
                                QUICKDouble x_25_4_1 = Qtempx * x_25_2_1 + WQtempx * x_25_2_2 + ABCDtemp * x_16_2_2;
                                QUICKDouble x_26_4_1 = Qtempx * x_26_2_1 + WQtempx * x_26_2_2 + 3 * ABCDtemp * x_13_2_2;
                                QUICKDouble x_27_4_1 = Qtempx * x_27_2_1 + WQtempx * x_27_2_2 + ABCDtemp * x_19_2_2;
                                QUICKDouble x_28_4_1 = Qtempx * x_28_2_1 + WQtempx * x_28_2_2 + 3 * ABCDtemp * x_11_2_2;
                                QUICKDouble x_29_4_1 = Qtempx * x_29_2_1 + WQtempx * x_29_2_2 + ABCDtemp * x_18_2_2;
                                QUICKDouble x_30_4_1 = Qtempx * x_30_2_1 + WQtempx * x_30_2_2;
                                QUICKDouble x_31_4_1 = Qtempx * x_31_2_1 + WQtempx * x_31_2_2;
                                QUICKDouble x_32_4_1 = Qtempx * x_32_2_1 + WQtempx * x_32_2_2 + 4 * ABCDtemp * x_17_2_2;
                                QUICKDouble x_33_4_1 = Qtempx * x_33_2_1 + WQtempx * x_33_2_2;
                                QUICKDouble x_34_4_1 = Qtempx * x_34_2_1 + WQtempx * x_34_2_2;
                                QUICKDouble x_20_5_1 = Qtempy * x_20_3_1 + WQtempy * x_20_3_2 + 2 * ABCDtemp * x_11_3_2;
                                QUICKDouble x_21_5_1 = Qtempy * x_21_3_1 + WQtempy * x_21_3_2;
                                QUICKDouble x_22_5_1 = Qtempy * x_22_3_1 + WQtempy * x_22_3_2 + 2 * ABCDtemp * x_16_3_2;
                                QUICKDouble x_23_5_1 = Qtempy * x_23_3_1 + WQtempy * x_23_3_2 + ABCDtemp * x_13_3_2;
                                QUICKDouble x_24_5_1 = Qtempy * x_24_3_1 + WQtempy * x_24_3_2 + 2 * ABCDtemp * x_10_3_2;
                                QUICKDouble x_25_5_1 = Qtempy * x_25_3_1 + WQtempy * x_25_3_2 + ABCDtemp * x_14_3_2;
                                QUICKDouble x_26_5_1 = Qtempy * x_26_3_1 + WQtempy * x_26_3_2;
                                QUICKDouble x_27_5_1 = Qtempy * x_27_3_1 + WQtempy * x_27_3_2;
                                QUICKDouble x_28_5_1 = Qtempy * x_28_3_1 + WQtempy * x_28_3_2 + ABCDtemp * x_17_3_2;
                                QUICKDouble x_29_5_1 = Qtempy * x_29_3_1 + WQtempy * x_29_3_2 + 3 * ABCDtemp * x_12_3_2;
                                QUICKDouble x_30_5_1 = Qtempy * x_30_3_1 + WQtempy * x_30_3_2 + 3 * ABCDtemp * x_15_3_2;
                                QUICKDouble x_31_5_1 = Qtempy * x_31_3_1 + WQtempy * x_31_3_2 + ABCDtemp * x_19_3_2;
                                QUICKDouble x_32_5_1 = Qtempy * x_32_3_1 + WQtempy * x_32_3_2;
                                QUICKDouble x_33_5_1 = Qtempy * x_33_3_1 + WQtempy * x_33_3_2 + 4 * ABCDtemp * x_18_3_2;
                                QUICKDouble x_34_5_1 = Qtempy * x_34_3_1 + WQtempy * x_34_3_2;
                                QUICKDouble x_20_6_1 = Qtempx * x_20_3_1 + WQtempx * x_20_3_2 + 2 * ABCDtemp * x_12_3_2;
                                QUICKDouble x_21_6_1 = Qtempx * x_21_3_1 + WQtempx * x_21_3_2 + 2 * ABCDtemp * x_14_3_2;
                                QUICKDouble x_22_6_1 = Qtempx * x_22_3_1 + WQtempx * x_22_3_2;
                                QUICKDouble x_23_6_1 = Qtempx * x_23_3_1 + WQtempx * x_23_3_2 + 2 * ABCDtemp * x_10_3_2;
                                QUICKDouble x_24_6_1 = Qtempx * x_24_3_1 + WQtempx * x_24_3_2 + ABCDtemp * x_15_3_2;
                                QUICKDouble x_25_6_1 = Qtempx * x_25_3_1 + WQtempx * x_25_3_2 + ABCDtemp * x_16_3_2;
                                QUICKDouble x_26_6_1 = Qtempx * x_26_3_1 + WQtempx * x_26_3_2 + 3 * ABCDtemp * x_13_3_2;
                                QUICKDouble x_27_6_1 = Qtempx * x_27_3_1 + WQtempx * x_27_3_2 + ABCDtemp * x_19_3_2;
                                QUICKDouble x_28_6_1 = Qtempx * x_28_3_1 + WQtempx * x_28_3_2 + 3 * ABCDtemp * x_11_3_2;
                                QUICKDouble x_29_6_1 = Qtempx * x_29_3_1 + WQtempx * x_29_3_2 + ABCDtemp * x_18_3_2;
                                QUICKDouble x_30_6_1 = Qtempx * x_30_3_1 + WQtempx * x_30_3_2;
                                QUICKDouble x_31_6_1 = Qtempx * x_31_3_1 + WQtempx * x_31_3_2;
                                QUICKDouble x_32_6_1 = Qtempx * x_32_3_1 + WQtempx * x_32_3_2 + 4 * ABCDtemp * x_17_3_2;
                                QUICKDouble x_33_6_1 = Qtempx * x_33_3_1 + WQtempx * x_33_3_2;
                                QUICKDouble x_34_6_1 = Qtempx * x_34_3_1 + WQtempx * x_34_3_2;
                                QUICKDouble x_20_7_1 = Qtempx * x_20_1_1 + WQtempx * x_20_1_2 + CDtemp * (x_20_0_1 -  ABcom * x_20_0_2) + 2 * ABCDtemp * x_12_1_2;
                                QUICKDouble x_21_7_1 = Qtempx * x_21_1_1 + WQtempx * x_21_1_2 + CDtemp * (x_21_0_1 -  ABcom * x_21_0_2) + 2 * ABCDtemp * x_14_1_2;
                                QUICKDouble x_22_7_1 = Qtempx * x_22_1_1 + WQtempx * x_22_1_2 + CDtemp * (x_22_0_1 -  ABcom * x_22_0_2);
                                QUICKDouble x_23_7_1 = Qtempx * x_23_1_1 + WQtempx * x_23_1_2 + CDtemp * (x_23_0_1 -  ABcom * x_23_0_2) + 2 * ABCDtemp * x_10_1_2;
                                QUICKDouble x_24_7_1 = Qtempx * x_24_1_1 + WQtempx * x_24_1_2 + CDtemp * (x_24_0_1 -  ABcom * x_24_0_2) + ABCDtemp * x_15_1_2;
                                QUICKDouble x_25_7_1 = Qtempx * x_25_1_1 + WQtempx * x_25_1_2 + CDtemp * (x_25_0_1 -  ABcom * x_25_0_2) + ABCDtemp * x_16_1_2;
                                QUICKDouble x_26_7_1 = Qtempx * x_26_1_1 + WQtempx * x_26_1_2 + CDtemp * (x_26_0_1 -  ABcom * x_26_0_2) + 3 * ABCDtemp * x_13_1_2;
                                QUICKDouble x_27_7_1 = Qtempx * x_27_1_1 + WQtempx * x_27_1_2 + CDtemp * (x_27_0_1 -  ABcom * x_27_0_2) + ABCDtemp * x_19_1_2;
                                QUICKDouble x_28_7_1 = Qtempx * x_28_1_1 + WQtempx * x_28_1_2 + CDtemp * (x_28_0_1 -  ABcom * x_28_0_2) + 3 * ABCDtemp * x_11_1_2;
                                QUICKDouble x_29_7_1 = Qtempx * x_29_1_1 + WQtempx * x_29_1_2 + CDtemp * (x_29_0_1 -  ABcom * x_29_0_2) + ABCDtemp * x_18_1_2;
                                QUICKDouble x_30_7_1 = Qtempx * x_30_1_1 + WQtempx * x_30_1_2 + CDtemp * (x_30_0_1 -  ABcom * x_30_0_2);
                                QUICKDouble x_31_7_1 = Qtempx * x_31_1_1 + WQtempx * x_31_1_2 + CDtemp * (x_31_0_1 -  ABcom * x_31_0_2);
                                QUICKDouble x_32_7_1 = Qtempx * x_32_1_1 + WQtempx * x_32_1_2 + CDtemp * (x_32_0_1 -  ABcom * x_32_0_2) + 4 * ABCDtemp * x_17_1_2;
                                QUICKDouble x_33_7_1 = Qtempx * x_33_1_1 + WQtempx * x_33_1_2 + CDtemp * (x_33_0_1 -  ABcom * x_33_0_2);
                                QUICKDouble x_34_7_1 = Qtempx * x_34_1_1 + WQtempx * x_34_1_2 + CDtemp * (x_34_0_1 -  ABcom * x_34_0_2);
                                QUICKDouble x_20_8_1 = Qtempy * x_20_2_1 + WQtempy * x_20_2_2 + CDtemp * (x_20_0_1 -  ABcom * x_20_0_2) + 2 * ABCDtemp * x_11_2_2;
                                QUICKDouble x_21_8_1 = Qtempy * x_21_2_1 + WQtempy * x_21_2_2 + CDtemp * (x_21_0_1 -  ABcom * x_21_0_2);
                                QUICKDouble x_22_8_1 = Qtempy * x_22_2_1 + WQtempy * x_22_2_2 + CDtemp * (x_22_0_1 -  ABcom * x_22_0_2) + 2 * ABCDtemp * x_16_2_2;
                                QUICKDouble x_23_8_1 = Qtempy * x_23_2_1 + WQtempy * x_23_2_2 + CDtemp * (x_23_0_1 -  ABcom * x_23_0_2) + ABCDtemp * x_13_2_2;
                                QUICKDouble x_24_8_1 = Qtempy * x_24_2_1 + WQtempy * x_24_2_2 + CDtemp * (x_24_0_1 -  ABcom * x_24_0_2) + 2 * ABCDtemp * x_10_2_2;
                                QUICKDouble x_25_8_1 = Qtempy * x_25_2_1 + WQtempy * x_25_2_2 + CDtemp * (x_25_0_1 -  ABcom * x_25_0_2) + ABCDtemp * x_14_2_2;
                                QUICKDouble x_26_8_1 = Qtempy * x_26_2_1 + WQtempy * x_26_2_2 + CDtemp * (x_26_0_1 -  ABcom * x_26_0_2);
                                QUICKDouble x_27_8_1 = Qtempy * x_27_2_1 + WQtempy * x_27_2_2 + CDtemp * (x_27_0_1 -  ABcom * x_27_0_2);
                                QUICKDouble x_28_8_1 = Qtempy * x_28_2_1 + WQtempy * x_28_2_2 + CDtemp * (x_28_0_1 -  ABcom * x_28_0_2) + ABCDtemp * x_17_2_2;
                                QUICKDouble x_29_8_1 = Qtempy * x_29_2_1 + WQtempy * x_29_2_2 + CDtemp * (x_29_0_1 -  ABcom * x_29_0_2) + 3 * ABCDtemp * x_12_2_2;
                                QUICKDouble x_30_8_1 = Qtempy * x_30_2_1 + WQtempy * x_30_2_2 + CDtemp * (x_30_0_1 -  ABcom * x_30_0_2) + 3 * ABCDtemp * x_15_2_2;
                                QUICKDouble x_31_8_1 = Qtempy * x_31_2_1 + WQtempy * x_31_2_2 + CDtemp * (x_31_0_1 -  ABcom * x_31_0_2) + ABCDtemp * x_19_2_2;
                                QUICKDouble x_32_8_1 = Qtempy * x_32_2_1 + WQtempy * x_32_2_2 + CDtemp * (x_32_0_1 -  ABcom * x_32_0_2);
                                QUICKDouble x_33_8_1 = Qtempy * x_33_2_1 + WQtempy * x_33_2_2 + CDtemp * (x_33_0_1 -  ABcom * x_33_0_2) + 4 * ABCDtemp * x_18_2_2;
                                QUICKDouble x_34_8_1 = Qtempy * x_34_2_1 + WQtempy * x_34_2_2 + CDtemp * (x_34_0_1 -  ABcom * x_34_0_2);
                                QUICKDouble x_20_9_1 = Qtempz * x_20_3_1 + WQtempz * x_20_3_2 + CDtemp * (x_20_0_1 -  ABcom * x_20_0_2);
                                QUICKDouble x_21_9_1 = Qtempz * x_21_3_1 + WQtempz * x_21_3_2 + CDtemp * (x_21_0_1 -  ABcom * x_21_0_2) + 2 * ABCDtemp * x_13_3_2;
                                QUICKDouble x_22_9_1 = Qtempz * x_22_3_1 + WQtempz * x_22_3_2 + CDtemp * (x_22_0_1 -  ABcom * x_22_0_2) + 2 * ABCDtemp * x_15_3_2;
                                QUICKDouble x_23_9_1 = Qtempz * x_23_3_1 + WQtempz * x_23_3_2 + CDtemp * (x_23_0_1 -  ABcom * x_23_0_2) + ABCDtemp * x_11_3_2;
                                QUICKDouble x_24_9_1 = Qtempz * x_24_3_1 + WQtempz * x_24_3_2 + CDtemp * (x_24_0_1 -  ABcom * x_24_0_2) + ABCDtemp * x_12_3_2;
                                QUICKDouble x_25_9_1 = Qtempz * x_25_3_1 + WQtempz * x_25_3_2 + CDtemp * (x_25_0_1 -  ABcom * x_25_0_2) + 2 * ABCDtemp * x_10_3_2;
                                QUICKDouble x_26_9_1 = Qtempz * x_26_3_1 + WQtempz * x_26_3_2 + CDtemp * (x_26_0_1 -  ABcom * x_26_0_2) + ABCDtemp * x_17_3_2;
                                QUICKDouble x_27_9_1 = Qtempz * x_27_3_1 + WQtempz * x_27_3_2 + CDtemp * (x_27_0_1 -  ABcom * x_27_0_2) + 3 * ABCDtemp * x_14_3_2;
                                QUICKDouble x_28_9_1 = Qtempz * x_28_3_1 + WQtempz * x_28_3_2 + CDtemp * (x_28_0_1 -  ABcom * x_28_0_2);
                                QUICKDouble x_29_9_1 = Qtempz * x_29_3_1 + WQtempz * x_29_3_2 + CDtemp * (x_29_0_1 -  ABcom * x_29_0_2);
                                QUICKDouble x_30_9_1 = Qtempz * x_30_3_1 + WQtempz * x_30_3_2 + CDtemp * (x_30_0_1 -  ABcom * x_30_0_2) + ABCDtemp * x_18_3_2;
                                QUICKDouble x_31_9_1 = Qtempz * x_31_3_1 + WQtempz * x_31_3_2 + CDtemp * (x_31_0_1 -  ABcom * x_31_0_2) + 3 * ABCDtemp * x_16_3_2;
                                QUICKDouble x_32_9_1 = Qtempz * x_32_3_1 + WQtempz * x_32_3_2 + CDtemp * (x_32_0_1 -  ABcom * x_32_0_2);
                                QUICKDouble x_33_9_1 = Qtempz * x_33_3_1 + WQtempz * x_33_3_2 + CDtemp * (x_33_0_1 -  ABcom * x_33_0_2);
                                QUICKDouble x_34_9_1 = Qtempz * x_34_3_1 + WQtempz * x_34_3_2 + CDtemp * (x_34_0_1 -  ABcom * x_34_0_2) + 4 * ABCDtemp * x_19_3_2;
                                
                                // Subroutine for B =            4  L =            3 , m=           0
                                QUICKDouble x_20_10_0 = Qtempx * x_20_5_0 + WQtempx * x_20_5_1 + 2 * ABCDtemp * x_12_5_1;
                                QUICKDouble x_21_10_0 = Qtempx * x_21_5_0 + WQtempx * x_21_5_1 + 2 * ABCDtemp * x_14_5_1;
                                QUICKDouble x_22_10_0 = Qtempx * x_22_5_0 + WQtempx * x_22_5_1;
                                QUICKDouble x_23_10_0 = Qtempx * x_23_5_0 + WQtempx * x_23_5_1 + 2 * ABCDtemp * x_10_5_1;
                                QUICKDouble x_24_10_0 = Qtempx * x_24_5_0 + WQtempx * x_24_5_1 + ABCDtemp * x_15_5_1;
                                QUICKDouble x_25_10_0 = Qtempx * x_25_5_0 + WQtempx * x_25_5_1 + ABCDtemp * x_16_5_1;
                                QUICKDouble x_26_10_0 = Qtempx * x_26_5_0 + WQtempx * x_26_5_1 + 3 * ABCDtemp * x_13_5_1;
                                QUICKDouble x_27_10_0 = Qtempx * x_27_5_0 + WQtempx * x_27_5_1 + ABCDtemp * x_19_5_1;
                                QUICKDouble x_28_10_0 = Qtempx * x_28_5_0 + WQtempx * x_28_5_1 + 3 * ABCDtemp * x_11_5_1;
                                QUICKDouble x_29_10_0 = Qtempx * x_29_5_0 + WQtempx * x_29_5_1 + ABCDtemp * x_18_5_1;
                                QUICKDouble x_30_10_0 = Qtempx * x_30_5_0 + WQtempx * x_30_5_1;
                                QUICKDouble x_31_10_0 = Qtempx * x_31_5_0 + WQtempx * x_31_5_1;
                                QUICKDouble x_32_10_0 = Qtempx * x_32_5_0 + WQtempx * x_32_5_1 + 4 * ABCDtemp * x_17_5_1;
                                QUICKDouble x_33_10_0 = Qtempx * x_33_5_0 + WQtempx * x_33_5_1;
                                QUICKDouble x_34_10_0 = Qtempx * x_34_5_0 + WQtempx * x_34_5_1;
                                QUICKDouble x_20_11_0 = Qtempx * x_20_4_0 + WQtempx * x_20_4_1 + CDtemp * (x_20_2_0 -  ABcom * x_20_2_1) + 2 * ABCDtemp * x_12_4_1;
                                QUICKDouble x_21_11_0 = Qtempx * x_21_4_0 + WQtempx * x_21_4_1 + CDtemp * (x_21_2_0 -  ABcom * x_21_2_1) + 2 * ABCDtemp * x_14_4_1;
                                QUICKDouble x_22_11_0 = Qtempx * x_22_4_0 + WQtempx * x_22_4_1 + CDtemp * (x_22_2_0 -  ABcom * x_22_2_1);
                                QUICKDouble x_23_11_0 = Qtempx * x_23_4_0 + WQtempx * x_23_4_1 + CDtemp * (x_23_2_0 -  ABcom * x_23_2_1) + 2 * ABCDtemp * x_10_4_1;
                                QUICKDouble x_24_11_0 = Qtempx * x_24_4_0 + WQtempx * x_24_4_1 + CDtemp * (x_24_2_0 -  ABcom * x_24_2_1) + ABCDtemp * x_15_4_1;
                                QUICKDouble x_25_11_0 = Qtempx * x_25_4_0 + WQtempx * x_25_4_1 + CDtemp * (x_25_2_0 -  ABcom * x_25_2_1) + ABCDtemp * x_16_4_1;
                                QUICKDouble x_26_11_0 = Qtempx * x_26_4_0 + WQtempx * x_26_4_1 + CDtemp * (x_26_2_0 -  ABcom * x_26_2_1) + 3 * ABCDtemp * x_13_4_1;
                                QUICKDouble x_27_11_0 = Qtempx * x_27_4_0 + WQtempx * x_27_4_1 + CDtemp * (x_27_2_0 -  ABcom * x_27_2_1) + ABCDtemp * x_19_4_1;
                                QUICKDouble x_28_11_0 = Qtempx * x_28_4_0 + WQtempx * x_28_4_1 + CDtemp * (x_28_2_0 -  ABcom * x_28_2_1) + 3 * ABCDtemp * x_11_4_1;
                                QUICKDouble x_29_11_0 = Qtempx * x_29_4_0 + WQtempx * x_29_4_1 + CDtemp * (x_29_2_0 -  ABcom * x_29_2_1) + ABCDtemp * x_18_4_1;
                                QUICKDouble x_30_11_0 = Qtempx * x_30_4_0 + WQtempx * x_30_4_1 + CDtemp * (x_30_2_0 -  ABcom * x_30_2_1);
                                QUICKDouble x_31_11_0 = Qtempx * x_31_4_0 + WQtempx * x_31_4_1 + CDtemp * (x_31_2_0 -  ABcom * x_31_2_1);
                                QUICKDouble x_32_11_0 = Qtempx * x_32_4_0 + WQtempx * x_32_4_1 + CDtemp * (x_32_2_0 -  ABcom * x_32_2_1) + 4 * ABCDtemp * x_17_4_1;
                                QUICKDouble x_33_11_0 = Qtempx * x_33_4_0 + WQtempx * x_33_4_1 + CDtemp * (x_33_2_0 -  ABcom * x_33_2_1);
                                QUICKDouble x_34_11_0 = Qtempx * x_34_4_0 + WQtempx * x_34_4_1 + CDtemp * (x_34_2_0 -  ABcom * x_34_2_1);
                                QUICKDouble x_20_12_0 = Qtempx * x_20_8_0 + WQtempx * x_20_8_1 + 2 * ABCDtemp * x_12_8_1;
                                QUICKDouble x_21_12_0 = Qtempx * x_21_8_0 + WQtempx * x_21_8_1 + 2 * ABCDtemp * x_14_8_1;
                                QUICKDouble x_22_12_0 = Qtempx * x_22_8_0 + WQtempx * x_22_8_1;
                                QUICKDouble x_23_12_0 = Qtempx * x_23_8_0 + WQtempx * x_23_8_1 + 2 * ABCDtemp * x_10_8_1;
                                QUICKDouble x_24_12_0 = Qtempx * x_24_8_0 + WQtempx * x_24_8_1 + ABCDtemp * x_15_8_1;
                                QUICKDouble x_25_12_0 = Qtempx * x_25_8_0 + WQtempx * x_25_8_1 + ABCDtemp * x_16_8_1;
                                QUICKDouble x_26_12_0 = Qtempx * x_26_8_0 + WQtempx * x_26_8_1 + 3 * ABCDtemp * x_13_8_1;
                                QUICKDouble x_27_12_0 = Qtempx * x_27_8_0 + WQtempx * x_27_8_1 + ABCDtemp * x_19_8_1;
                                QUICKDouble x_28_12_0 = Qtempx * x_28_8_0 + WQtempx * x_28_8_1 + 3 * ABCDtemp * x_11_8_1;
                                QUICKDouble x_29_12_0 = Qtempx * x_29_8_0 + WQtempx * x_29_8_1 + ABCDtemp * x_18_8_1;
                                QUICKDouble x_30_12_0 = Qtempx * x_30_8_0 + WQtempx * x_30_8_1;
                                QUICKDouble x_31_12_0 = Qtempx * x_31_8_0 + WQtempx * x_31_8_1;
                                QUICKDouble x_32_12_0 = Qtempx * x_32_8_0 + WQtempx * x_32_8_1 + 4 * ABCDtemp * x_17_8_1;
                                QUICKDouble x_33_12_0 = Qtempx * x_33_8_0 + WQtempx * x_33_8_1;
                                QUICKDouble x_34_12_0 = Qtempx * x_34_8_0 + WQtempx * x_34_8_1;
                                QUICKDouble x_20_13_0 = Qtempx * x_20_6_0 + WQtempx * x_20_6_1 + CDtemp * (x_20_3_0 -  ABcom * x_20_3_1) + 2 * ABCDtemp * x_12_6_1;
                                QUICKDouble x_21_13_0 = Qtempx * x_21_6_0 + WQtempx * x_21_6_1 + CDtemp * (x_21_3_0 -  ABcom * x_21_3_1) + 2 * ABCDtemp * x_14_6_1;
                                QUICKDouble x_22_13_0 = Qtempx * x_22_6_0 + WQtempx * x_22_6_1 + CDtemp * (x_22_3_0 -  ABcom * x_22_3_1);
                                QUICKDouble x_23_13_0 = Qtempx * x_23_6_0 + WQtempx * x_23_6_1 + CDtemp * (x_23_3_0 -  ABcom * x_23_3_1) + 2 * ABCDtemp * x_10_6_1;
                                QUICKDouble x_24_13_0 = Qtempx * x_24_6_0 + WQtempx * x_24_6_1 + CDtemp * (x_24_3_0 -  ABcom * x_24_3_1) + ABCDtemp * x_15_6_1;
                                QUICKDouble x_25_13_0 = Qtempx * x_25_6_0 + WQtempx * x_25_6_1 + CDtemp * (x_25_3_0 -  ABcom * x_25_3_1) + ABCDtemp * x_16_6_1;
                                QUICKDouble x_26_13_0 = Qtempx * x_26_6_0 + WQtempx * x_26_6_1 + CDtemp * (x_26_3_0 -  ABcom * x_26_3_1) + 3 * ABCDtemp * x_13_6_1;
                                QUICKDouble x_27_13_0 = Qtempx * x_27_6_0 + WQtempx * x_27_6_1 + CDtemp * (x_27_3_0 -  ABcom * x_27_3_1) + ABCDtemp * x_19_6_1;
                                QUICKDouble x_28_13_0 = Qtempx * x_28_6_0 + WQtempx * x_28_6_1 + CDtemp * (x_28_3_0 -  ABcom * x_28_3_1) + 3 * ABCDtemp * x_11_6_1;
                                QUICKDouble x_29_13_0 = Qtempx * x_29_6_0 + WQtempx * x_29_6_1 + CDtemp * (x_29_3_0 -  ABcom * x_29_3_1) + ABCDtemp * x_18_6_1;
                                QUICKDouble x_30_13_0 = Qtempx * x_30_6_0 + WQtempx * x_30_6_1 + CDtemp * (x_30_3_0 -  ABcom * x_30_3_1);
                                QUICKDouble x_31_13_0 = Qtempx * x_31_6_0 + WQtempx * x_31_6_1 + CDtemp * (x_31_3_0 -  ABcom * x_31_3_1);
                                QUICKDouble x_32_13_0 = Qtempx * x_32_6_0 + WQtempx * x_32_6_1 + CDtemp * (x_32_3_0 -  ABcom * x_32_3_1) + 4 * ABCDtemp * x_17_6_1;
                                QUICKDouble x_33_13_0 = Qtempx * x_33_6_0 + WQtempx * x_33_6_1 + CDtemp * (x_33_3_0 -  ABcom * x_33_3_1);
                                QUICKDouble x_34_13_0 = Qtempx * x_34_6_0 + WQtempx * x_34_6_1 + CDtemp * (x_34_3_0 -  ABcom * x_34_3_1);
                                QUICKDouble x_20_14_0 = Qtempx * x_20_9_0 + WQtempx * x_20_9_1 + 2 * ABCDtemp * x_12_9_1;
                                QUICKDouble x_21_14_0 = Qtempx * x_21_9_0 + WQtempx * x_21_9_1 + 2 * ABCDtemp * x_14_9_1;
                                QUICKDouble x_22_14_0 = Qtempx * x_22_9_0 + WQtempx * x_22_9_1;
                                QUICKDouble x_23_14_0 = Qtempx * x_23_9_0 + WQtempx * x_23_9_1 + 2 * ABCDtemp * x_10_9_1;
                                QUICKDouble x_24_14_0 = Qtempx * x_24_9_0 + WQtempx * x_24_9_1 + ABCDtemp * x_15_9_1;
                                QUICKDouble x_25_14_0 = Qtempx * x_25_9_0 + WQtempx * x_25_9_1 + ABCDtemp * x_16_9_1;
                                QUICKDouble x_26_14_0 = Qtempx * x_26_9_0 + WQtempx * x_26_9_1 + 3 * ABCDtemp * x_13_9_1;
                                QUICKDouble x_27_14_0 = Qtempx * x_27_9_0 + WQtempx * x_27_9_1 + ABCDtemp * x_19_9_1;
                                QUICKDouble x_28_14_0 = Qtempx * x_28_9_0 + WQtempx * x_28_9_1 + 3 * ABCDtemp * x_11_9_1;
                                QUICKDouble x_29_14_0 = Qtempx * x_29_9_0 + WQtempx * x_29_9_1 + ABCDtemp * x_18_9_1;
                                QUICKDouble x_30_14_0 = Qtempx * x_30_9_0 + WQtempx * x_30_9_1;
                                QUICKDouble x_31_14_0 = Qtempx * x_31_9_0 + WQtempx * x_31_9_1;
                                QUICKDouble x_32_14_0 = Qtempx * x_32_9_0 + WQtempx * x_32_9_1 + 4 * ABCDtemp * x_17_9_1;
                                QUICKDouble x_33_14_0 = Qtempx * x_33_9_0 + WQtempx * x_33_9_1;
                                QUICKDouble x_34_14_0 = Qtempx * x_34_9_0 + WQtempx * x_34_9_1;
                                QUICKDouble x_20_15_0 = Qtempy * x_20_5_0 + WQtempy * x_20_5_1 + CDtemp * (x_20_3_0 -  ABcom * x_20_3_1) + 2 * ABCDtemp * x_11_5_1;
                                QUICKDouble x_21_15_0 = Qtempy * x_21_5_0 + WQtempy * x_21_5_1 + CDtemp * (x_21_3_0 -  ABcom * x_21_3_1);
                                QUICKDouble x_22_15_0 = Qtempy * x_22_5_0 + WQtempy * x_22_5_1 + CDtemp * (x_22_3_0 -  ABcom * x_22_3_1) + 2 * ABCDtemp * x_16_5_1;
                                QUICKDouble x_23_15_0 = Qtempy * x_23_5_0 + WQtempy * x_23_5_1 + CDtemp * (x_23_3_0 -  ABcom * x_23_3_1) + ABCDtemp * x_13_5_1;
                                QUICKDouble x_24_15_0 = Qtempy * x_24_5_0 + WQtempy * x_24_5_1 + CDtemp * (x_24_3_0 -  ABcom * x_24_3_1) + 2 * ABCDtemp * x_10_5_1;
                                QUICKDouble x_25_15_0 = Qtempy * x_25_5_0 + WQtempy * x_25_5_1 + CDtemp * (x_25_3_0 -  ABcom * x_25_3_1) + ABCDtemp * x_14_5_1;
                                QUICKDouble x_26_15_0 = Qtempy * x_26_5_0 + WQtempy * x_26_5_1 + CDtemp * (x_26_3_0 -  ABcom * x_26_3_1);
                                QUICKDouble x_27_15_0 = Qtempy * x_27_5_0 + WQtempy * x_27_5_1 + CDtemp * (x_27_3_0 -  ABcom * x_27_3_1);
                                QUICKDouble x_28_15_0 = Qtempy * x_28_5_0 + WQtempy * x_28_5_1 + CDtemp * (x_28_3_0 -  ABcom * x_28_3_1) + ABCDtemp * x_17_5_1;
                                QUICKDouble x_29_15_0 = Qtempy * x_29_5_0 + WQtempy * x_29_5_1 + CDtemp * (x_29_3_0 -  ABcom * x_29_3_1) + 3 * ABCDtemp * x_12_5_1;
                                QUICKDouble x_30_15_0 = Qtempy * x_30_5_0 + WQtempy * x_30_5_1 + CDtemp * (x_30_3_0 -  ABcom * x_30_3_1) + 3 * ABCDtemp * x_15_5_1;
                                QUICKDouble x_31_15_0 = Qtempy * x_31_5_0 + WQtempy * x_31_5_1 + CDtemp * (x_31_3_0 -  ABcom * x_31_3_1) + ABCDtemp * x_19_5_1;
                                QUICKDouble x_32_15_0 = Qtempy * x_32_5_0 + WQtempy * x_32_5_1 + CDtemp * (x_32_3_0 -  ABcom * x_32_3_1);
                                QUICKDouble x_33_15_0 = Qtempy * x_33_5_0 + WQtempy * x_33_5_1 + CDtemp * (x_33_3_0 -  ABcom * x_33_3_1) + 4 * ABCDtemp * x_18_5_1;
                                QUICKDouble x_34_15_0 = Qtempy * x_34_5_0 + WQtempy * x_34_5_1 + CDtemp * (x_34_3_0 -  ABcom * x_34_3_1);
                                QUICKDouble x_20_16_0 = Qtempy * x_20_9_0 + WQtempy * x_20_9_1 + 2 * ABCDtemp * x_11_9_1;
                                QUICKDouble x_21_16_0 = Qtempy * x_21_9_0 + WQtempy * x_21_9_1;
                                QUICKDouble x_22_16_0 = Qtempy * x_22_9_0 + WQtempy * x_22_9_1 + 2 * ABCDtemp * x_16_9_1;
                                QUICKDouble x_23_16_0 = Qtempy * x_23_9_0 + WQtempy * x_23_9_1 + ABCDtemp * x_13_9_1;
                                QUICKDouble x_24_16_0 = Qtempy * x_24_9_0 + WQtempy * x_24_9_1 + 2 * ABCDtemp * x_10_9_1;
                                QUICKDouble x_25_16_0 = Qtempy * x_25_9_0 + WQtempy * x_25_9_1 + ABCDtemp * x_14_9_1;
                                QUICKDouble x_26_16_0 = Qtempy * x_26_9_0 + WQtempy * x_26_9_1;
                                QUICKDouble x_27_16_0 = Qtempy * x_27_9_0 + WQtempy * x_27_9_1;
                                QUICKDouble x_28_16_0 = Qtempy * x_28_9_0 + WQtempy * x_28_9_1 + ABCDtemp * x_17_9_1;
                                QUICKDouble x_29_16_0 = Qtempy * x_29_9_0 + WQtempy * x_29_9_1 + 3 * ABCDtemp * x_12_9_1;
                                QUICKDouble x_30_16_0 = Qtempy * x_30_9_0 + WQtempy * x_30_9_1 + 3 * ABCDtemp * x_15_9_1;
                                QUICKDouble x_31_16_0 = Qtempy * x_31_9_0 + WQtempy * x_31_9_1 + ABCDtemp * x_19_9_1;
                                QUICKDouble x_32_16_0 = Qtempy * x_32_9_0 + WQtempy * x_32_9_1;
                                QUICKDouble x_33_16_0 = Qtempy * x_33_9_0 + WQtempy * x_33_9_1 + 4 * ABCDtemp * x_18_9_1;
                                QUICKDouble x_34_16_0 = Qtempy * x_34_9_0 + WQtempy * x_34_9_1;
                                QUICKDouble x_20_17_0 = Qtempx * x_20_7_0 + WQtempx * x_20_7_1 + CDtemp * 2 * (x_20_1_0 -  ABcom * x_20_1_1) + 2 * ABCDtemp * x_12_7_1;
                                QUICKDouble x_21_17_0 = Qtempx * x_21_7_0 + WQtempx * x_21_7_1 + CDtemp * 2 * (x_21_1_0 -  ABcom * x_21_1_1) + 2 * ABCDtemp * x_14_7_1;
                                QUICKDouble x_22_17_0 = Qtempx * x_22_7_0 + WQtempx * x_22_7_1 + CDtemp * 2 * (x_22_1_0 -  ABcom * x_22_1_1);
                                QUICKDouble x_23_17_0 = Qtempx * x_23_7_0 + WQtempx * x_23_7_1 + CDtemp * 2 * (x_23_1_0 -  ABcom * x_23_1_1) + 2 * ABCDtemp * x_10_7_1;
                                QUICKDouble x_24_17_0 = Qtempx * x_24_7_0 + WQtempx * x_24_7_1 + CDtemp * 2 * (x_24_1_0 -  ABcom * x_24_1_1) + ABCDtemp * x_15_7_1;
                                QUICKDouble x_25_17_0 = Qtempx * x_25_7_0 + WQtempx * x_25_7_1 + CDtemp * 2 * (x_25_1_0 -  ABcom * x_25_1_1) + ABCDtemp * x_16_7_1;
                                QUICKDouble x_26_17_0 = Qtempx * x_26_7_0 + WQtempx * x_26_7_1 + CDtemp * 2 * (x_26_1_0 -  ABcom * x_26_1_1) + 3 * ABCDtemp * x_13_7_1;
                                QUICKDouble x_27_17_0 = Qtempx * x_27_7_0 + WQtempx * x_27_7_1 + CDtemp * 2 * (x_27_1_0 -  ABcom * x_27_1_1) + ABCDtemp * x_19_7_1;
                                QUICKDouble x_28_17_0 = Qtempx * x_28_7_0 + WQtempx * x_28_7_1 + CDtemp * 2 * (x_28_1_0 -  ABcom * x_28_1_1) + 3 * ABCDtemp * x_11_7_1;
                                QUICKDouble x_29_17_0 = Qtempx * x_29_7_0 + WQtempx * x_29_7_1 + CDtemp * 2 * (x_29_1_0 -  ABcom * x_29_1_1) + ABCDtemp * x_18_7_1;
                                QUICKDouble x_30_17_0 = Qtempx * x_30_7_0 + WQtempx * x_30_7_1 + CDtemp * 2 * (x_30_1_0 -  ABcom * x_30_1_1);
                                QUICKDouble x_31_17_0 = Qtempx * x_31_7_0 + WQtempx * x_31_7_1 + CDtemp * 2 * (x_31_1_0 -  ABcom * x_31_1_1);
                                QUICKDouble x_32_17_0 = Qtempx * x_32_7_0 + WQtempx * x_32_7_1 + CDtemp * 2 * (x_32_1_0 -  ABcom * x_32_1_1) + 4 * ABCDtemp * x_17_7_1;
                                QUICKDouble x_33_17_0 = Qtempx * x_33_7_0 + WQtempx * x_33_7_1 + CDtemp * 2 * (x_33_1_0 -  ABcom * x_33_1_1);
                                QUICKDouble x_34_17_0 = Qtempx * x_34_7_0 + WQtempx * x_34_7_1 + CDtemp * 2 * (x_34_1_0 -  ABcom * x_34_1_1);
                                QUICKDouble x_20_18_0 = Qtempy * x_20_8_0 + WQtempy * x_20_8_1 + CDtemp * 2 * (x_20_2_0 -  ABcom * x_20_2_1) + 2 * ABCDtemp * x_11_8_1;
                                QUICKDouble x_21_18_0 = Qtempy * x_21_8_0 + WQtempy * x_21_8_1 + CDtemp * 2 * (x_21_2_0 -  ABcom * x_21_2_1);
                                QUICKDouble x_22_18_0 = Qtempy * x_22_8_0 + WQtempy * x_22_8_1 + CDtemp * 2 * (x_22_2_0 -  ABcom * x_22_2_1) + 2 * ABCDtemp * x_16_8_1;
                                QUICKDouble x_23_18_0 = Qtempy * x_23_8_0 + WQtempy * x_23_8_1 + CDtemp * 2 * (x_23_2_0 -  ABcom * x_23_2_1) + ABCDtemp * x_13_8_1;
                                QUICKDouble x_24_18_0 = Qtempy * x_24_8_0 + WQtempy * x_24_8_1 + CDtemp * 2 * (x_24_2_0 -  ABcom * x_24_2_1) + 2 * ABCDtemp * x_10_8_1;
                                QUICKDouble x_25_18_0 = Qtempy * x_25_8_0 + WQtempy * x_25_8_1 + CDtemp * 2 * (x_25_2_0 -  ABcom * x_25_2_1) + ABCDtemp * x_14_8_1;
                                QUICKDouble x_26_18_0 = Qtempy * x_26_8_0 + WQtempy * x_26_8_1 + CDtemp * 2 * (x_26_2_0 -  ABcom * x_26_2_1);
                                QUICKDouble x_27_18_0 = Qtempy * x_27_8_0 + WQtempy * x_27_8_1 + CDtemp * 2 * (x_27_2_0 -  ABcom * x_27_2_1);
                                QUICKDouble x_28_18_0 = Qtempy * x_28_8_0 + WQtempy * x_28_8_1 + CDtemp * 2 * (x_28_2_0 -  ABcom * x_28_2_1) + ABCDtemp * x_17_8_1;
                                QUICKDouble x_29_18_0 = Qtempy * x_29_8_0 + WQtempy * x_29_8_1 + CDtemp * 2 * (x_29_2_0 -  ABcom * x_29_2_1) + 3 * ABCDtemp * x_12_8_1;
                                QUICKDouble x_30_18_0 = Qtempy * x_30_8_0 + WQtempy * x_30_8_1 + CDtemp * 2 * (x_30_2_0 -  ABcom * x_30_2_1) + 3 * ABCDtemp * x_15_8_1;
                                QUICKDouble x_31_18_0 = Qtempy * x_31_8_0 + WQtempy * x_31_8_1 + CDtemp * 2 * (x_31_2_0 -  ABcom * x_31_2_1) + ABCDtemp * x_19_8_1;
                                QUICKDouble x_32_18_0 = Qtempy * x_32_8_0 + WQtempy * x_32_8_1 + CDtemp * 2 * (x_32_2_0 -  ABcom * x_32_2_1);
                                QUICKDouble x_33_18_0 = Qtempy * x_33_8_0 + WQtempy * x_33_8_1 + CDtemp * 2 * (x_33_2_0 -  ABcom * x_33_2_1) + 4 * ABCDtemp * x_18_8_1;
                                QUICKDouble x_34_18_0 = Qtempy * x_34_8_0 + WQtempy * x_34_8_1 + CDtemp * 2 * (x_34_2_0 -  ABcom * x_34_2_1);
                                QUICKDouble x_20_19_0 = Qtempz * x_20_9_0 + WQtempz * x_20_9_1 + CDtemp * 2 * (x_20_3_0 -  ABcom * x_20_3_1);
                                QUICKDouble x_21_19_0 = Qtempz * x_21_9_0 + WQtempz * x_21_9_1 + CDtemp * 2 * (x_21_3_0 -  ABcom * x_21_3_1) + 2 * ABCDtemp * x_13_9_1;
                                QUICKDouble x_22_19_0 = Qtempz * x_22_9_0 + WQtempz * x_22_9_1 + CDtemp * 2 * (x_22_3_0 -  ABcom * x_22_3_1) + 2 * ABCDtemp * x_15_9_1;
                                QUICKDouble x_23_19_0 = Qtempz * x_23_9_0 + WQtempz * x_23_9_1 + CDtemp * 2 * (x_23_3_0 -  ABcom * x_23_3_1) + ABCDtemp * x_11_9_1;
                                QUICKDouble x_24_19_0 = Qtempz * x_24_9_0 + WQtempz * x_24_9_1 + CDtemp * 2 * (x_24_3_0 -  ABcom * x_24_3_1) + ABCDtemp * x_12_9_1;
                                QUICKDouble x_25_19_0 = Qtempz * x_25_9_0 + WQtempz * x_25_9_1 + CDtemp * 2 * (x_25_3_0 -  ABcom * x_25_3_1) + 2 * ABCDtemp * x_10_9_1;
                                QUICKDouble x_26_19_0 = Qtempz * x_26_9_0 + WQtempz * x_26_9_1 + CDtemp * 2 * (x_26_3_0 -  ABcom * x_26_3_1) + ABCDtemp * x_17_9_1;
                                QUICKDouble x_27_19_0 = Qtempz * x_27_9_0 + WQtempz * x_27_9_1 + CDtemp * 2 * (x_27_3_0 -  ABcom * x_27_3_1) + 3 * ABCDtemp * x_14_9_1;
                                QUICKDouble x_28_19_0 = Qtempz * x_28_9_0 + WQtempz * x_28_9_1 + CDtemp * 2 * (x_28_3_0 -  ABcom * x_28_3_1);
                                QUICKDouble x_29_19_0 = Qtempz * x_29_9_0 + WQtempz * x_29_9_1 + CDtemp * 2 * (x_29_3_0 -  ABcom * x_29_3_1);
                                QUICKDouble x_30_19_0 = Qtempz * x_30_9_0 + WQtempz * x_30_9_1 + CDtemp * 2 * (x_30_3_0 -  ABcom * x_30_3_1) + ABCDtemp * x_18_9_1;
                                QUICKDouble x_31_19_0 = Qtempz * x_31_9_0 + WQtempz * x_31_9_1 + CDtemp * 2 * (x_31_3_0 -  ABcom * x_31_3_1) + 3 * ABCDtemp * x_16_9_1;
                                QUICKDouble x_32_19_0 = Qtempz * x_32_9_0 + WQtempz * x_32_9_1 + CDtemp * 2 * (x_32_3_0 -  ABcom * x_32_3_1);
                                QUICKDouble x_33_19_0 = Qtempz * x_33_9_0 + WQtempz * x_33_9_1 + CDtemp * 2 * (x_33_3_0 -  ABcom * x_33_3_1);
                                QUICKDouble x_34_19_0 = Qtempz * x_34_9_0 + WQtempz * x_34_9_1 + CDtemp * 2 * (x_34_3_0 -  ABcom * x_34_3_1) + 4 * ABCDtemp * x_19_9_1;
                                
                                // WRITE LAST FOR I =            4  J=           3
                                LOC2(store, 20, 10, STOREDIM, STOREDIM) = x_20_10_0;
                                LOC2(store, 20, 11, STOREDIM, STOREDIM) = x_20_11_0;
                                LOC2(store, 20, 12, STOREDIM, STOREDIM) = x_20_12_0;
                                LOC2(store, 20, 13, STOREDIM, STOREDIM) = x_20_13_0;
                                LOC2(store, 20, 14, STOREDIM, STOREDIM) = x_20_14_0;
                                LOC2(store, 20, 15, STOREDIM, STOREDIM) = x_20_15_0;
                                LOC2(store, 20, 16, STOREDIM, STOREDIM) = x_20_16_0;
                                LOC2(store, 20, 17, STOREDIM, STOREDIM) = x_20_17_0;
                                LOC2(store, 20, 18, STOREDIM, STOREDIM) = x_20_18_0;
                                LOC2(store, 20, 19, STOREDIM, STOREDIM) = x_20_19_0;
                                LOC2(store, 21, 10, STOREDIM, STOREDIM) = x_21_10_0;
                                LOC2(store, 21, 11, STOREDIM, STOREDIM) = x_21_11_0;
                                LOC2(store, 21, 12, STOREDIM, STOREDIM) = x_21_12_0;
                                LOC2(store, 21, 13, STOREDIM, STOREDIM) = x_21_13_0;
                                LOC2(store, 21, 14, STOREDIM, STOREDIM) = x_21_14_0;
                                LOC2(store, 21, 15, STOREDIM, STOREDIM) = x_21_15_0;
                                LOC2(store, 21, 16, STOREDIM, STOREDIM) = x_21_16_0;
                                LOC2(store, 21, 17, STOREDIM, STOREDIM) = x_21_17_0;
                                LOC2(store, 21, 18, STOREDIM, STOREDIM) = x_21_18_0;
                                LOC2(store, 21, 19, STOREDIM, STOREDIM) = x_21_19_0;
                                LOC2(store, 22, 10, STOREDIM, STOREDIM) = x_22_10_0;
                                LOC2(store, 22, 11, STOREDIM, STOREDIM) = x_22_11_0;
                                LOC2(store, 22, 12, STOREDIM, STOREDIM) = x_22_12_0;
                                LOC2(store, 22, 13, STOREDIM, STOREDIM) = x_22_13_0;
                                LOC2(store, 22, 14, STOREDIM, STOREDIM) = x_22_14_0;
                                LOC2(store, 22, 15, STOREDIM, STOREDIM) = x_22_15_0;
                                LOC2(store, 22, 16, STOREDIM, STOREDIM) = x_22_16_0;
                                LOC2(store, 22, 17, STOREDIM, STOREDIM) = x_22_17_0;
                                LOC2(store, 22, 18, STOREDIM, STOREDIM) = x_22_18_0;
                                LOC2(store, 22, 19, STOREDIM, STOREDIM) = x_22_19_0;
                                LOC2(store, 23, 10, STOREDIM, STOREDIM) = x_23_10_0;
                                LOC2(store, 23, 11, STOREDIM, STOREDIM) = x_23_11_0;
                                LOC2(store, 23, 12, STOREDIM, STOREDIM) = x_23_12_0;
                                LOC2(store, 23, 13, STOREDIM, STOREDIM) = x_23_13_0;
                                LOC2(store, 23, 14, STOREDIM, STOREDIM) = x_23_14_0;
                                LOC2(store, 23, 15, STOREDIM, STOREDIM) = x_23_15_0;
                                LOC2(store, 23, 16, STOREDIM, STOREDIM) = x_23_16_0;
                                LOC2(store, 23, 17, STOREDIM, STOREDIM) = x_23_17_0;
                                LOC2(store, 23, 18, STOREDIM, STOREDIM) = x_23_18_0;
                                LOC2(store, 23, 19, STOREDIM, STOREDIM) = x_23_19_0;
                                LOC2(store, 24, 10, STOREDIM, STOREDIM) = x_24_10_0;
                                LOC2(store, 24, 11, STOREDIM, STOREDIM) = x_24_11_0;
                                LOC2(store, 24, 12, STOREDIM, STOREDIM) = x_24_12_0;
                                LOC2(store, 24, 13, STOREDIM, STOREDIM) = x_24_13_0;
                                LOC2(store, 24, 14, STOREDIM, STOREDIM) = x_24_14_0;
                                LOC2(store, 24, 15, STOREDIM, STOREDIM) = x_24_15_0;
                                LOC2(store, 24, 16, STOREDIM, STOREDIM) = x_24_16_0;
                                LOC2(store, 24, 17, STOREDIM, STOREDIM) = x_24_17_0;
                                LOC2(store, 24, 18, STOREDIM, STOREDIM) = x_24_18_0;
                                LOC2(store, 24, 19, STOREDIM, STOREDIM) = x_24_19_0;
                                LOC2(store, 25, 10, STOREDIM, STOREDIM) = x_25_10_0;
                                LOC2(store, 25, 11, STOREDIM, STOREDIM) = x_25_11_0;
                                LOC2(store, 25, 12, STOREDIM, STOREDIM) = x_25_12_0;
                                LOC2(store, 25, 13, STOREDIM, STOREDIM) = x_25_13_0;
                                LOC2(store, 25, 14, STOREDIM, STOREDIM) = x_25_14_0;
                                LOC2(store, 25, 15, STOREDIM, STOREDIM) = x_25_15_0;
                                LOC2(store, 25, 16, STOREDIM, STOREDIM) = x_25_16_0;
                                LOC2(store, 25, 17, STOREDIM, STOREDIM) = x_25_17_0;
                                LOC2(store, 25, 18, STOREDIM, STOREDIM) = x_25_18_0;
                                LOC2(store, 25, 19, STOREDIM, STOREDIM) = x_25_19_0;
                                LOC2(store, 26, 10, STOREDIM, STOREDIM) = x_26_10_0;
                                LOC2(store, 26, 11, STOREDIM, STOREDIM) = x_26_11_0;
                                LOC2(store, 26, 12, STOREDIM, STOREDIM) = x_26_12_0;
                                LOC2(store, 26, 13, STOREDIM, STOREDIM) = x_26_13_0;
                                LOC2(store, 26, 14, STOREDIM, STOREDIM) = x_26_14_0;
                                LOC2(store, 26, 15, STOREDIM, STOREDIM) = x_26_15_0;
                                LOC2(store, 26, 16, STOREDIM, STOREDIM) = x_26_16_0;
                                LOC2(store, 26, 17, STOREDIM, STOREDIM) = x_26_17_0;
                                LOC2(store, 26, 18, STOREDIM, STOREDIM) = x_26_18_0;
                                LOC2(store, 26, 19, STOREDIM, STOREDIM) = x_26_19_0;
                                LOC2(store, 27, 10, STOREDIM, STOREDIM) = x_27_10_0;
                                LOC2(store, 27, 11, STOREDIM, STOREDIM) = x_27_11_0;
                                LOC2(store, 27, 12, STOREDIM, STOREDIM) = x_27_12_0;
                                LOC2(store, 27, 13, STOREDIM, STOREDIM) = x_27_13_0;
                                LOC2(store, 27, 14, STOREDIM, STOREDIM) = x_27_14_0;
                                LOC2(store, 27, 15, STOREDIM, STOREDIM) = x_27_15_0;
                                LOC2(store, 27, 16, STOREDIM, STOREDIM) = x_27_16_0;
                                LOC2(store, 27, 17, STOREDIM, STOREDIM) = x_27_17_0;
                                LOC2(store, 27, 18, STOREDIM, STOREDIM) = x_27_18_0;
                                LOC2(store, 27, 19, STOREDIM, STOREDIM) = x_27_19_0;
                                LOC2(store, 28, 10, STOREDIM, STOREDIM) = x_28_10_0;
                                LOC2(store, 28, 11, STOREDIM, STOREDIM) = x_28_11_0;
                                LOC2(store, 28, 12, STOREDIM, STOREDIM) = x_28_12_0;
                                LOC2(store, 28, 13, STOREDIM, STOREDIM) = x_28_13_0;
                                LOC2(store, 28, 14, STOREDIM, STOREDIM) = x_28_14_0;
                                LOC2(store, 28, 15, STOREDIM, STOREDIM) = x_28_15_0;
                                LOC2(store, 28, 16, STOREDIM, STOREDIM) = x_28_16_0;
                                LOC2(store, 28, 17, STOREDIM, STOREDIM) = x_28_17_0;
                                LOC2(store, 28, 18, STOREDIM, STOREDIM) = x_28_18_0;
                                LOC2(store, 28, 19, STOREDIM, STOREDIM) = x_28_19_0;
                                LOC2(store, 29, 10, STOREDIM, STOREDIM) = x_29_10_0;
                                LOC2(store, 29, 11, STOREDIM, STOREDIM) = x_29_11_0;
                                LOC2(store, 29, 12, STOREDIM, STOREDIM) = x_29_12_0;
                                LOC2(store, 29, 13, STOREDIM, STOREDIM) = x_29_13_0;
                                LOC2(store, 29, 14, STOREDIM, STOREDIM) = x_29_14_0;
                                LOC2(store, 29, 15, STOREDIM, STOREDIM) = x_29_15_0;
                                LOC2(store, 29, 16, STOREDIM, STOREDIM) = x_29_16_0;
                                LOC2(store, 29, 17, STOREDIM, STOREDIM) = x_29_17_0;
                                LOC2(store, 29, 18, STOREDIM, STOREDIM) = x_29_18_0;
                                LOC2(store, 29, 19, STOREDIM, STOREDIM) = x_29_19_0;
                                LOC2(store, 30, 10, STOREDIM, STOREDIM) = x_30_10_0;
                                LOC2(store, 30, 11, STOREDIM, STOREDIM) = x_30_11_0;
                                LOC2(store, 30, 12, STOREDIM, STOREDIM) = x_30_12_0;
                                LOC2(store, 30, 13, STOREDIM, STOREDIM) = x_30_13_0;
                                LOC2(store, 30, 14, STOREDIM, STOREDIM) = x_30_14_0;
                                LOC2(store, 30, 15, STOREDIM, STOREDIM) = x_30_15_0;
                                LOC2(store, 30, 16, STOREDIM, STOREDIM) = x_30_16_0;
                                LOC2(store, 30, 17, STOREDIM, STOREDIM) = x_30_17_0;
                                LOC2(store, 30, 18, STOREDIM, STOREDIM) = x_30_18_0;
                                LOC2(store, 30, 19, STOREDIM, STOREDIM) = x_30_19_0;
                                LOC2(store, 31, 10, STOREDIM, STOREDIM) = x_31_10_0;
                                LOC2(store, 31, 11, STOREDIM, STOREDIM) = x_31_11_0;
                                LOC2(store, 31, 12, STOREDIM, STOREDIM) = x_31_12_0;
                                LOC2(store, 31, 13, STOREDIM, STOREDIM) = x_31_13_0;
                                LOC2(store, 31, 14, STOREDIM, STOREDIM) = x_31_14_0;
                                LOC2(store, 31, 15, STOREDIM, STOREDIM) = x_31_15_0;
                                LOC2(store, 31, 16, STOREDIM, STOREDIM) = x_31_16_0;
                                LOC2(store, 31, 17, STOREDIM, STOREDIM) = x_31_17_0;
                                LOC2(store, 31, 18, STOREDIM, STOREDIM) = x_31_18_0;
                                LOC2(store, 31, 19, STOREDIM, STOREDIM) = x_31_19_0;
                                LOC2(store, 32, 10, STOREDIM, STOREDIM) = x_32_10_0;
                                LOC2(store, 32, 11, STOREDIM, STOREDIM) = x_32_11_0;
                                LOC2(store, 32, 12, STOREDIM, STOREDIM) = x_32_12_0;
                                LOC2(store, 32, 13, STOREDIM, STOREDIM) = x_32_13_0;
                                LOC2(store, 32, 14, STOREDIM, STOREDIM) = x_32_14_0;
                                LOC2(store, 32, 15, STOREDIM, STOREDIM) = x_32_15_0;
                                LOC2(store, 32, 16, STOREDIM, STOREDIM) = x_32_16_0;
                                LOC2(store, 32, 17, STOREDIM, STOREDIM) = x_32_17_0;
                                LOC2(store, 32, 18, STOREDIM, STOREDIM) = x_32_18_0;
                                LOC2(store, 32, 19, STOREDIM, STOREDIM) = x_32_19_0;
                                LOC2(store, 33, 10, STOREDIM, STOREDIM) = x_33_10_0;
                                LOC2(store, 33, 11, STOREDIM, STOREDIM) = x_33_11_0;
                                LOC2(store, 33, 12, STOREDIM, STOREDIM) = x_33_12_0;
                                LOC2(store, 33, 13, STOREDIM, STOREDIM) = x_33_13_0;
                                LOC2(store, 33, 14, STOREDIM, STOREDIM) = x_33_14_0;
                                LOC2(store, 33, 15, STOREDIM, STOREDIM) = x_33_15_0;
                                LOC2(store, 33, 16, STOREDIM, STOREDIM) = x_33_16_0;
                                LOC2(store, 33, 17, STOREDIM, STOREDIM) = x_33_17_0;
                                LOC2(store, 33, 18, STOREDIM, STOREDIM) = x_33_18_0;
                                LOC2(store, 33, 19, STOREDIM, STOREDIM) = x_33_19_0;
                                LOC2(store, 34, 10, STOREDIM, STOREDIM) = x_34_10_0;
                                LOC2(store, 34, 11, STOREDIM, STOREDIM) = x_34_11_0;
                                LOC2(store, 34, 12, STOREDIM, STOREDIM) = x_34_12_0;
                                LOC2(store, 34, 13, STOREDIM, STOREDIM) = x_34_13_0;
                                LOC2(store, 34, 14, STOREDIM, STOREDIM) = x_34_14_0;
                                LOC2(store, 34, 15, STOREDIM, STOREDIM) = x_34_15_0;
                                LOC2(store, 34, 16, STOREDIM, STOREDIM) = x_34_16_0;
                                LOC2(store, 34, 17, STOREDIM, STOREDIM) = x_34_17_0;
                                LOC2(store, 34, 18, STOREDIM, STOREDIM) = x_34_18_0;
                                LOC2(store, 34, 19, STOREDIM, STOREDIM) = x_34_19_0;/*
                                if ((I+J) >=  4 && (K+L)>= 4) {
                                    // Subroutine for L =            0  B =            1 , m=           2
                                    QUICKDouble x_0_1_2 = Qtempx * VY( 0, 0, 2) + WQtempx * VY( 0, 0, 3);
                                    QUICKDouble x_0_2_2 = Qtempy * VY( 0, 0, 2) + WQtempy * VY( 0, 0, 3);
                                    QUICKDouble x_0_3_2 = Qtempz * VY( 0, 0, 2) + WQtempz * VY( 0, 0, 3);
                                    
                                    // Subroutine for L =            0  B =            1 , m=           3
                                    QUICKDouble x_0_1_3 = Qtempx * VY( 0, 0, 3) + WQtempx * VY( 0, 0, 4);
                                    QUICKDouble x_0_2_3 = Qtempy * VY( 0, 0, 3) + WQtempy * VY( 0, 0, 4);
                                    QUICKDouble x_0_3_3 = Qtempz * VY( 0, 0, 3) + WQtempz * VY( 0, 0, 4);
                                    
                                    // Subroutine for L =            0  B =            1 , m=           4
                                    QUICKDouble x_0_1_4 = Qtempx * VY( 0, 0, 4) + WQtempx * VY( 0, 0, 5);
                                    QUICKDouble x_0_2_4 = Qtempy * VY( 0, 0, 4) + WQtempy * VY( 0, 0, 5);
                                    QUICKDouble x_0_3_4 = Qtempz * VY( 0, 0, 4) + WQtempz * VY( 0, 0, 5);
                                    
                                    // Subroutine for L =            0  B =            1 , m=           5
                                    QUICKDouble x_0_1_5 = Qtempx * VY( 0, 0, 5) + WQtempx * VY( 0, 0, 6);
                                    QUICKDouble x_0_2_5 = Qtempy * VY( 0, 0, 5) + WQtempy * VY( 0, 0, 6);
                                    QUICKDouble x_0_3_5 = Qtempz * VY( 0, 0, 5) + WQtempz * VY( 0, 0, 6);
                                    
                                    // Subroutine for L =            0  B =            2 , m=           2
                                    QUICKDouble x_0_4_2 = Qtempx * x_0_2_2 + WQtempx * x_0_2_3;
                                    QUICKDouble x_0_5_2 = Qtempy * x_0_3_2 + WQtempy * x_0_3_3;
                                    QUICKDouble x_0_6_2 = Qtempx * x_0_3_2 + WQtempx * x_0_3_3;
                                    QUICKDouble x_0_7_2 = Qtempx * x_0_1_2 + WQtempx * x_0_1_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                                    QUICKDouble x_0_8_2 = Qtempy * x_0_2_2 + WQtempy * x_0_2_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                                    QUICKDouble x_0_9_2 = Qtempz * x_0_3_2 + WQtempz * x_0_3_3 + CDtemp * (VY( 0, 0, 2) -  ABcom * VY( 0, 0, 3));
                                    
                                    // Subroutine for L =            0  B =            2 , m=           3
                                    QUICKDouble x_0_4_3 = Qtempx * x_0_2_3 + WQtempx * x_0_2_4;
                                    QUICKDouble x_0_5_3 = Qtempy * x_0_3_3 + WQtempy * x_0_3_4;
                                    QUICKDouble x_0_6_3 = Qtempx * x_0_3_3 + WQtempx * x_0_3_4;
                                    QUICKDouble x_0_7_3 = Qtempx * x_0_1_3 + WQtempx * x_0_1_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                                    QUICKDouble x_0_8_3 = Qtempy * x_0_2_3 + WQtempy * x_0_2_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                                    QUICKDouble x_0_9_3 = Qtempz * x_0_3_3 + WQtempz * x_0_3_4 + CDtemp * (VY( 0, 0, 3) -  ABcom * VY( 0, 0, 4));
                                    
                                    // Subroutine for L =            0  B =            2 , m=           4
                                    QUICKDouble x_0_4_4 = Qtempx * x_0_2_4 + WQtempx * x_0_2_5;
                                    QUICKDouble x_0_5_4 = Qtempy * x_0_3_4 + WQtempy * x_0_3_5;
                                    QUICKDouble x_0_6_4 = Qtempx * x_0_3_4 + WQtempx * x_0_3_5;
                                    QUICKDouble x_0_7_4 = Qtempx * x_0_1_4 + WQtempx * x_0_1_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                                    QUICKDouble x_0_8_4 = Qtempy * x_0_2_4 + WQtempy * x_0_2_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                                    QUICKDouble x_0_9_4 = Qtempz * x_0_3_4 + WQtempz * x_0_3_5 + CDtemp * (VY( 0, 0, 4) -  ABcom * VY( 0, 0, 5));
                                    
                                    // Subroutine for L =            1  B =            0 , m=           7
                                    QUICKDouble x_2_0_7 = Ptempy * VY( 0, 0, 7) + WPtempy * VY( 0, 0, 8);
                                    QUICKDouble x_3_0_7 = Ptempz * VY( 0, 0, 7) + WPtempz * VY( 0, 0, 8);
                                    // Subroutine for L =            1  B =            1 , m=           3
                                    QUICKDouble x_2_1_3 = Ptempy * x_0_1_3 + WPtempy * x_0_1_4;
                                    QUICKDouble x_2_2_3 = Ptempy * x_0_2_3 + WPtempy * x_0_2_4 + ABCDtemp * VY( 0, 0, 4);
                                    QUICKDouble x_2_3_3 = Ptempy * x_0_3_3 + WPtempy * x_0_3_4;
                                    QUICKDouble x_3_1_3 = Ptempz * x_0_1_3 + WPtempz * x_0_1_4;
                                    QUICKDouble x_3_2_3 = Ptempz * x_0_2_3 + WPtempz * x_0_2_4;
                                    QUICKDouble x_3_3_3 = Ptempz * x_0_3_3 + WPtempz * x_0_3_4 + ABCDtemp * VY( 0, 0, 4);
                                    
                                    // Subroutine for L =            1  B =            2 , m=           2
                                    QUICKDouble x_1_4_2 = Ptempx * x_0_4_2 + WPtempx * x_0_4_3 + ABCDtemp * x_0_2_3;
                                    QUICKDouble x_1_5_2 = Ptempx * x_0_5_2 + WPtempx * x_0_5_3;
                                    QUICKDouble x_1_6_2 = Ptempx * x_0_6_2 + WPtempx * x_0_6_3 + ABCDtemp * x_0_3_3;
                                    QUICKDouble x_1_7_2 = Ptempx * x_0_7_2 + WPtempx * x_0_7_3 + 2 * ABCDtemp * x_0_1_3;
                                    QUICKDouble x_1_8_2 = Ptempx * x_0_8_2 + WPtempx * x_0_8_3;
                                    QUICKDouble x_1_9_2 = Ptempx * x_0_9_2 + WPtempx * x_0_9_3;
                                    QUICKDouble x_2_4_2 = Ptempy * x_0_4_2 + WPtempy * x_0_4_3 + ABCDtemp * x_0_1_3;
                                    QUICKDouble x_2_5_2 = Ptempy * x_0_5_2 + WPtempy * x_0_5_3 + ABCDtemp * x_0_3_3;
                                    QUICKDouble x_2_6_2 = Ptempy * x_0_6_2 + WPtempy * x_0_6_3;
                                    QUICKDouble x_2_7_2 = Ptempy * x_0_7_2 + WPtempy * x_0_7_3;
                                    QUICKDouble x_2_8_2 = Ptempy * x_0_8_2 + WPtempy * x_0_8_3 + 2 * ABCDtemp * x_0_2_3;
                                    QUICKDouble x_2_9_2 = Ptempy * x_0_9_2 + WPtempy * x_0_9_3;
                                    QUICKDouble x_3_4_2 = Ptempz * x_0_4_2 + WPtempz * x_0_4_3;
                                    QUICKDouble x_3_5_2 = Ptempz * x_0_5_2 + WPtempz * x_0_5_3 + ABCDtemp * x_0_2_3;
                                    QUICKDouble x_3_6_2 = Ptempz * x_0_6_2 + WPtempz * x_0_6_3 + ABCDtemp * x_0_1_3;
                                    QUICKDouble x_3_7_2 = Ptempz * x_0_7_2 + WPtempz * x_0_7_3;
                                    QUICKDouble x_3_8_2 = Ptempz * x_0_8_2 + WPtempz * x_0_8_3;
                                    QUICKDouble x_3_9_2 = Ptempz * x_0_9_2 + WPtempz * x_0_9_3 + 2 * ABCDtemp * x_0_3_3;
                                    
                                    // Subroutine for L =            1  B =            2 , m=           3
                                    QUICKDouble x_2_4_3 = Ptempy * x_0_4_3 + WPtempy * x_0_4_4 + ABCDtemp * x_0_1_4;
                                    QUICKDouble x_2_5_3 = Ptempy * x_0_5_3 + WPtempy * x_0_5_4 + ABCDtemp * x_0_3_4;
                                    QUICKDouble x_2_6_3 = Ptempy * x_0_6_3 + WPtempy * x_0_6_4;
                                    QUICKDouble x_2_7_3 = Ptempy * x_0_7_3 + WPtempy * x_0_7_4;
                                    QUICKDouble x_2_8_3 = Ptempy * x_0_8_3 + WPtempy * x_0_8_4 + 2 * ABCDtemp * x_0_2_4;
                                    QUICKDouble x_2_9_3 = Ptempy * x_0_9_3 + WPtempy * x_0_9_4;
                                    QUICKDouble x_3_4_3 = Ptempz * x_0_4_3 + WPtempz * x_0_4_4;
                                    QUICKDouble x_3_5_3 = Ptempz * x_0_5_3 + WPtempz * x_0_5_4 + ABCDtemp * x_0_2_4;
                                    QUICKDouble x_3_6_3 = Ptempz * x_0_6_3 + WPtempz * x_0_6_4 + ABCDtemp * x_0_1_4;
                                    QUICKDouble x_3_7_3 = Ptempz * x_0_7_3 + WPtempz * x_0_7_4;
                                    QUICKDouble x_3_8_3 = Ptempz * x_0_8_3 + WPtempz * x_0_8_4;
                                    QUICKDouble x_3_9_3 = Ptempz * x_0_9_3 + WPtempz * x_0_9_4 + 2 * ABCDtemp * x_0_3_4;
                                    
                                    // Subroutine for L =            2  B =            0 , m=           6
                                    QUICKDouble x_5_0_6 = Ptempy * x_3_0_6 + WPtempy * x_3_0_7;
                                    QUICKDouble x_8_0_6 = Ptempy * x_2_0_6 + WPtempy * x_2_0_7 + ABtemp * (VY( 0, 0, 6) -  CDcom * VY( 0, 0, 7));
                                    QUICKDouble x_9_0_6 = Ptempz * x_3_0_6 + WPtempz * x_3_0_7 + ABtemp * (VY( 0, 0, 6) -  CDcom * VY( 0, 0, 7));
                                    // Subroutine for B =            2  L =            1 , m=           3
                                    QUICKDouble x_4_2_3 = Qtempy * x_4_0_3 + WQtempy * x_4_0_4 + ABCDtemp * x_1_0_4;
                                    QUICKDouble x_5_2_3 = Qtempy * x_5_0_3 + WQtempy * x_5_0_4 + ABCDtemp * x_3_0_4;
                                    QUICKDouble x_6_2_3 = Qtempy * x_6_0_3 + WQtempy * x_6_0_4;
                                    QUICKDouble x_7_2_3 = Qtempy * x_7_0_3 + WQtempy * x_7_0_4;
                                    QUICKDouble x_8_2_3 = Qtempy * x_8_0_3 + WQtempy * x_8_0_4 + 2 * ABCDtemp * x_2_0_4;
                                    QUICKDouble x_9_2_3 = Qtempy * x_9_0_3 + WQtempy * x_9_0_4;
                                    QUICKDouble x_4_3_3 = Qtempz * x_4_0_3 + WQtempz * x_4_0_4;
                                    QUICKDouble x_5_3_3 = Qtempz * x_5_0_3 + WQtempz * x_5_0_4 + ABCDtemp * x_2_0_4;
                                    QUICKDouble x_6_3_3 = Qtempz * x_6_0_3 + WQtempz * x_6_0_4 + ABCDtemp * x_1_0_4;
                                    QUICKDouble x_7_3_3 = Qtempz * x_7_0_3 + WQtempz * x_7_0_4;
                                    QUICKDouble x_8_3_3 = Qtempz * x_8_0_3 + WQtempz * x_8_0_4;
                                    QUICKDouble x_9_3_3 = Qtempz * x_9_0_3 + WQtempz * x_9_0_4 + 2 * ABCDtemp * x_3_0_4;
                                    
                                    // Subroutine for L =            2  B =            2 , m=           2
                                    QUICKDouble x_4_5_2 = Ptempx * x_2_5_2 + WPtempx * x_2_5_3;
                                    QUICKDouble x_4_8_2 = Ptempx * x_2_8_2 + WPtempx * x_2_8_3;
                                    QUICKDouble x_4_9_2 = Ptempx * x_2_9_2 + WPtempx * x_2_9_3;
                                    QUICKDouble x_5_5_2 = Ptempy * x_3_5_2 + WPtempy * x_3_5_3 + ABCDtemp * x_3_3_3;
                                    QUICKDouble x_5_8_2 = Ptempy * x_3_8_2 + WPtempy * x_3_8_3 + 2 * ABCDtemp * x_3_2_3;
                                    QUICKDouble x_5_9_2 = Ptempy * x_3_9_2 + WPtempy * x_3_9_3;
                                    QUICKDouble x_6_5_2 = Ptempx * x_3_5_2 + WPtempx * x_3_5_3;
                                    QUICKDouble x_6_8_2 = Ptempx * x_3_8_2 + WPtempx * x_3_8_3;
                                    QUICKDouble x_6_9_2 = Ptempx * x_3_9_2 + WPtempx * x_3_9_3;
                                    QUICKDouble x_7_5_2 = Ptempx * x_1_5_2 + WPtempx * (  Ptempx * x_0_5_3 + WPtempx * x_0_5_4) + ABtemp * (x_0_5_2 -  CDcom * x_0_5_3);
                                    QUICKDouble x_7_8_2 = Ptempx * x_1_8_2 + WPtempx * (  Ptempx * x_0_8_3 + WPtempx * x_0_8_4) + ABtemp * (x_0_8_2 -  CDcom * x_0_8_3);
                                    QUICKDouble x_7_9_2 = Ptempx * x_1_9_2 + WPtempx * (  Ptempx * x_0_9_3 + WPtempx * x_0_9_4) + ABtemp * (x_0_9_2 -  CDcom * x_0_9_3);
                                    QUICKDouble x_8_5_2 = Ptempy * x_2_5_2 + WPtempy * x_2_5_3 + ABtemp * (x_0_5_2 -  CDcom * x_0_5_3) + ABCDtemp * x_2_3_3;
                                    QUICKDouble x_8_8_2 = Ptempy * x_2_8_2 + WPtempy * x_2_8_3 + ABtemp * (x_0_8_2 -  CDcom * x_0_8_3) + 2 * ABCDtemp * x_2_2_3;
                                    QUICKDouble x_8_9_2 = Ptempy * x_2_9_2 + WPtempy * x_2_9_3 + ABtemp * (x_0_9_2 -  CDcom * x_0_9_3);
                                    QUICKDouble x_9_5_2 = Ptempz * x_3_5_2 + WPtempz * x_3_5_3 + ABtemp * (x_0_5_2 -  CDcom * x_0_5_3) + ABCDtemp * x_3_2_3;
                                    QUICKDouble x_9_8_2 = Ptempz * x_3_8_2 + WPtempz * x_3_8_3 + ABtemp * (x_0_8_2 -  CDcom * x_0_8_3);
                                    QUICKDouble x_9_9_2 = Ptempz * x_3_9_2 + WPtempz * x_3_9_3 + ABtemp * (x_0_9_2 -  CDcom * x_0_9_3) + 2 * ABCDtemp * x_3_3_3;
                                    
                                    // Subroutine for L =            3  B =            0 , m=           5
                                    QUICKDouble x_15_0_5 = Ptempy * x_5_0_5 + WPtempy * x_5_0_6 + ABtemp * (x_3_0_5 -  CDcom * x_3_0_6);
                                    QUICKDouble x_16_0_5 = Ptempy * x_9_0_5 + WPtempy * x_9_0_6;
                                    QUICKDouble x_18_0_5 = Ptempy * x_8_0_5 + WPtempy * x_8_0_6 + ABtemp * 2 * (x_2_0_5 -  CDcom * x_2_0_6);
                                    QUICKDouble x_19_0_5 = Ptempz * x_9_0_5 + WPtempz * x_9_0_6 + ABtemp * 2 * (x_3_0_5 -  CDcom * x_3_0_6);
                                    // Subroutine for B =            3  L =            1 , m=           3
                                    QUICKDouble x_10_1_3 = Qtempx * x_10_0_3 + WQtempx * x_10_0_4 + ABCDtemp * x_5_0_4;
                                    QUICKDouble x_11_1_3 = Qtempx * x_11_0_3 + WQtempx * x_11_0_4 + 2 * ABCDtemp * x_4_0_4;
                                    QUICKDouble x_12_1_3 = Qtempx * x_12_0_3 + WQtempx * x_12_0_4 + ABCDtemp * x_8_0_4;
                                    QUICKDouble x_13_1_3 = Qtempx * x_13_0_3 + WQtempx * x_13_0_4 + 2 * ABCDtemp * x_6_0_4;
                                    QUICKDouble x_14_1_3 = Qtempx * x_14_0_3 + WQtempx * x_14_0_4 + ABCDtemp * x_9_0_4;
                                    QUICKDouble x_15_1_3 = Qtempx * x_15_0_3 + WQtempx * x_15_0_4;
                                    QUICKDouble x_16_1_3 = Qtempx * x_16_0_3 + WQtempx * x_16_0_4;
                                    QUICKDouble x_17_1_3 = Qtempx * x_17_0_3 + WQtempx * x_17_0_4 + 3 * ABCDtemp * x_7_0_4;
                                    QUICKDouble x_18_1_3 = Qtempx * x_18_0_3 + WQtempx * x_18_0_4;
                                    QUICKDouble x_19_1_3 = Qtempx * x_19_0_3 + WQtempx * x_19_0_4;
                                    QUICKDouble x_10_2_3 = Qtempy * x_10_0_3 + WQtempy * x_10_0_4 + ABCDtemp * x_6_0_4;
                                    QUICKDouble x_11_2_3 = Qtempy * x_11_0_3 + WQtempy * x_11_0_4 + ABCDtemp * x_7_0_4;
                                    QUICKDouble x_12_2_3 = Qtempy * x_12_0_3 + WQtempy * x_12_0_4 + 2 * ABCDtemp * x_4_0_4;
                                    QUICKDouble x_13_2_3 = Qtempy * x_13_0_3 + WQtempy * x_13_0_4;
                                    QUICKDouble x_14_2_3 = Qtempy * x_14_0_3 + WQtempy * x_14_0_4;
                                    QUICKDouble x_15_2_3 = Qtempy * x_15_0_3 + WQtempy * x_15_0_4 + 2 * ABCDtemp * x_5_0_4;
                                    QUICKDouble x_16_2_3 = Qtempy * x_16_0_3 + WQtempy * x_16_0_4 + ABCDtemp * x_9_0_4;
                                    QUICKDouble x_17_2_3 = Qtempy * x_17_0_3 + WQtempy * x_17_0_4;
                                    QUICKDouble x_18_2_3 = Qtempy * x_18_0_3 + WQtempy * x_18_0_4 + 3 * ABCDtemp * x_8_0_4;
                                    QUICKDouble x_19_2_3 = Qtempy * x_19_0_3 + WQtempy * x_19_0_4;
                                    QUICKDouble x_10_3_3 = Qtempz * x_10_0_3 + WQtempz * x_10_0_4 + ABCDtemp * x_4_0_4;
                                    QUICKDouble x_11_3_3 = Qtempz * x_11_0_3 + WQtempz * x_11_0_4;
                                    QUICKDouble x_12_3_3 = Qtempz * x_12_0_3 + WQtempz * x_12_0_4;
                                    QUICKDouble x_13_3_3 = Qtempz * x_13_0_3 + WQtempz * x_13_0_4 + ABCDtemp * x_7_0_4;
                                    QUICKDouble x_14_3_3 = Qtempz * x_14_0_3 + WQtempz * x_14_0_4 + 2 * ABCDtemp * x_6_0_4;
                                    QUICKDouble x_15_3_3 = Qtempz * x_15_0_3 + WQtempz * x_15_0_4 + ABCDtemp * x_8_0_4;
                                    QUICKDouble x_16_3_3 = Qtempz * x_16_0_3 + WQtempz * x_16_0_4 + 2 * ABCDtemp * x_5_0_4;
                                    QUICKDouble x_17_3_3 = Qtempz * x_17_0_3 + WQtempz * x_17_0_4;
                                    QUICKDouble x_18_3_3 = Qtempz * x_18_0_3 + WQtempz * x_18_0_4;
                                    QUICKDouble x_19_3_3 = Qtempz * x_19_0_3 + WQtempz * x_19_0_4 + 3 * ABCDtemp * x_9_0_4;
                                    
                                    // Subroutine for B =            3  L =            2 , m=           2
                                    QUICKDouble x_10_4_2 = Qtempx * x_10_2_2 + WQtempx * x_10_2_3 + ABCDtemp * x_5_2_3;
                                    QUICKDouble x_11_4_2 = Qtempx * x_11_2_2 + WQtempx * x_11_2_3 + 2 * ABCDtemp * x_4_2_3;
                                    QUICKDouble x_12_4_2 = Qtempx * x_12_2_2 + WQtempx * x_12_2_3 + ABCDtemp * x_8_2_3;
                                    QUICKDouble x_13_4_2 = Qtempx * x_13_2_2 + WQtempx * x_13_2_3 + 2 * ABCDtemp * x_6_2_3;
                                    QUICKDouble x_14_4_2 = Qtempx * x_14_2_2 + WQtempx * x_14_2_3 + ABCDtemp * x_9_2_3;
                                    QUICKDouble x_15_4_2 = Qtempx * x_15_2_2 + WQtempx * x_15_2_3;
                                    QUICKDouble x_16_4_2 = Qtempx * x_16_2_2 + WQtempx * x_16_2_3;
                                    QUICKDouble x_17_4_2 = Qtempx * x_17_2_2 + WQtempx * x_17_2_3 + 3 * ABCDtemp * x_7_2_3;
                                    QUICKDouble x_18_4_2 = Qtempx * x_18_2_2 + WQtempx * x_18_2_3;
                                    QUICKDouble x_19_4_2 = Qtempx * x_19_2_2 + WQtempx * x_19_2_3;
                                    QUICKDouble x_10_5_2 = Qtempy * x_10_3_2 + WQtempy * x_10_3_3 + ABCDtemp * x_6_3_3;
                                    QUICKDouble x_11_5_2 = Qtempy * x_11_3_2 + WQtempy * x_11_3_3 + ABCDtemp * x_7_3_3;
                                    QUICKDouble x_12_5_2 = Qtempy * x_12_3_2 + WQtempy * x_12_3_3 + 2 * ABCDtemp * x_4_3_3;
                                    QUICKDouble x_13_5_2 = Qtempy * x_13_3_2 + WQtempy * x_13_3_3;
                                    QUICKDouble x_14_5_2 = Qtempy * x_14_3_2 + WQtempy * x_14_3_3;
                                    QUICKDouble x_15_5_2 = Qtempy * x_15_3_2 + WQtempy * x_15_3_3 + 2 * ABCDtemp * x_5_3_3;
                                    QUICKDouble x_16_5_2 = Qtempy * x_16_3_2 + WQtempy * x_16_3_3 + ABCDtemp * x_9_3_3;
                                    QUICKDouble x_17_5_2 = Qtempy * x_17_3_2 + WQtempy * x_17_3_3;
                                    QUICKDouble x_18_5_2 = Qtempy * x_18_3_2 + WQtempy * x_18_3_3 + 3 * ABCDtemp * x_8_3_3;
                                    QUICKDouble x_19_5_2 = Qtempy * x_19_3_2 + WQtempy * x_19_3_3;
                                    QUICKDouble x_10_6_2 = Qtempx * x_10_3_2 + WQtempx * x_10_3_3 + ABCDtemp * x_5_3_3;
                                    QUICKDouble x_11_6_2 = Qtempx * x_11_3_2 + WQtempx * x_11_3_3 + 2 * ABCDtemp * x_4_3_3;
                                    QUICKDouble x_12_6_2 = Qtempx * x_12_3_2 + WQtempx * x_12_3_3 + ABCDtemp * x_8_3_3;
                                    QUICKDouble x_13_6_2 = Qtempx * x_13_3_2 + WQtempx * x_13_3_3 + 2 * ABCDtemp * x_6_3_3;
                                    QUICKDouble x_14_6_2 = Qtempx * x_14_3_2 + WQtempx * x_14_3_3 + ABCDtemp * x_9_3_3;
                                    QUICKDouble x_15_6_2 = Qtempx * x_15_3_2 + WQtempx * x_15_3_3;
                                    QUICKDouble x_16_6_2 = Qtempx * x_16_3_2 + WQtempx * x_16_3_3;
                                    QUICKDouble x_17_6_2 = Qtempx * x_17_3_2 + WQtempx * x_17_3_3 + 3 * ABCDtemp * x_7_3_3;
                                    QUICKDouble x_18_6_2 = Qtempx * x_18_3_2 + WQtempx * x_18_3_3;
                                    QUICKDouble x_19_6_2 = Qtempx * x_19_3_2 + WQtempx * x_19_3_3;
                                    QUICKDouble x_10_7_2 = Qtempx * x_10_1_2 + WQtempx * x_10_1_3 + CDtemp * (x_10_0_2 -  ABcom * x_10_0_3) + ABCDtemp * (  Qtempx * x_5_0_3 + WQtempx * x_5_0_4);
                                    QUICKDouble x_11_7_2 = Qtempx * x_11_1_2 + WQtempx * x_11_1_3 + CDtemp * (x_11_0_2 -  ABcom * x_11_0_3) + 2 * ABCDtemp * (  Qtempx * x_4_0_3 + WQtempx * x_4_0_4 + ABCDtemp * x_2_0_4);
                                    QUICKDouble x_12_7_2 = Qtempx * x_12_1_2 + WQtempx * x_12_1_3 + CDtemp * (x_12_0_2 -  ABcom * x_12_0_3) + ABCDtemp * (  Qtempx * x_8_0_3 + WQtempx * x_8_0_4);
                                    QUICKDouble x_13_7_2 = Qtempx * x_13_1_2 + WQtempx * x_13_1_3 + CDtemp * (x_13_0_2 -  ABcom * x_13_0_3) + 2 * ABCDtemp * (  Qtempx * x_6_0_3 + WQtempx * x_6_0_4 + ABCDtemp * x_3_0_4);
                                    QUICKDouble x_14_7_2 = Qtempx * x_14_1_2 + WQtempx * x_14_1_3 + CDtemp * (x_14_0_2 -  ABcom * x_14_0_3) + ABCDtemp * (  Qtempx * x_9_0_3 + WQtempx * x_9_0_4);
                                    QUICKDouble x_15_7_2 = Qtempx * x_15_1_2 + WQtempx * x_15_1_3 + CDtemp * (x_15_0_2 -  ABcom * x_15_0_3);
                                    QUICKDouble x_16_7_2 = Qtempx * x_16_1_2 + WQtempx * x_16_1_3 + CDtemp * (x_16_0_2 -  ABcom * x_16_0_3);
                                    QUICKDouble x_17_7_2 = Qtempx * x_17_1_2 + WQtempx * x_17_1_3 + CDtemp * (x_17_0_2 -  ABcom * x_17_0_3) + 3 * ABCDtemp * (  Qtempx * x_7_0_3 + WQtempx * x_7_0_4 + 2 * ABCDtemp * x_1_0_4);
                                    QUICKDouble x_18_7_2 = Qtempx * x_18_1_2 + WQtempx * x_18_1_3 + CDtemp * (x_18_0_2 -  ABcom * x_18_0_3);
                                    QUICKDouble x_19_7_2 = Qtempx * x_19_1_2 + WQtempx * x_19_1_3 + CDtemp * (x_19_0_2 -  ABcom * x_19_0_3);
                                    QUICKDouble x_10_8_2 = Qtempy * x_10_2_2 + WQtempy * x_10_2_3 + CDtemp * (x_10_0_2 -  ABcom * x_10_0_3) + ABCDtemp * x_6_2_3;
                                    QUICKDouble x_11_8_2 = Qtempy * x_11_2_2 + WQtempy * x_11_2_3 + CDtemp * (x_11_0_2 -  ABcom * x_11_0_3) + ABCDtemp * x_7_2_3;
                                    QUICKDouble x_12_8_2 = Qtempy * x_12_2_2 + WQtempy * x_12_2_3 + CDtemp * (x_12_0_2 -  ABcom * x_12_0_3) + 2 * ABCDtemp * x_4_2_3;
                                    QUICKDouble x_13_8_2 = Qtempy * x_13_2_2 + WQtempy * x_13_2_3 + CDtemp * (x_13_0_2 -  ABcom * x_13_0_3);
                                    QUICKDouble x_14_8_2 = Qtempy * x_14_2_2 + WQtempy * x_14_2_3 + CDtemp * (x_14_0_2 -  ABcom * x_14_0_3);
                                    QUICKDouble x_15_8_2 = Qtempy * x_15_2_2 + WQtempy * x_15_2_3 + CDtemp * (x_15_0_2 -  ABcom * x_15_0_3) + 2 * ABCDtemp * x_5_2_3;
                                    QUICKDouble x_16_8_2 = Qtempy * x_16_2_2 + WQtempy * x_16_2_3 + CDtemp * (x_16_0_2 -  ABcom * x_16_0_3) + ABCDtemp * x_9_2_3;
                                    QUICKDouble x_17_8_2 = Qtempy * x_17_2_2 + WQtempy * x_17_2_3 + CDtemp * (x_17_0_2 -  ABcom * x_17_0_3);
                                    QUICKDouble x_18_8_2 = Qtempy * x_18_2_2 + WQtempy * x_18_2_3 + CDtemp * (x_18_0_2 -  ABcom * x_18_0_3) + 3 * ABCDtemp * x_8_2_3;
                                    QUICKDouble x_19_8_2 = Qtempy * x_19_2_2 + WQtempy * x_19_2_3 + CDtemp * (x_19_0_2 -  ABcom * x_19_0_3);
                                    QUICKDouble x_10_9_2 = Qtempz * x_10_3_2 + WQtempz * x_10_3_3 + CDtemp * (x_10_0_2 -  ABcom * x_10_0_3) + ABCDtemp * x_4_3_3;
                                    QUICKDouble x_11_9_2 = Qtempz * x_11_3_2 + WQtempz * x_11_3_3 + CDtemp * (x_11_0_2 -  ABcom * x_11_0_3);
                                    QUICKDouble x_12_9_2 = Qtempz * x_12_3_2 + WQtempz * x_12_3_3 + CDtemp * (x_12_0_2 -  ABcom * x_12_0_3);
                                    QUICKDouble x_13_9_2 = Qtempz * x_13_3_2 + WQtempz * x_13_3_3 + CDtemp * (x_13_0_2 -  ABcom * x_13_0_3) + ABCDtemp * x_7_3_3;
                                    QUICKDouble x_14_9_2 = Qtempz * x_14_3_2 + WQtempz * x_14_3_3 + CDtemp * (x_14_0_2 -  ABcom * x_14_0_3) + 2 * ABCDtemp * x_6_3_3;
                                    QUICKDouble x_15_9_2 = Qtempz * x_15_3_2 + WQtempz * x_15_3_3 + CDtemp * (x_15_0_2 -  ABcom * x_15_0_3) + ABCDtemp * x_8_3_3;
                                    QUICKDouble x_16_9_2 = Qtempz * x_16_3_2 + WQtempz * x_16_3_3 + CDtemp * (x_16_0_2 -  ABcom * x_16_0_3) + 2 * ABCDtemp * x_5_3_3;
                                    QUICKDouble x_17_9_2 = Qtempz * x_17_3_2 + WQtempz * x_17_3_3 + CDtemp * (x_17_0_2 -  ABcom * x_17_0_3);
                                    QUICKDouble x_18_9_2 = Qtempz * x_18_3_2 + WQtempz * x_18_3_3 + CDtemp * (x_18_0_2 -  ABcom * x_18_0_3);
                                    QUICKDouble x_19_9_2 = Qtempz * x_19_3_2 + WQtempz * x_19_3_3 + CDtemp * (x_19_0_2 -  ABcom * x_19_0_3) + 3 * ABCDtemp * x_9_3_3;
                                    
                                    // Subroutine for B =            3  L =            3 , m=           1
                                    QUICKDouble x_10_15_1 = Qtempy * x_10_5_1 + WQtempy * x_10_5_2 + CDtemp * (x_10_3_1 -  ABcom * x_10_3_2) + ABCDtemp * x_6_5_2;
                                    QUICKDouble x_11_15_1 = Qtempy * x_11_5_1 + WQtempy * x_11_5_2 + CDtemp * (x_11_3_1 -  ABcom * x_11_3_2) + ABCDtemp * x_7_5_2;
                                    QUICKDouble x_12_15_1 = Qtempy * x_12_5_1 + WQtempy * x_12_5_2 + CDtemp * (x_12_3_1 -  ABcom * x_12_3_2) + 2 * ABCDtemp * x_4_5_2;
                                    QUICKDouble x_13_15_1 = Qtempy * x_13_5_1 + WQtempy * x_13_5_2 + CDtemp * (x_13_3_1 -  ABcom * x_13_3_2);
                                    QUICKDouble x_14_15_1 = Qtempy * x_14_5_1 + WQtempy * x_14_5_2 + CDtemp * (x_14_3_1 -  ABcom * x_14_3_2);
                                    QUICKDouble x_15_15_1 = Qtempy * x_15_5_1 + WQtempy * x_15_5_2 + CDtemp * (x_15_3_1 -  ABcom * x_15_3_2) + 2 * ABCDtemp * x_5_5_2;
                                    QUICKDouble x_16_15_1 = Qtempy * x_16_5_1 + WQtempy * x_16_5_2 + CDtemp * (x_16_3_1 -  ABcom * x_16_3_2) + ABCDtemp * x_9_5_2;
                                    QUICKDouble x_17_15_1 = Qtempy * x_17_5_1 + WQtempy * x_17_5_2 + CDtemp * (x_17_3_1 -  ABcom * x_17_3_2);
                                    QUICKDouble x_18_15_1 = Qtempy * x_18_5_1 + WQtempy * x_18_5_2 + CDtemp * (x_18_3_1 -  ABcom * x_18_3_2) + 3 * ABCDtemp * x_8_5_2;
                                    QUICKDouble x_19_15_1 = Qtempy * x_19_5_1 + WQtempy * x_19_5_2 + CDtemp * (x_19_3_1 -  ABcom * x_19_3_2);
                                    QUICKDouble x_10_16_1 = Qtempy * x_10_9_1 + WQtempy * x_10_9_2 + ABCDtemp * x_6_9_2;
                                    QUICKDouble x_11_16_1 = Qtempy * x_11_9_1 + WQtempy * x_11_9_2 + ABCDtemp * x_7_9_2;
                                    QUICKDouble x_12_16_1 = Qtempy * x_12_9_1 + WQtempy * x_12_9_2 + 2 * ABCDtemp * x_4_9_2;
                                    QUICKDouble x_13_16_1 = Qtempy * x_13_9_1 + WQtempy * x_13_9_2;
                                    QUICKDouble x_14_16_1 = Qtempy * x_14_9_1 + WQtempy * x_14_9_2;
                                    QUICKDouble x_15_16_1 = Qtempy * x_15_9_1 + WQtempy * x_15_9_2 + 2 * ABCDtemp * x_5_9_2;
                                    QUICKDouble x_16_16_1 = Qtempy * x_16_9_1 + WQtempy * x_16_9_2 + ABCDtemp * x_9_9_2;
                                    QUICKDouble x_17_16_1 = Qtempy * x_17_9_1 + WQtempy * x_17_9_2;
                                    QUICKDouble x_18_16_1 = Qtempy * x_18_9_1 + WQtempy * x_18_9_2 + 3 * ABCDtemp * x_8_9_2;
                                    QUICKDouble x_19_16_1 = Qtempy * x_19_9_1 + WQtempy * x_19_9_2;
                                    QUICKDouble x_10_18_1 = Qtempy * x_10_8_1 + WQtempy * x_10_8_2 + CDtemp * 2 * (x_10_2_1 -  ABcom * x_10_2_2) + ABCDtemp * x_6_8_2;
                                    QUICKDouble x_11_18_1 = Qtempy * x_11_8_1 + WQtempy * x_11_8_2 + CDtemp * 2 * (x_11_2_1 -  ABcom * x_11_2_2) + ABCDtemp * x_7_8_2;
                                    QUICKDouble x_12_18_1 = Qtempy * x_12_8_1 + WQtempy * x_12_8_2 + CDtemp * 2 * (x_12_2_1 -  ABcom * x_12_2_2) + 2 * ABCDtemp * x_4_8_2;
                                    QUICKDouble x_13_18_1 = Qtempy * x_13_8_1 + WQtempy * x_13_8_2 + CDtemp * 2 * (x_13_2_1 -  ABcom * x_13_2_2);
                                    QUICKDouble x_14_18_1 = Qtempy * x_14_8_1 + WQtempy * x_14_8_2 + CDtemp * 2 * (x_14_2_1 -  ABcom * x_14_2_2);
                                    QUICKDouble x_15_18_1 = Qtempy * x_15_8_1 + WQtempy * x_15_8_2 + CDtemp * 2 * (x_15_2_1 -  ABcom * x_15_2_2) + 2 * ABCDtemp * x_5_8_2;
                                    QUICKDouble x_16_18_1 = Qtempy * x_16_8_1 + WQtempy * x_16_8_2 + CDtemp * 2 * (x_16_2_1 -  ABcom * x_16_2_2) + ABCDtemp * x_9_8_2;
                                    QUICKDouble x_17_18_1 = Qtempy * x_17_8_1 + WQtempy * x_17_8_2 + CDtemp * 2 * (x_17_2_1 -  ABcom * x_17_2_2);
                                    QUICKDouble x_18_18_1 = Qtempy * x_18_8_1 + WQtempy * x_18_8_2 + CDtemp * 2 * (x_18_2_1 -  ABcom * x_18_2_2) + 3 * ABCDtemp * x_8_8_2;
                                    QUICKDouble x_19_18_1 = Qtempy * x_19_8_1 + WQtempy * x_19_8_2 + CDtemp * 2 * (x_19_2_1 -  ABcom * x_19_2_2);
                                    QUICKDouble x_10_19_1 = Qtempz * x_10_9_1 + WQtempz * x_10_9_2 + CDtemp * 2 * (x_10_3_1 -  ABcom * x_10_3_2) + ABCDtemp * x_4_9_2;
                                    QUICKDouble x_11_19_1 = Qtempz * x_11_9_1 + WQtempz * x_11_9_2 + CDtemp * 2 * (x_11_3_1 -  ABcom * x_11_3_2);
                                    QUICKDouble x_12_19_1 = Qtempz * x_12_9_1 + WQtempz * x_12_9_2 + CDtemp * 2 * (x_12_3_1 -  ABcom * x_12_3_2);
                                    QUICKDouble x_13_19_1 = Qtempz * x_13_9_1 + WQtempz * x_13_9_2 + CDtemp * 2 * (x_13_3_1 -  ABcom * x_13_3_2) + ABCDtemp * x_7_9_2;
                                    QUICKDouble x_14_19_1 = Qtempz * x_14_9_1 + WQtempz * x_14_9_2 + CDtemp * 2 * (x_14_3_1 -  ABcom * x_14_3_2) + 2 * ABCDtemp * x_6_9_2;
                                    QUICKDouble x_15_19_1 = Qtempz * x_15_9_1 + WQtempz * x_15_9_2 + CDtemp * 2 * (x_15_3_1 -  ABcom * x_15_3_2) + ABCDtemp * x_8_9_2;
                                    QUICKDouble x_16_19_1 = Qtempz * x_16_9_1 + WQtempz * x_16_9_2 + CDtemp * 2 * (x_16_3_1 -  ABcom * x_16_3_2) + 2 * ABCDtemp * x_5_9_2;
                                    QUICKDouble x_17_19_1 = Qtempz * x_17_9_1 + WQtempz * x_17_9_2 + CDtemp * 2 * (x_17_3_1 -  ABcom * x_17_3_2);
                                    QUICKDouble x_18_19_1 = Qtempz * x_18_9_1 + WQtempz * x_18_9_2 + CDtemp * 2 * (x_18_3_1 -  ABcom * x_18_3_2);
                                    QUICKDouble x_19_19_1 = Qtempz * x_19_9_1 + WQtempz * x_19_9_2 + CDtemp * 2 * (x_19_3_1 -  ABcom * x_19_3_2) + 3 * ABCDtemp * x_9_9_2;
                                    
                                    // Subroutine for L =            4  B =            0 , m=           4
                                    QUICKDouble x_20_0_4 = Ptempx * x_12_0_4 + WPtempx * (  Ptempx * x_8_0_5 + WPtempx * x_8_0_6) + ABtemp * (x_8_0_4 -  CDcom * x_8_0_5);
                                    QUICKDouble x_21_0_4 = Ptempx * x_14_0_4 + WPtempx * (  Ptempx * x_9_0_5 + WPtempx * x_9_0_6) + ABtemp * (x_9_0_4 -  CDcom * x_9_0_5);
                                    QUICKDouble x_22_0_4 = Ptempy * x_16_0_4 + WPtempy * x_16_0_5 + ABtemp * (x_9_0_4 -  CDcom * x_9_0_5);
                                    QUICKDouble x_23_0_4 = Ptempx * x_10_0_4 + WPtempx * (  Ptempx * x_5_0_5 + WPtempx * x_5_0_6) + ABtemp * (x_5_0_4 -  CDcom * x_5_0_5);
                                    QUICKDouble x_24_0_4 = Ptempx * x_15_0_4 + WPtempx * x_15_0_5;
                                    QUICKDouble x_25_0_4 = Ptempx * x_16_0_4 + WPtempx * x_16_0_5;
                                    QUICKDouble x_26_0_4 = Ptempx * x_13_0_4 + WPtempx * (  Ptempx * x_6_0_5 + WPtempx * (  Ptempx * x_3_0_6 + WPtempx * x_3_0_7) + ABtemp * (x_3_0_5 -  CDcom * x_3_0_6)) + ABtemp * 2 * (x_6_0_4 -  CDcom * x_6_0_5);
                                    QUICKDouble x_27_0_4 = Ptempx * x_19_0_4 + WPtempx * x_19_0_5;
                                    QUICKDouble x_28_0_4 = Ptempx * x_11_0_4 + WPtempx * (  Ptempx * x_4_0_5 + WPtempx * (  Ptempx * x_2_0_6 + WPtempx * x_2_0_7) + ABtemp * (x_2_0_5 -  CDcom * x_2_0_6)) + ABtemp * 2 * (x_4_0_4 -  CDcom * x_4_0_5);
                                    QUICKDouble x_29_0_4 = Ptempx * x_18_0_4 + WPtempx * x_18_0_5;
                                    QUICKDouble x_30_0_4 = Ptempy * x_15_0_4 + WPtempy * x_15_0_5 + ABtemp * 2 * (x_5_0_4 -  CDcom * x_5_0_5);
                                    QUICKDouble x_31_0_4 = Ptempy * x_19_0_4 + WPtempy * x_19_0_5;
                                    QUICKDouble x_32_0_4 = Ptempx * x_17_0_4 + WPtempx * (  Ptempx * x_7_0_5 + WPtempx * (  Ptempx * x_1_0_6 + WPtempx * (  Ptempx * VY( 0, 0, 7) + WPtempx * VY( 0, 0, 8)) + ABtemp * (VY( 0, 0, 6) -  CDcom * VY( 0, 0, 7))) + ABtemp * 2 * (x_1_0_5 -  CDcom * x_1_0_6)) + ABtemp * 3 * (x_7_0_4 -  CDcom * x_7_0_5);
                                    QUICKDouble x_33_0_4 = Ptempy * x_18_0_4 + WPtempy * x_18_0_5 + ABtemp * 3 * (x_8_0_4 -  CDcom * x_8_0_5);
                                    QUICKDouble x_34_0_4 = Ptempz * x_19_0_4 + WPtempz * x_19_0_5 + ABtemp * 3 * (x_9_0_4 -  CDcom * x_9_0_5);
                                    // Subroutine for B =            4  L =            1 , m=           3
                                    QUICKDouble x_20_2_3 = Qtempy * x_20_0_3 + WQtempy * x_20_0_4 + 2 * ABCDtemp * x_11_0_4;
                                    QUICKDouble x_21_2_3 = Qtempy * x_21_0_3 + WQtempy * x_21_0_4;
                                    QUICKDouble x_22_2_3 = Qtempy * x_22_0_3 + WQtempy * x_22_0_4 + 2 * ABCDtemp * x_16_0_4;
                                    QUICKDouble x_23_2_3 = Qtempy * x_23_0_3 + WQtempy * x_23_0_4 + ABCDtemp * x_13_0_4;
                                    QUICKDouble x_24_2_3 = Qtempy * x_24_0_3 + WQtempy * x_24_0_4 + 2 * ABCDtemp * x_10_0_4;
                                    QUICKDouble x_25_2_3 = Qtempy * x_25_0_3 + WQtempy * x_25_0_4 + ABCDtemp * x_14_0_4;
                                    QUICKDouble x_26_2_3 = Qtempy * x_26_0_3 + WQtempy * x_26_0_4;
                                    QUICKDouble x_27_2_3 = Qtempy * x_27_0_3 + WQtempy * x_27_0_4;
                                    QUICKDouble x_28_2_3 = Qtempy * x_28_0_3 + WQtempy * x_28_0_4 + ABCDtemp * x_17_0_4;
                                    QUICKDouble x_29_2_3 = Qtempy * x_29_0_3 + WQtempy * x_29_0_4 + 3 * ABCDtemp * x_12_0_4;
                                    QUICKDouble x_30_2_3 = Qtempy * x_30_0_3 + WQtempy * x_30_0_4 + 3 * ABCDtemp * x_15_0_4;
                                    QUICKDouble x_31_2_3 = Qtempy * x_31_0_3 + WQtempy * x_31_0_4 + ABCDtemp * x_19_0_4;
                                    QUICKDouble x_32_2_3 = Qtempy * x_32_0_3 + WQtempy * x_32_0_4;
                                    QUICKDouble x_33_2_3 = Qtempy * x_33_0_3 + WQtempy * x_33_0_4 + 4 * ABCDtemp * x_18_0_4;
                                    QUICKDouble x_34_2_3 = Qtempy * x_34_0_3 + WQtempy * x_34_0_4;
                                    QUICKDouble x_20_3_3 = Qtempz * x_20_0_3 + WQtempz * x_20_0_4;
                                    QUICKDouble x_21_3_3 = Qtempz * x_21_0_3 + WQtempz * x_21_0_4 + 2 * ABCDtemp * x_13_0_4;
                                    QUICKDouble x_22_3_3 = Qtempz * x_22_0_3 + WQtempz * x_22_0_4 + 2 * ABCDtemp * x_15_0_4;
                                    QUICKDouble x_23_3_3 = Qtempz * x_23_0_3 + WQtempz * x_23_0_4 + ABCDtemp * x_11_0_4;
                                    QUICKDouble x_24_3_3 = Qtempz * x_24_0_3 + WQtempz * x_24_0_4 + ABCDtemp * x_12_0_4;
                                    QUICKDouble x_25_3_3 = Qtempz * x_25_0_3 + WQtempz * x_25_0_4 + 2 * ABCDtemp * x_10_0_4;
                                    QUICKDouble x_26_3_3 = Qtempz * x_26_0_3 + WQtempz * x_26_0_4 + ABCDtemp * x_17_0_4;
                                    QUICKDouble x_27_3_3 = Qtempz * x_27_0_3 + WQtempz * x_27_0_4 + 3 * ABCDtemp * x_14_0_4;
                                    QUICKDouble x_28_3_3 = Qtempz * x_28_0_3 + WQtempz * x_28_0_4;
                                    QUICKDouble x_29_3_3 = Qtempz * x_29_0_3 + WQtempz * x_29_0_4;
                                    QUICKDouble x_30_3_3 = Qtempz * x_30_0_3 + WQtempz * x_30_0_4 + ABCDtemp * x_18_0_4;
                                    QUICKDouble x_31_3_3 = Qtempz * x_31_0_3 + WQtempz * x_31_0_4 + 3 * ABCDtemp * x_16_0_4;
                                    QUICKDouble x_32_3_3 = Qtempz * x_32_0_3 + WQtempz * x_32_0_4;
                                    QUICKDouble x_33_3_3 = Qtempz * x_33_0_3 + WQtempz * x_33_0_4;
                                    QUICKDouble x_34_3_3 = Qtempz * x_34_0_3 + WQtempz * x_34_0_4 + 4 * ABCDtemp * x_19_0_4;
                                    
                                    // Subroutine for B =            4  L =            2 , m=           2
                                    QUICKDouble x_20_5_2 = Qtempy * x_20_3_2 + WQtempy * x_20_3_3 + 2 * ABCDtemp * x_11_3_3;
                                    QUICKDouble x_21_5_2 = Qtempy * x_21_3_2 + WQtempy * x_21_3_3;
                                    QUICKDouble x_22_5_2 = Qtempy * x_22_3_2 + WQtempy * x_22_3_3 + 2 * ABCDtemp * x_16_3_3;
                                    QUICKDouble x_23_5_2 = Qtempy * x_23_3_2 + WQtempy * x_23_3_3 + ABCDtemp * x_13_3_3;
                                    QUICKDouble x_24_5_2 = Qtempy * x_24_3_2 + WQtempy * x_24_3_3 + 2 * ABCDtemp * x_10_3_3;
                                    QUICKDouble x_25_5_2 = Qtempy * x_25_3_2 + WQtempy * x_25_3_3 + ABCDtemp * x_14_3_3;
                                    QUICKDouble x_26_5_2 = Qtempy * x_26_3_2 + WQtempy * x_26_3_3;
                                    QUICKDouble x_27_5_2 = Qtempy * x_27_3_2 + WQtempy * x_27_3_3;
                                    QUICKDouble x_28_5_2 = Qtempy * x_28_3_2 + WQtempy * x_28_3_3 + ABCDtemp * x_17_3_3;
                                    QUICKDouble x_29_5_2 = Qtempy * x_29_3_2 + WQtempy * x_29_3_3 + 3 * ABCDtemp * x_12_3_3;
                                    QUICKDouble x_30_5_2 = Qtempy * x_30_3_2 + WQtempy * x_30_3_3 + 3 * ABCDtemp * x_15_3_3;
                                    QUICKDouble x_31_5_2 = Qtempy * x_31_3_2 + WQtempy * x_31_3_3 + ABCDtemp * x_19_3_3;
                                    QUICKDouble x_32_5_2 = Qtempy * x_32_3_2 + WQtempy * x_32_3_3;
                                    QUICKDouble x_33_5_2 = Qtempy * x_33_3_2 + WQtempy * x_33_3_3 + 4 * ABCDtemp * x_18_3_3;
                                    QUICKDouble x_34_5_2 = Qtempy * x_34_3_2 + WQtempy * x_34_3_3;
                                    QUICKDouble x_20_8_2 = Qtempy * x_20_2_2 + WQtempy * x_20_2_3 + CDtemp * (x_20_0_2 -  ABcom * x_20_0_3) + 2 * ABCDtemp * x_11_2_3;
                                    QUICKDouble x_21_8_2 = Qtempy * x_21_2_2 + WQtempy * x_21_2_3 + CDtemp * (x_21_0_2 -  ABcom * x_21_0_3);
                                    QUICKDouble x_22_8_2 = Qtempy * x_22_2_2 + WQtempy * x_22_2_3 + CDtemp * (x_22_0_2 -  ABcom * x_22_0_3) + 2 * ABCDtemp * x_16_2_3;
                                    QUICKDouble x_23_8_2 = Qtempy * x_23_2_2 + WQtempy * x_23_2_3 + CDtemp * (x_23_0_2 -  ABcom * x_23_0_3) + ABCDtemp * x_13_2_3;
                                    QUICKDouble x_24_8_2 = Qtempy * x_24_2_2 + WQtempy * x_24_2_3 + CDtemp * (x_24_0_2 -  ABcom * x_24_0_3) + 2 * ABCDtemp * x_10_2_3;
                                    QUICKDouble x_25_8_2 = Qtempy * x_25_2_2 + WQtempy * x_25_2_3 + CDtemp * (x_25_0_2 -  ABcom * x_25_0_3) + ABCDtemp * x_14_2_3;
                                    QUICKDouble x_26_8_2 = Qtempy * x_26_2_2 + WQtempy * x_26_2_3 + CDtemp * (x_26_0_2 -  ABcom * x_26_0_3);
                                    QUICKDouble x_27_8_2 = Qtempy * x_27_2_2 + WQtempy * x_27_2_3 + CDtemp * (x_27_0_2 -  ABcom * x_27_0_3);
                                    QUICKDouble x_28_8_2 = Qtempy * x_28_2_2 + WQtempy * x_28_2_3 + CDtemp * (x_28_0_2 -  ABcom * x_28_0_3) + ABCDtemp * x_17_2_3;
                                    QUICKDouble x_29_8_2 = Qtempy * x_29_2_2 + WQtempy * x_29_2_3 + CDtemp * (x_29_0_2 -  ABcom * x_29_0_3) + 3 * ABCDtemp * x_12_2_3;
                                    QUICKDouble x_30_8_2 = Qtempy * x_30_2_2 + WQtempy * x_30_2_3 + CDtemp * (x_30_0_2 -  ABcom * x_30_0_3) + 3 * ABCDtemp * x_15_2_3;
                                    QUICKDouble x_31_8_2 = Qtempy * x_31_2_2 + WQtempy * x_31_2_3 + CDtemp * (x_31_0_2 -  ABcom * x_31_0_3) + ABCDtemp * x_19_2_3;
                                    QUICKDouble x_32_8_2 = Qtempy * x_32_2_2 + WQtempy * x_32_2_3 + CDtemp * (x_32_0_2 -  ABcom * x_32_0_3);
                                    QUICKDouble x_33_8_2 = Qtempy * x_33_2_2 + WQtempy * x_33_2_3 + CDtemp * (x_33_0_2 -  ABcom * x_33_0_3) + 4 * ABCDtemp * x_18_2_3;
                                    QUICKDouble x_34_8_2 = Qtempy * x_34_2_2 + WQtempy * x_34_2_3 + CDtemp * (x_34_0_2 -  ABcom * x_34_0_3);
                                    QUICKDouble x_20_9_2 = Qtempz * x_20_3_2 + WQtempz * x_20_3_3 + CDtemp * (x_20_0_2 -  ABcom * x_20_0_3);
                                    QUICKDouble x_21_9_2 = Qtempz * x_21_3_2 + WQtempz * x_21_3_3 + CDtemp * (x_21_0_2 -  ABcom * x_21_0_3) + 2 * ABCDtemp * x_13_3_3;
                                    QUICKDouble x_22_9_2 = Qtempz * x_22_3_2 + WQtempz * x_22_3_3 + CDtemp * (x_22_0_2 -  ABcom * x_22_0_3) + 2 * ABCDtemp * x_15_3_3;
                                    QUICKDouble x_23_9_2 = Qtempz * x_23_3_2 + WQtempz * x_23_3_3 + CDtemp * (x_23_0_2 -  ABcom * x_23_0_3) + ABCDtemp * x_11_3_3;
                                    QUICKDouble x_24_9_2 = Qtempz * x_24_3_2 + WQtempz * x_24_3_3 + CDtemp * (x_24_0_2 -  ABcom * x_24_0_3) + ABCDtemp * x_12_3_3;
                                    QUICKDouble x_25_9_2 = Qtempz * x_25_3_2 + WQtempz * x_25_3_3 + CDtemp * (x_25_0_2 -  ABcom * x_25_0_3) + 2 * ABCDtemp * x_10_3_3;
                                    QUICKDouble x_26_9_2 = Qtempz * x_26_3_2 + WQtempz * x_26_3_3 + CDtemp * (x_26_0_2 -  ABcom * x_26_0_3) + ABCDtemp * x_17_3_3;
                                    QUICKDouble x_27_9_2 = Qtempz * x_27_3_2 + WQtempz * x_27_3_3 + CDtemp * (x_27_0_2 -  ABcom * x_27_0_3) + 3 * ABCDtemp * x_14_3_3;
                                    QUICKDouble x_28_9_2 = Qtempz * x_28_3_2 + WQtempz * x_28_3_3 + CDtemp * (x_28_0_2 -  ABcom * x_28_0_3);
                                    QUICKDouble x_29_9_2 = Qtempz * x_29_3_2 + WQtempz * x_29_3_3 + CDtemp * (x_29_0_2 -  ABcom * x_29_0_3);
                                    QUICKDouble x_30_9_2 = Qtempz * x_30_3_2 + WQtempz * x_30_3_3 + CDtemp * (x_30_0_2 -  ABcom * x_30_0_3) + ABCDtemp * x_18_3_3;
                                    QUICKDouble x_31_9_2 = Qtempz * x_31_3_2 + WQtempz * x_31_3_3 + CDtemp * (x_31_0_2 -  ABcom * x_31_0_3) + 3 * ABCDtemp * x_16_3_3;
                                    QUICKDouble x_32_9_2 = Qtempz * x_32_3_2 + WQtempz * x_32_3_3 + CDtemp * (x_32_0_2 -  ABcom * x_32_0_3);
                                    QUICKDouble x_33_9_2 = Qtempz * x_33_3_2 + WQtempz * x_33_3_3 + CDtemp * (x_33_0_2 -  ABcom * x_33_0_3);
                                    QUICKDouble x_34_9_2 = Qtempz * x_34_3_2 + WQtempz * x_34_3_3 + CDtemp * (x_34_0_2 -  ABcom * x_34_0_3) + 4 * ABCDtemp * x_19_3_3;
                                    
                                    // Subroutine for B =            4  L =            3 , m=           1
                                    QUICKDouble x_20_15_1 = Qtempy * x_20_5_1 + WQtempy * x_20_5_2 + CDtemp * (x_20_3_1 -  ABcom * x_20_3_2) + 2 * ABCDtemp * x_11_5_2;
                                    QUICKDouble x_21_15_1 = Qtempy * x_21_5_1 + WQtempy * x_21_5_2 + CDtemp * (x_21_3_1 -  ABcom * x_21_3_2);
                                    QUICKDouble x_22_15_1 = Qtempy * x_22_5_1 + WQtempy * x_22_5_2 + CDtemp * (x_22_3_1 -  ABcom * x_22_3_2) + 2 * ABCDtemp * x_16_5_2;
                                    QUICKDouble x_23_15_1 = Qtempy * x_23_5_1 + WQtempy * x_23_5_2 + CDtemp * (x_23_3_1 -  ABcom * x_23_3_2) + ABCDtemp * x_13_5_2;
                                    QUICKDouble x_24_15_1 = Qtempy * x_24_5_1 + WQtempy * x_24_5_2 + CDtemp * (x_24_3_1 -  ABcom * x_24_3_2) + 2 * ABCDtemp * x_10_5_2;
                                    QUICKDouble x_25_15_1 = Qtempy * x_25_5_1 + WQtempy * x_25_5_2 + CDtemp * (x_25_3_1 -  ABcom * x_25_3_2) + ABCDtemp * x_14_5_2;
                                    QUICKDouble x_26_15_1 = Qtempy * x_26_5_1 + WQtempy * x_26_5_2 + CDtemp * (x_26_3_1 -  ABcom * x_26_3_2);
                                    QUICKDouble x_27_15_1 = Qtempy * x_27_5_1 + WQtempy * x_27_5_2 + CDtemp * (x_27_3_1 -  ABcom * x_27_3_2);
                                    QUICKDouble x_28_15_1 = Qtempy * x_28_5_1 + WQtempy * x_28_5_2 + CDtemp * (x_28_3_1 -  ABcom * x_28_3_2) + ABCDtemp * x_17_5_2;
                                    QUICKDouble x_29_15_1 = Qtempy * x_29_5_1 + WQtempy * x_29_5_2 + CDtemp * (x_29_3_1 -  ABcom * x_29_3_2) + 3 * ABCDtemp * x_12_5_2;
                                    QUICKDouble x_30_15_1 = Qtempy * x_30_5_1 + WQtempy * x_30_5_2 + CDtemp * (x_30_3_1 -  ABcom * x_30_3_2) + 3 * ABCDtemp * x_15_5_2;
                                    QUICKDouble x_31_15_1 = Qtempy * x_31_5_1 + WQtempy * x_31_5_2 + CDtemp * (x_31_3_1 -  ABcom * x_31_3_2) + ABCDtemp * x_19_5_2;
                                    QUICKDouble x_32_15_1 = Qtempy * x_32_5_1 + WQtempy * x_32_5_2 + CDtemp * (x_32_3_1 -  ABcom * x_32_3_2);
                                    QUICKDouble x_33_15_1 = Qtempy * x_33_5_1 + WQtempy * x_33_5_2 + CDtemp * (x_33_3_1 -  ABcom * x_33_3_2) + 4 * ABCDtemp * x_18_5_2;
                                    QUICKDouble x_34_15_1 = Qtempy * x_34_5_1 + WQtempy * x_34_5_2 + CDtemp * (x_34_3_1 -  ABcom * x_34_3_2);
                                    QUICKDouble x_20_16_1 = Qtempy * x_20_9_1 + WQtempy * x_20_9_2 + 2 * ABCDtemp * x_11_9_2;
                                    QUICKDouble x_21_16_1 = Qtempy * x_21_9_1 + WQtempy * x_21_9_2;
                                    QUICKDouble x_22_16_1 = Qtempy * x_22_9_1 + WQtempy * x_22_9_2 + 2 * ABCDtemp * x_16_9_2;
                                    QUICKDouble x_23_16_1 = Qtempy * x_23_9_1 + WQtempy * x_23_9_2 + ABCDtemp * x_13_9_2;
                                    QUICKDouble x_24_16_1 = Qtempy * x_24_9_1 + WQtempy * x_24_9_2 + 2 * ABCDtemp * x_10_9_2;
                                    QUICKDouble x_25_16_1 = Qtempy * x_25_9_1 + WQtempy * x_25_9_2 + ABCDtemp * x_14_9_2;
                                    QUICKDouble x_26_16_1 = Qtempy * x_26_9_1 + WQtempy * x_26_9_2;
                                    QUICKDouble x_27_16_1 = Qtempy * x_27_9_1 + WQtempy * x_27_9_2;
                                    QUICKDouble x_28_16_1 = Qtempy * x_28_9_1 + WQtempy * x_28_9_2 + ABCDtemp * x_17_9_2;
                                    QUICKDouble x_29_16_1 = Qtempy * x_29_9_1 + WQtempy * x_29_9_2 + 3 * ABCDtemp * x_12_9_2;
                                    QUICKDouble x_30_16_1 = Qtempy * x_30_9_1 + WQtempy * x_30_9_2 + 3 * ABCDtemp * x_15_9_2;
                                    QUICKDouble x_31_16_1 = Qtempy * x_31_9_1 + WQtempy * x_31_9_2 + ABCDtemp * x_19_9_2;
                                    QUICKDouble x_32_16_1 = Qtempy * x_32_9_1 + WQtempy * x_32_9_2;
                                    QUICKDouble x_33_16_1 = Qtempy * x_33_9_1 + WQtempy * x_33_9_2 + 4 * ABCDtemp * x_18_9_2;
                                    QUICKDouble x_34_16_1 = Qtempy * x_34_9_1 + WQtempy * x_34_9_2;
                                    QUICKDouble x_20_18_1 = Qtempy * x_20_8_1 + WQtempy * x_20_8_2 + CDtemp * 2 * (x_20_2_1 -  ABcom * x_20_2_2) + 2 * ABCDtemp * x_11_8_2;
                                    QUICKDouble x_21_18_1 = Qtempy * x_21_8_1 + WQtempy * x_21_8_2 + CDtemp * 2 * (x_21_2_1 -  ABcom * x_21_2_2);
                                    QUICKDouble x_22_18_1 = Qtempy * x_22_8_1 + WQtempy * x_22_8_2 + CDtemp * 2 * (x_22_2_1 -  ABcom * x_22_2_2) + 2 * ABCDtemp * x_16_8_2;
                                    QUICKDouble x_23_18_1 = Qtempy * x_23_8_1 + WQtempy * x_23_8_2 + CDtemp * 2 * (x_23_2_1 -  ABcom * x_23_2_2) + ABCDtemp * x_13_8_2;
                                    QUICKDouble x_24_18_1 = Qtempy * x_24_8_1 + WQtempy * x_24_8_2 + CDtemp * 2 * (x_24_2_1 -  ABcom * x_24_2_2) + 2 * ABCDtemp * x_10_8_2;
                                    QUICKDouble x_25_18_1 = Qtempy * x_25_8_1 + WQtempy * x_25_8_2 + CDtemp * 2 * (x_25_2_1 -  ABcom * x_25_2_2) + ABCDtemp * x_14_8_2;
                                    QUICKDouble x_26_18_1 = Qtempy * x_26_8_1 + WQtempy * x_26_8_2 + CDtemp * 2 * (x_26_2_1 -  ABcom * x_26_2_2);
                                    QUICKDouble x_27_18_1 = Qtempy * x_27_8_1 + WQtempy * x_27_8_2 + CDtemp * 2 * (x_27_2_1 -  ABcom * x_27_2_2);
                                    QUICKDouble x_28_18_1 = Qtempy * x_28_8_1 + WQtempy * x_28_8_2 + CDtemp * 2 * (x_28_2_1 -  ABcom * x_28_2_2) + ABCDtemp * x_17_8_2;
                                    QUICKDouble x_29_18_1 = Qtempy * x_29_8_1 + WQtempy * x_29_8_2 + CDtemp * 2 * (x_29_2_1 -  ABcom * x_29_2_2) + 3 * ABCDtemp * x_12_8_2;
                                    QUICKDouble x_30_18_1 = Qtempy * x_30_8_1 + WQtempy * x_30_8_2 + CDtemp * 2 * (x_30_2_1 -  ABcom * x_30_2_2) + 3 * ABCDtemp * x_15_8_2;
                                    QUICKDouble x_31_18_1 = Qtempy * x_31_8_1 + WQtempy * x_31_8_2 + CDtemp * 2 * (x_31_2_1 -  ABcom * x_31_2_2) + ABCDtemp * x_19_8_2;
                                    QUICKDouble x_32_18_1 = Qtempy * x_32_8_1 + WQtempy * x_32_8_2 + CDtemp * 2 * (x_32_2_1 -  ABcom * x_32_2_2);
                                    QUICKDouble x_33_18_1 = Qtempy * x_33_8_1 + WQtempy * x_33_8_2 + CDtemp * 2 * (x_33_2_1 -  ABcom * x_33_2_2) + 4 * ABCDtemp * x_18_8_2;
                                    QUICKDouble x_34_18_1 = Qtempy * x_34_8_1 + WQtempy * x_34_8_2 + CDtemp * 2 * (x_34_2_1 -  ABcom * x_34_2_2);
                                    QUICKDouble x_20_19_1 = Qtempz * x_20_9_1 + WQtempz * x_20_9_2 + CDtemp * 2 * (x_20_3_1 -  ABcom * x_20_3_2);
                                    QUICKDouble x_21_19_1 = Qtempz * x_21_9_1 + WQtempz * x_21_9_2 + CDtemp * 2 * (x_21_3_1 -  ABcom * x_21_3_2) + 2 * ABCDtemp * x_13_9_2;
                                    QUICKDouble x_22_19_1 = Qtempz * x_22_9_1 + WQtempz * x_22_9_2 + CDtemp * 2 * (x_22_3_1 -  ABcom * x_22_3_2) + 2 * ABCDtemp * x_15_9_2;
                                    QUICKDouble x_23_19_1 = Qtempz * x_23_9_1 + WQtempz * x_23_9_2 + CDtemp * 2 * (x_23_3_1 -  ABcom * x_23_3_2) + ABCDtemp * x_11_9_2;
                                    QUICKDouble x_24_19_1 = Qtempz * x_24_9_1 + WQtempz * x_24_9_2 + CDtemp * 2 * (x_24_3_1 -  ABcom * x_24_3_2) + ABCDtemp * x_12_9_2;
                                    QUICKDouble x_25_19_1 = Qtempz * x_25_9_1 + WQtempz * x_25_9_2 + CDtemp * 2 * (x_25_3_1 -  ABcom * x_25_3_2) + 2 * ABCDtemp * x_10_9_2;
                                    QUICKDouble x_26_19_1 = Qtempz * x_26_9_1 + WQtempz * x_26_9_2 + CDtemp * 2 * (x_26_3_1 -  ABcom * x_26_3_2) + ABCDtemp * x_17_9_2;
                                    QUICKDouble x_27_19_1 = Qtempz * x_27_9_1 + WQtempz * x_27_9_2 + CDtemp * 2 * (x_27_3_1 -  ABcom * x_27_3_2) + 3 * ABCDtemp * x_14_9_2;
                                    QUICKDouble x_28_19_1 = Qtempz * x_28_9_1 + WQtempz * x_28_9_2 + CDtemp * 2 * (x_28_3_1 -  ABcom * x_28_3_2);
                                    QUICKDouble x_29_19_1 = Qtempz * x_29_9_1 + WQtempz * x_29_9_2 + CDtemp * 2 * (x_29_3_1 -  ABcom * x_29_3_2);
                                    QUICKDouble x_30_19_1 = Qtempz * x_30_9_1 + WQtempz * x_30_9_2 + CDtemp * 2 * (x_30_3_1 -  ABcom * x_30_3_2) + ABCDtemp * x_18_9_2;
                                    QUICKDouble x_31_19_1 = Qtempz * x_31_9_1 + WQtempz * x_31_9_2 + CDtemp * 2 * (x_31_3_1 -  ABcom * x_31_3_2) + 3 * ABCDtemp * x_16_9_2;
                                    QUICKDouble x_32_19_1 = Qtempz * x_32_9_1 + WQtempz * x_32_9_2 + CDtemp * 2 * (x_32_3_1 -  ABcom * x_32_3_2);
                                    QUICKDouble x_33_19_1 = Qtempz * x_33_9_1 + WQtempz * x_33_9_2 + CDtemp * 2 * (x_33_3_1 -  ABcom * x_33_3_2);
                                    QUICKDouble x_34_19_1 = Qtempz * x_34_9_1 + WQtempz * x_34_9_2 + CDtemp * 2 * (x_34_3_1 -  ABcom * x_34_3_2) + 4 * ABCDtemp * x_19_9_2;
                                    
                                    // Subroutine for B =            4  L =            4 , m=           0
                                    
                                    // WRITE LAST FOR I =            4  J=           4
                                    LOC2(store, 20, 20, STOREDIM, STOREDIM) = (  Qtempx * x_20_12_0 + WQtempx * (  Qtempx * x_20_8_1 + WQtempx * x_20_8_2 + 2 * ABCDtemp * x_12_8_2) + CDtemp * (x_20_8_0 -  ABcom * x_20_8_1) + 2 * ABCDtemp * (  Qtempx * x_12_8_1 + WQtempx * x_12_8_2 + ABCDtemp * x_8_8_2));
                                    LOC2(store, 20, 21, STOREDIM, STOREDIM) = (  Qtempx * x_20_14_0 + WQtempx * (  Qtempx * x_20_9_1 + WQtempx * x_20_9_2 + 2 * ABCDtemp * x_12_9_2) + CDtemp * (x_20_9_0 -  ABcom * x_20_9_1) + 2 * ABCDtemp * (  Qtempx * x_12_9_1 + WQtempx * x_12_9_2 + ABCDtemp * x_8_9_2));
                                    LOC2(store, 20, 22, STOREDIM, STOREDIM) = (  Qtempy * x_20_16_0 + WQtempy * x_20_16_1 + CDtemp * (x_20_9_0 -  ABcom * x_20_9_1) + 2 * ABCDtemp * x_11_16_1);
                                    LOC2(store, 20, 23, STOREDIM, STOREDIM) = (  Qtempx * x_20_10_0 + WQtempx * (  Qtempx * x_20_5_1 + WQtempx * x_20_5_2 + 2 * ABCDtemp * x_12_5_2) + CDtemp * (x_20_5_0 -  ABcom * x_20_5_1) + 2 * ABCDtemp * (  Qtempx * x_12_5_1 + WQtempx * x_12_5_2 + ABCDtemp * x_8_5_2));
                                    LOC2(store, 20, 24, STOREDIM, STOREDIM) = (  Qtempx * x_20_15_0 + WQtempx * x_20_15_1 + 2 * ABCDtemp * x_12_15_1);
                                    LOC2(store, 20, 25, STOREDIM, STOREDIM) = (  Qtempx * x_20_16_0 + WQtempx * x_20_16_1 + 2 * ABCDtemp * x_12_16_1);
                                    LOC2(store, 20, 26, STOREDIM, STOREDIM) = (  Qtempx * x_20_13_0 + WQtempx * (  Qtempx * x_20_6_1 + WQtempx * (  Qtempx * x_20_3_2 + WQtempx * x_20_3_3 + 2 * ABCDtemp * x_12_3_3) + CDtemp * (x_20_3_1 -  ABcom * x_20_3_2) + 2 * ABCDtemp * x_12_6_2) + CDtemp * 2 * (x_20_6_0 -  ABcom * x_20_6_1) + 2 * ABCDtemp * (  Qtempx * x_12_6_1 + WQtempx * x_12_6_2 + CDtemp * (x_12_3_1 -  ABcom * x_12_3_2) + ABCDtemp * (  Ptempy * x_2_6_2 + WPtempy * x_2_6_3 + ABtemp * (x_0_6_2 -  CDcom * x_0_6_3))));
                                    LOC2(store, 20, 27, STOREDIM, STOREDIM) = (  Qtempx * x_20_19_0 + WQtempx * x_20_19_1 + 2 * ABCDtemp * x_12_19_1);
                                    LOC2(store, 20, 28, STOREDIM, STOREDIM) = (  Qtempx * x_20_11_0 + WQtempx * (  Qtempx * x_20_4_1 + WQtempx * (  Qtempx * x_20_2_2 + WQtempx * x_20_2_3 + 2 * ABCDtemp * x_12_2_3) + CDtemp * (x_20_2_1 -  ABcom * x_20_2_2) + 2 * ABCDtemp * x_12_4_2) + CDtemp * 2 * (x_20_4_0 -  ABcom * x_20_4_1) + 2 * ABCDtemp * (  Qtempx * x_12_4_1 + WQtempx * x_12_4_2 + CDtemp * (x_12_2_1 -  ABcom * x_12_2_2) + ABCDtemp * (  Ptempy * x_2_4_2 + WPtempy * x_2_4_3 + ABtemp * (x_0_4_2 -  CDcom * x_0_4_3) + ABCDtemp * x_2_1_3)));
                                    LOC2(store, 20, 29, STOREDIM, STOREDIM) = (  Qtempx * x_20_18_0 + WQtempx * x_20_18_1 + 2 * ABCDtemp * x_12_18_1);
                                    LOC2(store, 20, 30, STOREDIM, STOREDIM) = (  Qtempy * x_20_15_0 + WQtempy * x_20_15_1 + CDtemp * 2 * (x_20_5_0 -  ABcom * x_20_5_1) + 2 * ABCDtemp * x_11_15_1);
                                    LOC2(store, 20, 31, STOREDIM, STOREDIM) = (  Qtempy * x_20_19_0 + WQtempy * x_20_19_1 + 2 * ABCDtemp * x_11_19_1);
                                    LOC2(store, 20, 32, STOREDIM, STOREDIM) = (  Qtempx * x_20_17_0 + WQtempx * (  Qtempx * x_20_7_1 + WQtempx * (  Qtempx * x_20_1_2 + WQtempx * (  Qtempx * x_20_0_3 + WQtempx * x_20_0_4 + 2 * ABCDtemp * x_12_0_4) + CDtemp * (x_20_0_2 -  ABcom * x_20_0_3) + 2 * ABCDtemp * x_12_1_3) + CDtemp * 2 * (x_20_1_1 -  ABcom * x_20_1_2) + 2 * ABCDtemp * x_12_7_2) + CDtemp * 3 * (x_20_7_0 -  ABcom * x_20_7_1) + 2 * ABCDtemp * (  Qtempx * x_12_7_1 + WQtempx * x_12_7_2 + CDtemp * 2 * (x_12_1_1 -  ABcom * x_12_1_2) + ABCDtemp * (  Ptempy * x_2_7_2 + WPtempy * x_2_7_3 + ABtemp * (x_0_7_2 -  CDcom * x_0_7_3))));
                                    LOC2(store, 20, 33, STOREDIM, STOREDIM) = (  Qtempy * x_20_18_0 + WQtempy * x_20_18_1 + CDtemp * 3 * (x_20_8_0 -  ABcom * x_20_8_1) + 2 * ABCDtemp * x_11_18_1);
                                    LOC2(store, 20, 34, STOREDIM, STOREDIM) = (  Qtempz * x_20_19_0 + WQtempz * x_20_19_1 + CDtemp * 3 * (x_20_9_0 -  ABcom * x_20_9_1));
                                    LOC2(store, 21, 20, STOREDIM, STOREDIM) = (  Qtempx * x_21_12_0 + WQtempx * (  Qtempx * x_21_8_1 + WQtempx * x_21_8_2 + 2 * ABCDtemp * x_14_8_2) + CDtemp * (x_21_8_0 -  ABcom * x_21_8_1) + 2 * ABCDtemp * (  Qtempx * x_14_8_1 + WQtempx * x_14_8_2 + ABCDtemp * x_9_8_2));
                                    LOC2(store, 21, 21, STOREDIM, STOREDIM) = (  Qtempx * x_21_14_0 + WQtempx * (  Qtempx * x_21_9_1 + WQtempx * x_21_9_2 + 2 * ABCDtemp * x_14_9_2) + CDtemp * (x_21_9_0 -  ABcom * x_21_9_1) + 2 * ABCDtemp * (  Qtempx * x_14_9_1 + WQtempx * x_14_9_2 + ABCDtemp * x_9_9_2));
                                    LOC2(store, 21, 22, STOREDIM, STOREDIM) = (  Qtempy * x_21_16_0 + WQtempy * x_21_16_1 + CDtemp * (x_21_9_0 -  ABcom * x_21_9_1));
                                    LOC2(store, 21, 23, STOREDIM, STOREDIM) = (  Qtempx * x_21_10_0 + WQtempx * (  Qtempx * x_21_5_1 + WQtempx * x_21_5_2 + 2 * ABCDtemp * x_14_5_2) + CDtemp * (x_21_5_0 -  ABcom * x_21_5_1) + 2 * ABCDtemp * (  Qtempx * x_14_5_1 + WQtempx * x_14_5_2 + ABCDtemp * x_9_5_2));
                                    LOC2(store, 21, 24, STOREDIM, STOREDIM) = (  Qtempx * x_21_15_0 + WQtempx * x_21_15_1 + 2 * ABCDtemp * x_14_15_1);
                                    LOC2(store, 21, 25, STOREDIM, STOREDIM) = (  Qtempx * x_21_16_0 + WQtempx * x_21_16_1 + 2 * ABCDtemp * x_14_16_1);
                                    LOC2(store, 21, 26, STOREDIM, STOREDIM) = (  Qtempx * x_21_13_0 + WQtempx * (  Qtempx * x_21_6_1 + WQtempx * (  Qtempx * x_21_3_2 + WQtempx * x_21_3_3 + 2 * ABCDtemp * x_14_3_3) + CDtemp * (x_21_3_1 -  ABcom * x_21_3_2) + 2 * ABCDtemp * x_14_6_2) + CDtemp * 2 * (x_21_6_0 -  ABcom * x_21_6_1) + 2 * ABCDtemp * (  Qtempx * x_14_6_1 + WQtempx * x_14_6_2 + CDtemp * (x_14_3_1 -  ABcom * x_14_3_2) + ABCDtemp * (  Ptempz * x_3_6_2 + WPtempz * x_3_6_3 + ABtemp * (x_0_6_2 -  CDcom * x_0_6_3) + ABCDtemp * x_3_1_3)));
                                    LOC2(store, 21, 27, STOREDIM, STOREDIM) = (  Qtempx * x_21_19_0 + WQtempx * x_21_19_1 + 2 * ABCDtemp * x_14_19_1);
                                    LOC2(store, 21, 28, STOREDIM, STOREDIM) = (  Qtempx * x_21_11_0 + WQtempx * (  Qtempx * x_21_4_1 + WQtempx * (  Qtempx * x_21_2_2 + WQtempx * x_21_2_3 + 2 * ABCDtemp * x_14_2_3) + CDtemp * (x_21_2_1 -  ABcom * x_21_2_2) + 2 * ABCDtemp * x_14_4_2) + CDtemp * 2 * (x_21_4_0 -  ABcom * x_21_4_1) + 2 * ABCDtemp * (  Qtempx * x_14_4_1 + WQtempx * x_14_4_2 + CDtemp * (x_14_2_1 -  ABcom * x_14_2_2) + ABCDtemp * (  Ptempz * x_3_4_2 + WPtempz * x_3_4_3 + ABtemp * (x_0_4_2 -  CDcom * x_0_4_3))));
                                    LOC2(store, 21, 29, STOREDIM, STOREDIM) = (  Qtempx * x_21_18_0 + WQtempx * x_21_18_1 + 2 * ABCDtemp * x_14_18_1);
                                    LOC2(store, 21, 30, STOREDIM, STOREDIM) = (  Qtempy * x_21_15_0 + WQtempy * x_21_15_1 + CDtemp * 2 * (x_21_5_0 -  ABcom * x_21_5_1));
                                    LOC2(store, 21, 31, STOREDIM, STOREDIM) = (  Qtempy * x_21_19_0 + WQtempy * x_21_19_1);
                                    LOC2(store, 21, 32, STOREDIM, STOREDIM) = (  Qtempx * x_21_17_0 + WQtempx * (  Qtempx * x_21_7_1 + WQtempx * (  Qtempx * x_21_1_2 + WQtempx * (  Qtempx * x_21_0_3 + WQtempx * x_21_0_4 + 2 * ABCDtemp * x_14_0_4) + CDtemp * (x_21_0_2 -  ABcom * x_21_0_3) + 2 * ABCDtemp * x_14_1_3) + CDtemp * 2 * (x_21_1_1 -  ABcom * x_21_1_2) + 2 * ABCDtemp * x_14_7_2) + CDtemp * 3 * (x_21_7_0 -  ABcom * x_21_7_1) + 2 * ABCDtemp * (  Qtempx * x_14_7_1 + WQtempx * x_14_7_2 + CDtemp * 2 * (x_14_1_1 -  ABcom * x_14_1_2) + ABCDtemp * (  Ptempz * x_3_7_2 + WPtempz * x_3_7_3 + ABtemp * (x_0_7_2 -  CDcom * x_0_7_3))));
                                    LOC2(store, 21, 33, STOREDIM, STOREDIM) = (  Qtempy * x_21_18_0 + WQtempy * x_21_18_1 + CDtemp * 3 * (x_21_8_0 -  ABcom * x_21_8_1));
                                    LOC2(store, 21, 34, STOREDIM, STOREDIM) = (  Qtempz * x_21_19_0 + WQtempz * x_21_19_1 + CDtemp * 3 * (x_21_9_0 -  ABcom * x_21_9_1) + 2 * ABCDtemp * x_13_19_1);
                                    LOC2(store, 22, 20, STOREDIM, STOREDIM) = (  Qtempx * x_22_12_0 + WQtempx * (  Qtempx * x_22_8_1 + WQtempx * x_22_8_2) + CDtemp * (x_22_8_0 -  ABcom * x_22_8_1));
                                    LOC2(store, 22, 21, STOREDIM, STOREDIM) = (  Qtempx * x_22_14_0 + WQtempx * (  Qtempx * x_22_9_1 + WQtempx * x_22_9_2) + CDtemp * (x_22_9_0 -  ABcom * x_22_9_1));
                                    LOC2(store, 22, 22, STOREDIM, STOREDIM) = (  Qtempy * x_22_16_0 + WQtempy * x_22_16_1 + CDtemp * (x_22_9_0 -  ABcom * x_22_9_1) + 2 * ABCDtemp * x_16_16_1);
                                    LOC2(store, 22, 23, STOREDIM, STOREDIM) = (  Qtempx * x_22_10_0 + WQtempx * (  Qtempx * x_22_5_1 + WQtempx * x_22_5_2) + CDtemp * (x_22_5_0 -  ABcom * x_22_5_1));
                                    LOC2(store, 22, 24, STOREDIM, STOREDIM) = (  Qtempx * x_22_15_0 + WQtempx * x_22_15_1);
                                    LOC2(store, 22, 25, STOREDIM, STOREDIM) = (  Qtempx * x_22_16_0 + WQtempx * x_22_16_1);
                                    LOC2(store, 22, 26, STOREDIM, STOREDIM) = (  Qtempx * x_22_13_0 + WQtempx * (  Qtempx * x_22_6_1 + WQtempx * (  Qtempx * x_22_3_2 + WQtempx * x_22_3_3) + CDtemp * (x_22_3_1 -  ABcom * x_22_3_2)) + CDtemp * 2 * (x_22_6_0 -  ABcom * x_22_6_1));
                                    LOC2(store, 22, 27, STOREDIM, STOREDIM) = (  Qtempx * x_22_19_0 + WQtempx * x_22_19_1);
                                    LOC2(store, 22, 28, STOREDIM, STOREDIM) = (  Qtempx * x_22_11_0 + WQtempx * (  Qtempx * x_22_4_1 + WQtempx * (  Qtempx * x_22_2_2 + WQtempx * x_22_2_3) + CDtemp * (x_22_2_1 -  ABcom * x_22_2_2)) + CDtemp * 2 * (x_22_4_0 -  ABcom * x_22_4_1));
                                    LOC2(store, 22, 29, STOREDIM, STOREDIM) = (  Qtempx * x_22_18_0 + WQtempx * x_22_18_1);
                                    LOC2(store, 22, 30, STOREDIM, STOREDIM) = (  Qtempy * x_22_15_0 + WQtempy * x_22_15_1 + CDtemp * 2 * (x_22_5_0 -  ABcom * x_22_5_1) + 2 * ABCDtemp * x_16_15_1);
                                    LOC2(store, 22, 31, STOREDIM, STOREDIM) = (  Qtempy * x_22_19_0 + WQtempy * x_22_19_1 + 2 * ABCDtemp * x_16_19_1);
                                    LOC2(store, 22, 32, STOREDIM, STOREDIM) = (  Qtempx * x_22_17_0 + WQtempx * (  Qtempx * x_22_7_1 + WQtempx * (  Qtempx * x_22_1_2 + WQtempx * (  Qtempx * x_22_0_3 + WQtempx * x_22_0_4) + CDtemp * (x_22_0_2 -  ABcom * x_22_0_3)) + CDtemp * 2 * (x_22_1_1 -  ABcom * x_22_1_2)) + CDtemp * 3 * (x_22_7_0 -  ABcom * x_22_7_1));
                                    LOC2(store, 22, 33, STOREDIM, STOREDIM) = (  Qtempy * x_22_18_0 + WQtempy * x_22_18_1 + CDtemp * 3 * (x_22_8_0 -  ABcom * x_22_8_1) + 2 * ABCDtemp * x_16_18_1);
                                    LOC2(store, 22, 34, STOREDIM, STOREDIM) = (  Qtempz * x_22_19_0 + WQtempz * x_22_19_1 + CDtemp * 3 * (x_22_9_0 -  ABcom * x_22_9_1) + 2 * ABCDtemp * x_15_19_1);
                                    LOC2(store, 23, 20, STOREDIM, STOREDIM) = (  Qtempx * x_23_12_0 + WQtempx * (  Qtempx * x_23_8_1 + WQtempx * x_23_8_2 + 2 * ABCDtemp * x_10_8_2) + CDtemp * (x_23_8_0 -  ABcom * x_23_8_1) + 2 * ABCDtemp * (  Qtempx * x_10_8_1 + WQtempx * x_10_8_2 + ABCDtemp * x_5_8_2));
                                    LOC2(store, 23, 21, STOREDIM, STOREDIM) = (  Qtempx * x_23_14_0 + WQtempx * (  Qtempx * x_23_9_1 + WQtempx * x_23_9_2 + 2 * ABCDtemp * x_10_9_2) + CDtemp * (x_23_9_0 -  ABcom * x_23_9_1) + 2 * ABCDtemp * (  Qtempx * x_10_9_1 + WQtempx * x_10_9_2 + ABCDtemp * x_5_9_2));
                                    LOC2(store, 23, 22, STOREDIM, STOREDIM) = (  Qtempy * x_23_16_0 + WQtempy * x_23_16_1 + CDtemp * (x_23_9_0 -  ABcom * x_23_9_1) + ABCDtemp * x_13_16_1);
                                    LOC2(store, 23, 23, STOREDIM, STOREDIM) = (  Qtempx * x_23_10_0 + WQtempx * (  Qtempx * x_23_5_1 + WQtempx * x_23_5_2 + 2 * ABCDtemp * x_10_5_2) + CDtemp * (x_23_5_0 -  ABcom * x_23_5_1) + 2 * ABCDtemp * (  Qtempx * x_10_5_1 + WQtempx * x_10_5_2 + ABCDtemp * x_5_5_2));
                                    LOC2(store, 23, 24, STOREDIM, STOREDIM) = (  Qtempx * x_23_15_0 + WQtempx * x_23_15_1 + 2 * ABCDtemp * x_10_15_1);
                                    LOC2(store, 23, 25, STOREDIM, STOREDIM) = (  Qtempx * x_23_16_0 + WQtempx * x_23_16_1 + 2 * ABCDtemp * x_10_16_1);
                                    LOC2(store, 23, 26, STOREDIM, STOREDIM) = (  Qtempx * x_23_13_0 + WQtempx * (  Qtempx * x_23_6_1 + WQtempx * (  Qtempx * x_23_3_2 + WQtempx * x_23_3_3 + 2 * ABCDtemp * x_10_3_3) + CDtemp * (x_23_3_1 -  ABcom * x_23_3_2) + 2 * ABCDtemp * x_10_6_2) + CDtemp * 2 * (x_23_6_0 -  ABcom * x_23_6_1) + 2 * ABCDtemp * (  Qtempx * x_10_6_1 + WQtempx * x_10_6_2 + CDtemp * (x_10_3_1 -  ABcom * x_10_3_2) + ABCDtemp * (  Ptempy * x_3_6_2 + WPtempy * x_3_6_3)));
                                    LOC2(store, 23, 27, STOREDIM, STOREDIM) = (  Qtempx * x_23_19_0 + WQtempx * x_23_19_1 + 2 * ABCDtemp * x_10_19_1);
                                    LOC2(store, 23, 28, STOREDIM, STOREDIM) = (  Qtempx * x_23_11_0 + WQtempx * (  Qtempx * x_23_4_1 + WQtempx * (  Qtempx * x_23_2_2 + WQtempx * x_23_2_3 + 2 * ABCDtemp * x_10_2_3) + CDtemp * (x_23_2_1 -  ABcom * x_23_2_2) + 2 * ABCDtemp * x_10_4_2) + CDtemp * 2 * (x_23_4_0 -  ABcom * x_23_4_1) + 2 * ABCDtemp * (  Qtempx * x_10_4_1 + WQtempx * x_10_4_2 + CDtemp * (x_10_2_1 -  ABcom * x_10_2_2) + ABCDtemp * (  Ptempy * x_3_4_2 + WPtempy * x_3_4_3 + ABCDtemp * x_3_1_3)));
                                    LOC2(store, 23, 29, STOREDIM, STOREDIM) = (  Qtempx * x_23_18_0 + WQtempx * x_23_18_1 + 2 * ABCDtemp * x_10_18_1);
                                    LOC2(store, 23, 30, STOREDIM, STOREDIM) = (  Qtempy * x_23_15_0 + WQtempy * x_23_15_1 + CDtemp * 2 * (x_23_5_0 -  ABcom * x_23_5_1) + ABCDtemp * x_13_15_1);
                                    LOC2(store, 23, 31, STOREDIM, STOREDIM) = (  Qtempy * x_23_19_0 + WQtempy * x_23_19_1 + ABCDtemp * x_13_19_1);
                                    LOC2(store, 23, 32, STOREDIM, STOREDIM) = (  Qtempx * x_23_17_0 + WQtempx * (  Qtempx * x_23_7_1 + WQtempx * (  Qtempx * x_23_1_2 + WQtempx * (  Qtempx * x_23_0_3 + WQtempx * x_23_0_4 + 2 * ABCDtemp * x_10_0_4) + CDtemp * (x_23_0_2 -  ABcom * x_23_0_3) + 2 * ABCDtemp * x_10_1_3) + CDtemp * 2 * (x_23_1_1 -  ABcom * x_23_1_2) + 2 * ABCDtemp * x_10_7_2) + CDtemp * 3 * (x_23_7_0 -  ABcom * x_23_7_1) + 2 * ABCDtemp * (  Qtempx * x_10_7_1 + WQtempx * x_10_7_2 + CDtemp * 2 * (x_10_1_1 -  ABcom * x_10_1_2) + ABCDtemp * (  Ptempy * x_3_7_2 + WPtempy * x_3_7_3)));
                                    LOC2(store, 23, 33, STOREDIM, STOREDIM) = (  Qtempy * x_23_18_0 + WQtempy * x_23_18_1 + CDtemp * 3 * (x_23_8_0 -  ABcom * x_23_8_1) + ABCDtemp * x_13_18_1);
                                    LOC2(store, 23, 34, STOREDIM, STOREDIM) = (  Qtempz * x_23_19_0 + WQtempz * x_23_19_1 + CDtemp * 3 * (x_23_9_0 -  ABcom * x_23_9_1) + ABCDtemp * x_11_19_1);
                                    LOC2(store, 24, 20, STOREDIM, STOREDIM) = (  Qtempx * x_24_12_0 + WQtempx * (  Qtempx * x_24_8_1 + WQtempx * x_24_8_2 + ABCDtemp * x_15_8_2) + CDtemp * (x_24_8_0 -  ABcom * x_24_8_1) + ABCDtemp * (  Qtempx * x_15_8_1 + WQtempx * x_15_8_2));
                                    LOC2(store, 24, 21, STOREDIM, STOREDIM) = (  Qtempx * x_24_14_0 + WQtempx * (  Qtempx * x_24_9_1 + WQtempx * x_24_9_2 + ABCDtemp * x_15_9_2) + CDtemp * (x_24_9_0 -  ABcom * x_24_9_1) + ABCDtemp * (  Qtempx * x_15_9_1 + WQtempx * x_15_9_2));
                                    LOC2(store, 24, 22, STOREDIM, STOREDIM) = (  Qtempy * x_24_16_0 + WQtempy * x_24_16_1 + CDtemp * (x_24_9_0 -  ABcom * x_24_9_1) + 2 * ABCDtemp * x_10_16_1);
                                    LOC2(store, 24, 23, STOREDIM, STOREDIM) = (  Qtempx * x_24_10_0 + WQtempx * (  Qtempx * x_24_5_1 + WQtempx * x_24_5_2 + ABCDtemp * x_15_5_2) + CDtemp * (x_24_5_0 -  ABcom * x_24_5_1) + ABCDtemp * (  Qtempx * x_15_5_1 + WQtempx * x_15_5_2));
                                    LOC2(store, 24, 24, STOREDIM, STOREDIM) = (  Qtempx * x_24_15_0 + WQtempx * x_24_15_1 + ABCDtemp * x_15_15_1);
                                    LOC2(store, 24, 25, STOREDIM, STOREDIM) = (  Qtempx * x_24_16_0 + WQtempx * x_24_16_1 + ABCDtemp * x_15_16_1);
                                    LOC2(store, 24, 26, STOREDIM, STOREDIM) = (  Qtempx * x_24_13_0 + WQtempx * (  Qtempx * x_24_6_1 + WQtempx * (  Qtempx * x_24_3_2 + WQtempx * x_24_3_3 + ABCDtemp * x_15_3_3) + CDtemp * (x_24_3_1 -  ABcom * x_24_3_2) + ABCDtemp * x_15_6_2) + CDtemp * 2 * (x_24_6_0 -  ABcom * x_24_6_1) + ABCDtemp * (  Qtempx * x_15_6_1 + WQtempx * x_15_6_2 + CDtemp * (x_15_3_1 -  ABcom * x_15_3_2)));
                                    LOC2(store, 24, 27, STOREDIM, STOREDIM) = (  Qtempx * x_24_19_0 + WQtempx * x_24_19_1 + ABCDtemp * x_15_19_1);
                                    LOC2(store, 24, 28, STOREDIM, STOREDIM) = (  Qtempx * x_24_11_0 + WQtempx * (  Qtempx * x_24_4_1 + WQtempx * (  Qtempx * x_24_2_2 + WQtempx * x_24_2_3 + ABCDtemp * x_15_2_3) + CDtemp * (x_24_2_1 -  ABcom * x_24_2_2) + ABCDtemp * x_15_4_2) + CDtemp * 2 * (x_24_4_0 -  ABcom * x_24_4_1) + ABCDtemp * (  Qtempx * x_15_4_1 + WQtempx * x_15_4_2 + CDtemp * (x_15_2_1 -  ABcom * x_15_2_2)));
                                    LOC2(store, 24, 29, STOREDIM, STOREDIM) = (  Qtempx * x_24_18_0 + WQtempx * x_24_18_1 + ABCDtemp * x_15_18_1);
                                    LOC2(store, 24, 30, STOREDIM, STOREDIM) = (  Qtempy * x_24_15_0 + WQtempy * x_24_15_1 + CDtemp * 2 * (x_24_5_0 -  ABcom * x_24_5_1) + 2 * ABCDtemp * x_10_15_1);
                                    LOC2(store, 24, 31, STOREDIM, STOREDIM) = (  Qtempy * x_24_19_0 + WQtempy * x_24_19_1 + 2 * ABCDtemp * x_10_19_1);
                                    LOC2(store, 24, 32, STOREDIM, STOREDIM) = (  Qtempx * x_24_17_0 + WQtempx * (  Qtempx * x_24_7_1 + WQtempx * (  Qtempx * x_24_1_2 + WQtempx * (  Qtempx * x_24_0_3 + WQtempx * x_24_0_4 + ABCDtemp * x_15_0_4) + CDtemp * (x_24_0_2 -  ABcom * x_24_0_3) + ABCDtemp * x_15_1_3) + CDtemp * 2 * (x_24_1_1 -  ABcom * x_24_1_2) + ABCDtemp * x_15_7_2) + CDtemp * 3 * (x_24_7_0 -  ABcom * x_24_7_1) + ABCDtemp * (  Qtempx * x_15_7_1 + WQtempx * x_15_7_2 + CDtemp * 2 * (x_15_1_1 -  ABcom * x_15_1_2)));
                                    LOC2(store, 24, 33, STOREDIM, STOREDIM) = (  Qtempy * x_24_18_0 + WQtempy * x_24_18_1 + CDtemp * 3 * (x_24_8_0 -  ABcom * x_24_8_1) + 2 * ABCDtemp * x_10_18_1);
                                    LOC2(store, 24, 34, STOREDIM, STOREDIM) = (  Qtempz * x_24_19_0 + WQtempz * x_24_19_1 + CDtemp * 3 * (x_24_9_0 -  ABcom * x_24_9_1) + ABCDtemp * x_12_19_1);
                                    LOC2(store, 25, 20, STOREDIM, STOREDIM) = (  Qtempx * x_25_12_0 + WQtempx * (  Qtempx * x_25_8_1 + WQtempx * x_25_8_2 + ABCDtemp * x_16_8_2) + CDtemp * (x_25_8_0 -  ABcom * x_25_8_1) + ABCDtemp * (  Qtempx * x_16_8_1 + WQtempx * x_16_8_2));
                                    LOC2(store, 25, 21, STOREDIM, STOREDIM) = (  Qtempx * x_25_14_0 + WQtempx * (  Qtempx * x_25_9_1 + WQtempx * x_25_9_2 + ABCDtemp * x_16_9_2) + CDtemp * (x_25_9_0 -  ABcom * x_25_9_1) + ABCDtemp * (  Qtempx * x_16_9_1 + WQtempx * x_16_9_2));
                                    LOC2(store, 25, 22, STOREDIM, STOREDIM) = (  Qtempy * x_25_16_0 + WQtempy * x_25_16_1 + CDtemp * (x_25_9_0 -  ABcom * x_25_9_1) + ABCDtemp * x_14_16_1);
                                    LOC2(store, 25, 23, STOREDIM, STOREDIM) = (  Qtempx * x_25_10_0 + WQtempx * (  Qtempx * x_25_5_1 + WQtempx * x_25_5_2 + ABCDtemp * x_16_5_2) + CDtemp * (x_25_5_0 -  ABcom * x_25_5_1) + ABCDtemp * (  Qtempx * x_16_5_1 + WQtempx * x_16_5_2));
                                    LOC2(store, 25, 24, STOREDIM, STOREDIM) = (  Qtempx * x_25_15_0 + WQtempx * x_25_15_1 + ABCDtemp * x_16_15_1);
                                    LOC2(store, 25, 25, STOREDIM, STOREDIM) = (  Qtempx * x_25_16_0 + WQtempx * x_25_16_1 + ABCDtemp * x_16_16_1);
                                    LOC2(store, 25, 26, STOREDIM, STOREDIM) = (  Qtempx * x_25_13_0 + WQtempx * (  Qtempx * x_25_6_1 + WQtempx * (  Qtempx * x_25_3_2 + WQtempx * x_25_3_3 + ABCDtemp * x_16_3_3) + CDtemp * (x_25_3_1 -  ABcom * x_25_3_2) + ABCDtemp * x_16_6_2) + CDtemp * 2 * (x_25_6_0 -  ABcom * x_25_6_1) + ABCDtemp * (  Qtempx * x_16_6_1 + WQtempx * x_16_6_2 + CDtemp * (x_16_3_1 -  ABcom * x_16_3_2)));
                                    LOC2(store, 25, 27, STOREDIM, STOREDIM) = (  Qtempx * x_25_19_0 + WQtempx * x_25_19_1 + ABCDtemp * x_16_19_1);
                                    LOC2(store, 25, 28, STOREDIM, STOREDIM) = (  Qtempx * x_25_11_0 + WQtempx * (  Qtempx * x_25_4_1 + WQtempx * (  Qtempx * x_25_2_2 + WQtempx * x_25_2_3 + ABCDtemp * x_16_2_3) + CDtemp * (x_25_2_1 -  ABcom * x_25_2_2) + ABCDtemp * x_16_4_2) + CDtemp * 2 * (x_25_4_0 -  ABcom * x_25_4_1) + ABCDtemp * (  Qtempx * x_16_4_1 + WQtempx * x_16_4_2 + CDtemp * (x_16_2_1 -  ABcom * x_16_2_2)));
                                    LOC2(store, 25, 29, STOREDIM, STOREDIM) = (  Qtempx * x_25_18_0 + WQtempx * x_25_18_1 + ABCDtemp * x_16_18_1);
                                    LOC2(store, 25, 30, STOREDIM, STOREDIM) = (  Qtempy * x_25_15_0 + WQtempy * x_25_15_1 + CDtemp * 2 * (x_25_5_0 -  ABcom * x_25_5_1) + ABCDtemp * x_14_15_1);
                                    LOC2(store, 25, 31, STOREDIM, STOREDIM) = (  Qtempy * x_25_19_0 + WQtempy * x_25_19_1 + ABCDtemp * x_14_19_1);
                                    LOC2(store, 25, 32, STOREDIM, STOREDIM) = (  Qtempx * x_25_17_0 + WQtempx * (  Qtempx * x_25_7_1 + WQtempx * (  Qtempx * x_25_1_2 + WQtempx * (  Qtempx * x_25_0_3 + WQtempx * x_25_0_4 + ABCDtemp * x_16_0_4) + CDtemp * (x_25_0_2 -  ABcom * x_25_0_3) + ABCDtemp * x_16_1_3) + CDtemp * 2 * (x_25_1_1 -  ABcom * x_25_1_2) + ABCDtemp * x_16_7_2) + CDtemp * 3 * (x_25_7_0 -  ABcom * x_25_7_1) + ABCDtemp * (  Qtempx * x_16_7_1 + WQtempx * x_16_7_2 + CDtemp * 2 * (x_16_1_1 -  ABcom * x_16_1_2)));
                                    LOC2(store, 25, 33, STOREDIM, STOREDIM) = (  Qtempy * x_25_18_0 + WQtempy * x_25_18_1 + CDtemp * 3 * (x_25_8_0 -  ABcom * x_25_8_1) + ABCDtemp * x_14_18_1);
                                    LOC2(store, 25, 34, STOREDIM, STOREDIM) = (  Qtempz * x_25_19_0 + WQtempz * x_25_19_1 + CDtemp * 3 * (x_25_9_0 -  ABcom * x_25_9_1) + 2 * ABCDtemp * x_10_19_1);
                                    LOC2(store, 26, 20, STOREDIM, STOREDIM) = (  Qtempx * x_26_12_0 + WQtempx * (  Qtempx * x_26_8_1 + WQtempx * x_26_8_2 + 3 * ABCDtemp * x_13_8_2) + CDtemp * (x_26_8_0 -  ABcom * x_26_8_1) + 3 * ABCDtemp * (  Qtempx * x_13_8_1 + WQtempx * x_13_8_2 + 2 * ABCDtemp * x_6_8_2));
                                    LOC2(store, 26, 21, STOREDIM, STOREDIM) = (  Qtempx * x_26_14_0 + WQtempx * (  Qtempx * x_26_9_1 + WQtempx * x_26_9_2 + 3 * ABCDtemp * x_13_9_2) + CDtemp * (x_26_9_0 -  ABcom * x_26_9_1) + 3 * ABCDtemp * (  Qtempx * x_13_9_1 + WQtempx * x_13_9_2 + 2 * ABCDtemp * x_6_9_2));
                                    LOC2(store, 26, 22, STOREDIM, STOREDIM) = (  Qtempy * x_26_16_0 + WQtempy * x_26_16_1 + CDtemp * (x_26_9_0 -  ABcom * x_26_9_1));
                                    LOC2(store, 26, 23, STOREDIM, STOREDIM) = (  Qtempx * x_26_10_0 + WQtempx * (  Qtempx * x_26_5_1 + WQtempx * x_26_5_2 + 3 * ABCDtemp * x_13_5_2) + CDtemp * (x_26_5_0 -  ABcom * x_26_5_1) + 3 * ABCDtemp * (  Qtempx * x_13_5_1 + WQtempx * x_13_5_2 + 2 * ABCDtemp * x_6_5_2));
                                    LOC2(store, 26, 24, STOREDIM, STOREDIM) = (  Qtempx * x_26_15_0 + WQtempx * x_26_15_1 + 3 * ABCDtemp * x_13_15_1);
                                    LOC2(store, 26, 25, STOREDIM, STOREDIM) = (  Qtempx * x_26_16_0 + WQtempx * x_26_16_1 + 3 * ABCDtemp * x_13_16_1);
                                    LOC2(store, 26, 26, STOREDIM, STOREDIM) = (  Qtempx * x_26_13_0 + WQtempx * (  Qtempx * x_26_6_1 + WQtempx * (  Qtempx * x_26_3_2 + WQtempx * x_26_3_3 + 3 * ABCDtemp * x_13_3_3) + CDtemp * (x_26_3_1 -  ABcom * x_26_3_2) + 3 * ABCDtemp * x_13_6_2) + CDtemp * 2 * (x_26_6_0 -  ABcom * x_26_6_1) + 3 * ABCDtemp * (  Qtempx * x_13_6_1 + WQtempx * x_13_6_2 + CDtemp * (x_13_3_1 -  ABcom * x_13_3_2) + 2 * ABCDtemp * (  Ptempx * x_3_6_2 + WPtempx * x_3_6_3 + ABCDtemp * x_3_3_3)));
                                    LOC2(store, 26, 27, STOREDIM, STOREDIM) = (  Qtempx * x_26_19_0 + WQtempx * x_26_19_1 + 3 * ABCDtemp * x_13_19_1);
                                    LOC2(store, 26, 28, STOREDIM, STOREDIM) = (  Qtempx * x_26_11_0 + WQtempx * (  Qtempx * x_26_4_1 + WQtempx * (  Qtempx * x_26_2_2 + WQtempx * x_26_2_3 + 3 * ABCDtemp * x_13_2_3) + CDtemp * (x_26_2_1 -  ABcom * x_26_2_2) + 3 * ABCDtemp * x_13_4_2) + CDtemp * 2 * (x_26_4_0 -  ABcom * x_26_4_1) + 3 * ABCDtemp * (  Qtempx * x_13_4_1 + WQtempx * x_13_4_2 + CDtemp * (x_13_2_1 -  ABcom * x_13_2_2) + 2 * ABCDtemp * (  Ptempx * x_3_4_2 + WPtempx * x_3_4_3 + ABCDtemp * x_3_2_3)));
                                    LOC2(store, 26, 29, STOREDIM, STOREDIM) = (  Qtempx * x_26_18_0 + WQtempx * x_26_18_1 + 3 * ABCDtemp * x_13_18_1);
                                    LOC2(store, 26, 30, STOREDIM, STOREDIM) = (  Qtempy * x_26_15_0 + WQtempy * x_26_15_1 + CDtemp * 2 * (x_26_5_0 -  ABcom * x_26_5_1));
                                    LOC2(store, 26, 31, STOREDIM, STOREDIM) = (  Qtempy * x_26_19_0 + WQtempy * x_26_19_1);
                                    LOC2(store, 26, 32, STOREDIM, STOREDIM) = (  Qtempx * x_26_17_0 + WQtempx * (  Qtempx * x_26_7_1 + WQtempx * (  Qtempx * x_26_1_2 + WQtempx * (  Qtempx * x_26_0_3 + WQtempx * x_26_0_4 + 3 * ABCDtemp * x_13_0_4) + CDtemp * (x_26_0_2 -  ABcom * x_26_0_3) + 3 * ABCDtemp * x_13_1_3) + CDtemp * 2 * (x_26_1_1 -  ABcom * x_26_1_2) + 3 * ABCDtemp * x_13_7_2) + CDtemp * 3 * (x_26_7_0 -  ABcom * x_26_7_1) + 3 * ABCDtemp * (  Qtempx * x_13_7_1 + WQtempx * x_13_7_2 + CDtemp * 2 * (x_13_1_1 -  ABcom * x_13_1_2) + 2 * ABCDtemp * (  Ptempx * x_3_7_2 + WPtempx * x_3_7_3 + 2 * ABCDtemp * x_3_1_3)));
                                    LOC2(store, 26, 33, STOREDIM, STOREDIM) = (  Qtempy * x_26_18_0 + WQtempy * x_26_18_1 + CDtemp * 3 * (x_26_8_0 -  ABcom * x_26_8_1));
                                    LOC2(store, 26, 34, STOREDIM, STOREDIM) = (  Qtempz * x_26_19_0 + WQtempz * x_26_19_1 + CDtemp * 3 * (x_26_9_0 -  ABcom * x_26_9_1) + ABCDtemp * x_17_19_1);
                                    LOC2(store, 27, 20, STOREDIM, STOREDIM) = (  Qtempx * x_27_12_0 + WQtempx * (  Qtempx * x_27_8_1 + WQtempx * x_27_8_2 + ABCDtemp * x_19_8_2) + CDtemp * (x_27_8_0 -  ABcom * x_27_8_1) + ABCDtemp * (  Qtempx * x_19_8_1 + WQtempx * x_19_8_2));
                                    LOC2(store, 27, 21, STOREDIM, STOREDIM) = (  Qtempx * x_27_14_0 + WQtempx * (  Qtempx * x_27_9_1 + WQtempx * x_27_9_2 + ABCDtemp * x_19_9_2) + CDtemp * (x_27_9_0 -  ABcom * x_27_9_1) + ABCDtemp * (  Qtempx * x_19_9_1 + WQtempx * x_19_9_2));
                                    LOC2(store, 27, 22, STOREDIM, STOREDIM) = (  Qtempy * x_27_16_0 + WQtempy * x_27_16_1 + CDtemp * (x_27_9_0 -  ABcom * x_27_9_1));
                                    LOC2(store, 27, 23, STOREDIM, STOREDIM) = (  Qtempx * x_27_10_0 + WQtempx * (  Qtempx * x_27_5_1 + WQtempx * x_27_5_2 + ABCDtemp * x_19_5_2) + CDtemp * (x_27_5_0 -  ABcom * x_27_5_1) + ABCDtemp * (  Qtempx * x_19_5_1 + WQtempx * x_19_5_2));
                                    LOC2(store, 27, 24, STOREDIM, STOREDIM) = (  Qtempx * x_27_15_0 + WQtempx * x_27_15_1 + ABCDtemp * x_19_15_1);
                                    LOC2(store, 27, 25, STOREDIM, STOREDIM) = (  Qtempx * x_27_16_0 + WQtempx * x_27_16_1 + ABCDtemp * x_19_16_1);
                                    LOC2(store, 27, 26, STOREDIM, STOREDIM) = (  Qtempx * x_27_13_0 + WQtempx * (  Qtempx * x_27_6_1 + WQtempx * (  Qtempx * x_27_3_2 + WQtempx * x_27_3_3 + ABCDtemp * x_19_3_3) + CDtemp * (x_27_3_1 -  ABcom * x_27_3_2) + ABCDtemp * x_19_6_2) + CDtemp * 2 * (x_27_6_0 -  ABcom * x_27_6_1) + ABCDtemp * (  Qtempx * x_19_6_1 + WQtempx * x_19_6_2 + CDtemp * (x_19_3_1 -  ABcom * x_19_3_2)));
                                    LOC2(store, 27, 27, STOREDIM, STOREDIM) = (  Qtempx * x_27_19_0 + WQtempx * x_27_19_1 + ABCDtemp * x_19_19_1);
                                    LOC2(store, 27, 28, STOREDIM, STOREDIM) = (  Qtempx * x_27_11_0 + WQtempx * (  Qtempx * x_27_4_1 + WQtempx * (  Qtempx * x_27_2_2 + WQtempx * x_27_2_3 + ABCDtemp * x_19_2_3) + CDtemp * (x_27_2_1 -  ABcom * x_27_2_2) + ABCDtemp * x_19_4_2) + CDtemp * 2 * (x_27_4_0 -  ABcom * x_27_4_1) + ABCDtemp * (  Qtempx * x_19_4_1 + WQtempx * x_19_4_2 + CDtemp * (x_19_2_1 -  ABcom * x_19_2_2)));
                                    LOC2(store, 27, 29, STOREDIM, STOREDIM) = (  Qtempx * x_27_18_0 + WQtempx * x_27_18_1 + ABCDtemp * x_19_18_1);
                                    LOC2(store, 27, 30, STOREDIM, STOREDIM) = (  Qtempy * x_27_15_0 + WQtempy * x_27_15_1 + CDtemp * 2 * (x_27_5_0 -  ABcom * x_27_5_1));
                                    LOC2(store, 27, 31, STOREDIM, STOREDIM) = (  Qtempy * x_27_19_0 + WQtempy * x_27_19_1);
                                    LOC2(store, 27, 32, STOREDIM, STOREDIM) = (  Qtempx * x_27_17_0 + WQtempx * (  Qtempx * x_27_7_1 + WQtempx * (  Qtempx * x_27_1_2 + WQtempx * (  Qtempx * x_27_0_3 + WQtempx * x_27_0_4 + ABCDtemp * x_19_0_4) + CDtemp * (x_27_0_2 -  ABcom * x_27_0_3) + ABCDtemp * x_19_1_3) + CDtemp * 2 * (x_27_1_1 -  ABcom * x_27_1_2) + ABCDtemp * x_19_7_2) + CDtemp * 3 * (x_27_7_0 -  ABcom * x_27_7_1) + ABCDtemp * (  Qtempx * x_19_7_1 + WQtempx * x_19_7_2 + CDtemp * 2 * (x_19_1_1 -  ABcom * x_19_1_2)));
                                    LOC2(store, 27, 33, STOREDIM, STOREDIM) = (  Qtempy * x_27_18_0 + WQtempy * x_27_18_1 + CDtemp * 3 * (x_27_8_0 -  ABcom * x_27_8_1));
                                    LOC2(store, 27, 34, STOREDIM, STOREDIM) = (  Qtempz * x_27_19_0 + WQtempz * x_27_19_1 + CDtemp * 3 * (x_27_9_0 -  ABcom * x_27_9_1) + 3 * ABCDtemp * x_14_19_1);
                                    LOC2(store, 28, 20, STOREDIM, STOREDIM) = (  Qtempx * x_28_12_0 + WQtempx * (  Qtempx * x_28_8_1 + WQtempx * x_28_8_2 + 3 * ABCDtemp * x_11_8_2) + CDtemp * (x_28_8_0 -  ABcom * x_28_8_1) + 3 * ABCDtemp * (  Qtempx * x_11_8_1 + WQtempx * x_11_8_2 + 2 * ABCDtemp * x_4_8_2));
                                    LOC2(store, 28, 21, STOREDIM, STOREDIM) = (  Qtempx * x_28_14_0 + WQtempx * (  Qtempx * x_28_9_1 + WQtempx * x_28_9_2 + 3 * ABCDtemp * x_11_9_2) + CDtemp * (x_28_9_0 -  ABcom * x_28_9_1) + 3 * ABCDtemp * (  Qtempx * x_11_9_1 + WQtempx * x_11_9_2 + 2 * ABCDtemp * x_4_9_2));
                                    LOC2(store, 28, 22, STOREDIM, STOREDIM) = (  Qtempy * x_28_16_0 + WQtempy * x_28_16_1 + CDtemp * (x_28_9_0 -  ABcom * x_28_9_1) + ABCDtemp * x_17_16_1);
                                    LOC2(store, 28, 23, STOREDIM, STOREDIM) = (  Qtempx * x_28_10_0 + WQtempx * (  Qtempx * x_28_5_1 + WQtempx * x_28_5_2 + 3 * ABCDtemp * x_11_5_2) + CDtemp * (x_28_5_0 -  ABcom * x_28_5_1) + 3 * ABCDtemp * (  Qtempx * x_11_5_1 + WQtempx * x_11_5_2 + 2 * ABCDtemp * x_4_5_2));
                                    LOC2(store, 28, 24, STOREDIM, STOREDIM) = (  Qtempx * x_28_15_0 + WQtempx * x_28_15_1 + 3 * ABCDtemp * x_11_15_1);
                                    LOC2(store, 28, 25, STOREDIM, STOREDIM) = (  Qtempx * x_28_16_0 + WQtempx * x_28_16_1 + 3 * ABCDtemp * x_11_16_1);
                                    LOC2(store, 28, 26, STOREDIM, STOREDIM) = (  Qtempx * x_28_13_0 + WQtempx * (  Qtempx * x_28_6_1 + WQtempx * (  Qtempx * x_28_3_2 + WQtempx * x_28_3_3 + 3 * ABCDtemp * x_11_3_3) + CDtemp * (x_28_3_1 -  ABcom * x_28_3_2) + 3 * ABCDtemp * x_11_6_2) + CDtemp * 2 * (x_28_6_0 -  ABcom * x_28_6_1) + 3 * ABCDtemp * (  Qtempx * x_11_6_1 + WQtempx * x_11_6_2 + CDtemp * (x_11_3_1 -  ABcom * x_11_3_2) + 2 * ABCDtemp * (  Ptempx * x_2_6_2 + WPtempx * x_2_6_3 + ABCDtemp * x_2_3_3)));
                                    LOC2(store, 28, 27, STOREDIM, STOREDIM) = (  Qtempx * x_28_19_0 + WQtempx * x_28_19_1 + 3 * ABCDtemp * x_11_19_1);
                                    LOC2(store, 28, 28, STOREDIM, STOREDIM) = (  Qtempx * x_28_11_0 + WQtempx * (  Qtempx * x_28_4_1 + WQtempx * (  Qtempx * x_28_2_2 + WQtempx * x_28_2_3 + 3 * ABCDtemp * x_11_2_3) + CDtemp * (x_28_2_1 -  ABcom * x_28_2_2) + 3 * ABCDtemp * x_11_4_2) + CDtemp * 2 * (x_28_4_0 -  ABcom * x_28_4_1) + 3 * ABCDtemp * (  Qtempx * x_11_4_1 + WQtempx * x_11_4_2 + CDtemp * (x_11_2_1 -  ABcom * x_11_2_2) + 2 * ABCDtemp * (  Ptempx * x_2_4_2 + WPtempx * x_2_4_3 + ABCDtemp * x_2_2_3)));
                                    LOC2(store, 28, 29, STOREDIM, STOREDIM) = (  Qtempx * x_28_18_0 + WQtempx * x_28_18_1 + 3 * ABCDtemp * x_11_18_1);
                                    LOC2(store, 28, 30, STOREDIM, STOREDIM) = (  Qtempy * x_28_15_0 + WQtempy * x_28_15_1 + CDtemp * 2 * (x_28_5_0 -  ABcom * x_28_5_1) + ABCDtemp * x_17_15_1);
                                    LOC2(store, 28, 31, STOREDIM, STOREDIM) = (  Qtempy * x_28_19_0 + WQtempy * x_28_19_1 + ABCDtemp * x_17_19_1);
                                    LOC2(store, 28, 32, STOREDIM, STOREDIM) = (  Qtempx * x_28_17_0 + WQtempx * (  Qtempx * x_28_7_1 + WQtempx * (  Qtempx * x_28_1_2 + WQtempx * (  Qtempx * x_28_0_3 + WQtempx * x_28_0_4 + 3 * ABCDtemp * x_11_0_4) + CDtemp * (x_28_0_2 -  ABcom * x_28_0_3) + 3 * ABCDtemp * x_11_1_3) + CDtemp * 2 * (x_28_1_1 -  ABcom * x_28_1_2) + 3 * ABCDtemp * x_11_7_2) + CDtemp * 3 * (x_28_7_0 -  ABcom * x_28_7_1) + 3 * ABCDtemp * (  Qtempx * x_11_7_1 + WQtempx * x_11_7_2 + CDtemp * 2 * (x_11_1_1 -  ABcom * x_11_1_2) + 2 * ABCDtemp * (  Ptempx * x_2_7_2 + WPtempx * x_2_7_3 + 2 * ABCDtemp * x_2_1_3)));
                                    LOC2(store, 28, 33, STOREDIM, STOREDIM) = (  Qtempy * x_28_18_0 + WQtempy * x_28_18_1 + CDtemp * 3 * (x_28_8_0 -  ABcom * x_28_8_1) + ABCDtemp * x_17_18_1);
                                    LOC2(store, 28, 34, STOREDIM, STOREDIM) = (  Qtempz * x_28_19_0 + WQtempz * x_28_19_1 + CDtemp * 3 * (x_28_9_0 -  ABcom * x_28_9_1));
                                    LOC2(store, 29, 20, STOREDIM, STOREDIM) = (  Qtempx * x_29_12_0 + WQtempx * (  Qtempx * x_29_8_1 + WQtempx * x_29_8_2 + ABCDtemp * x_18_8_2) + CDtemp * (x_29_8_0 -  ABcom * x_29_8_1) + ABCDtemp * (  Qtempx * x_18_8_1 + WQtempx * x_18_8_2));
                                    LOC2(store, 29, 21, STOREDIM, STOREDIM) = (  Qtempx * x_29_14_0 + WQtempx * (  Qtempx * x_29_9_1 + WQtempx * x_29_9_2 + ABCDtemp * x_18_9_2) + CDtemp * (x_29_9_0 -  ABcom * x_29_9_1) + ABCDtemp * (  Qtempx * x_18_9_1 + WQtempx * x_18_9_2));
                                    LOC2(store, 29, 22, STOREDIM, STOREDIM) = (  Qtempy * x_29_16_0 + WQtempy * x_29_16_1 + CDtemp * (x_29_9_0 -  ABcom * x_29_9_1) + 3 * ABCDtemp * x_12_16_1);
                                    LOC2(store, 29, 23, STOREDIM, STOREDIM) = (  Qtempx * x_29_10_0 + WQtempx * (  Qtempx * x_29_5_1 + WQtempx * x_29_5_2 + ABCDtemp * x_18_5_2) + CDtemp * (x_29_5_0 -  ABcom * x_29_5_1) + ABCDtemp * (  Qtempx * x_18_5_1 + WQtempx * x_18_5_2));
                                    LOC2(store, 29, 24, STOREDIM, STOREDIM) = (  Qtempx * x_29_15_0 + WQtempx * x_29_15_1 + ABCDtemp * x_18_15_1);
                                    LOC2(store, 29, 25, STOREDIM, STOREDIM) = (  Qtempx * x_29_16_0 + WQtempx * x_29_16_1 + ABCDtemp * x_18_16_1);
                                    LOC2(store, 29, 26, STOREDIM, STOREDIM) = (  Qtempx * x_29_13_0 + WQtempx * (  Qtempx * x_29_6_1 + WQtempx * (  Qtempx * x_29_3_2 + WQtempx * x_29_3_3 + ABCDtemp * x_18_3_3) + CDtemp * (x_29_3_1 -  ABcom * x_29_3_2) + ABCDtemp * x_18_6_2) + CDtemp * 2 * (x_29_6_0 -  ABcom * x_29_6_1) + ABCDtemp * (  Qtempx * x_18_6_1 + WQtempx * x_18_6_2 + CDtemp * (x_18_3_1 -  ABcom * x_18_3_2)));
                                    LOC2(store, 29, 27, STOREDIM, STOREDIM) = (  Qtempx * x_29_19_0 + WQtempx * x_29_19_1 + ABCDtemp * x_18_19_1);
                                    LOC2(store, 29, 28, STOREDIM, STOREDIM) = (  Qtempx * x_29_11_0 + WQtempx * (  Qtempx * x_29_4_1 + WQtempx * (  Qtempx * x_29_2_2 + WQtempx * x_29_2_3 + ABCDtemp * x_18_2_3) + CDtemp * (x_29_2_1 -  ABcom * x_29_2_2) + ABCDtemp * x_18_4_2) + CDtemp * 2 * (x_29_4_0 -  ABcom * x_29_4_1) + ABCDtemp * (  Qtempx * x_18_4_1 + WQtempx * x_18_4_2 + CDtemp * (x_18_2_1 -  ABcom * x_18_2_2)));
                                    LOC2(store, 29, 29, STOREDIM, STOREDIM) = (  Qtempx * x_29_18_0 + WQtempx * x_29_18_1 + ABCDtemp * x_18_18_1);
                                    LOC2(store, 29, 30, STOREDIM, STOREDIM) = (  Qtempy * x_29_15_0 + WQtempy * x_29_15_1 + CDtemp * 2 * (x_29_5_0 -  ABcom * x_29_5_1) + 3 * ABCDtemp * x_12_15_1);
                                    LOC2(store, 29, 31, STOREDIM, STOREDIM) = (  Qtempy * x_29_19_0 + WQtempy * x_29_19_1 + 3 * ABCDtemp * x_12_19_1);
                                    LOC2(store, 29, 32, STOREDIM, STOREDIM) = (  Qtempx * x_29_17_0 + WQtempx * (  Qtempx * x_29_7_1 + WQtempx * (  Qtempx * x_29_1_2 + WQtempx * (  Qtempx * x_29_0_3 + WQtempx * x_29_0_4 + ABCDtemp * x_18_0_4) + CDtemp * (x_29_0_2 -  ABcom * x_29_0_3) + ABCDtemp * x_18_1_3) + CDtemp * 2 * (x_29_1_1 -  ABcom * x_29_1_2) + ABCDtemp * x_18_7_2) + CDtemp * 3 * (x_29_7_0 -  ABcom * x_29_7_1) + ABCDtemp * (  Qtempx * x_18_7_1 + WQtempx * x_18_7_2 + CDtemp * 2 * (x_18_1_1 -  ABcom * x_18_1_2)));
                                    LOC2(store, 29, 33, STOREDIM, STOREDIM) = (  Qtempy * x_29_18_0 + WQtempy * x_29_18_1 + CDtemp * 3 * (x_29_8_0 -  ABcom * x_29_8_1) + 3 * ABCDtemp * x_12_18_1);
                                    LOC2(store, 29, 34, STOREDIM, STOREDIM) = (  Qtempz * x_29_19_0 + WQtempz * x_29_19_1 + CDtemp * 3 * (x_29_9_0 -  ABcom * x_29_9_1));
                                    LOC2(store, 30, 20, STOREDIM, STOREDIM) = (  Qtempx * x_30_12_0 + WQtempx * (  Qtempx * x_30_8_1 + WQtempx * x_30_8_2) + CDtemp * (x_30_8_0 -  ABcom * x_30_8_1));
                                    LOC2(store, 30, 21, STOREDIM, STOREDIM) = (  Qtempx * x_30_14_0 + WQtempx * (  Qtempx * x_30_9_1 + WQtempx * x_30_9_2) + CDtemp * (x_30_9_0 -  ABcom * x_30_9_1));
                                    LOC2(store, 30, 22, STOREDIM, STOREDIM) = (  Qtempy * x_30_16_0 + WQtempy * x_30_16_1 + CDtemp * (x_30_9_0 -  ABcom * x_30_9_1) + 3 * ABCDtemp * x_15_16_1);
                                    LOC2(store, 30, 23, STOREDIM, STOREDIM) = (  Qtempx * x_30_10_0 + WQtempx * (  Qtempx * x_30_5_1 + WQtempx * x_30_5_2) + CDtemp * (x_30_5_0 -  ABcom * x_30_5_1));
                                    LOC2(store, 30, 24, STOREDIM, STOREDIM) = (  Qtempx * x_30_15_0 + WQtempx * x_30_15_1);
                                    LOC2(store, 30, 25, STOREDIM, STOREDIM) = (  Qtempx * x_30_16_0 + WQtempx * x_30_16_1);
                                    LOC2(store, 30, 26, STOREDIM, STOREDIM) = (  Qtempx * x_30_13_0 + WQtempx * (  Qtempx * x_30_6_1 + WQtempx * (  Qtempx * x_30_3_2 + WQtempx * x_30_3_3) + CDtemp * (x_30_3_1 -  ABcom * x_30_3_2)) + CDtemp * 2 * (x_30_6_0 -  ABcom * x_30_6_1));
                                    LOC2(store, 30, 27, STOREDIM, STOREDIM) = (  Qtempx * x_30_19_0 + WQtempx * x_30_19_1);
                                    LOC2(store, 30, 28, STOREDIM, STOREDIM) = (  Qtempx * x_30_11_0 + WQtempx * (  Qtempx * x_30_4_1 + WQtempx * (  Qtempx * x_30_2_2 + WQtempx * x_30_2_3) + CDtemp * (x_30_2_1 -  ABcom * x_30_2_2)) + CDtemp * 2 * (x_30_4_0 -  ABcom * x_30_4_1));
                                    LOC2(store, 30, 29, STOREDIM, STOREDIM) = (  Qtempx * x_30_18_0 + WQtempx * x_30_18_1);
                                    LOC2(store, 30, 30, STOREDIM, STOREDIM) = (  Qtempy * x_30_15_0 + WQtempy * x_30_15_1 + CDtemp * 2 * (x_30_5_0 -  ABcom * x_30_5_1) + 3 * ABCDtemp * x_15_15_1);
                                    LOC2(store, 30, 31, STOREDIM, STOREDIM) = (  Qtempy * x_30_19_0 + WQtempy * x_30_19_1 + 3 * ABCDtemp * x_15_19_1);
                                    LOC2(store, 30, 32, STOREDIM, STOREDIM) = (  Qtempx * x_30_17_0 + WQtempx * (  Qtempx * x_30_7_1 + WQtempx * (  Qtempx * x_30_1_2 + WQtempx * (  Qtempx * x_30_0_3 + WQtempx * x_30_0_4) + CDtemp * (x_30_0_2 -  ABcom * x_30_0_3)) + CDtemp * 2 * (x_30_1_1 -  ABcom * x_30_1_2)) + CDtemp * 3 * (x_30_7_0 -  ABcom * x_30_7_1));
                                    LOC2(store, 30, 33, STOREDIM, STOREDIM) = (  Qtempy * x_30_18_0 + WQtempy * x_30_18_1 + CDtemp * 3 * (x_30_8_0 -  ABcom * x_30_8_1) + 3 * ABCDtemp * x_15_18_1);
                                    LOC2(store, 30, 34, STOREDIM, STOREDIM) = (  Qtempz * x_30_19_0 + WQtempz * x_30_19_1 + CDtemp * 3 * (x_30_9_0 -  ABcom * x_30_9_1) + ABCDtemp * x_18_19_1);
                                    LOC2(store, 31, 20, STOREDIM, STOREDIM) = (  Qtempx * x_31_12_0 + WQtempx * (  Qtempx * x_31_8_1 + WQtempx * x_31_8_2) + CDtemp * (x_31_8_0 -  ABcom * x_31_8_1));
                                    LOC2(store, 31, 21, STOREDIM, STOREDIM) = (  Qtempx * x_31_14_0 + WQtempx * (  Qtempx * x_31_9_1 + WQtempx * x_31_9_2) + CDtemp * (x_31_9_0 -  ABcom * x_31_9_1));
                                    LOC2(store, 31, 22, STOREDIM, STOREDIM) = (  Qtempy * x_31_16_0 + WQtempy * x_31_16_1 + CDtemp * (x_31_9_0 -  ABcom * x_31_9_1) + ABCDtemp * x_19_16_1);
                                    LOC2(store, 31, 23, STOREDIM, STOREDIM) = (  Qtempx * x_31_10_0 + WQtempx * (  Qtempx * x_31_5_1 + WQtempx * x_31_5_2) + CDtemp * (x_31_5_0 -  ABcom * x_31_5_1));
                                    LOC2(store, 31, 24, STOREDIM, STOREDIM) = (  Qtempx * x_31_15_0 + WQtempx * x_31_15_1);
                                    LOC2(store, 31, 25, STOREDIM, STOREDIM) = (  Qtempx * x_31_16_0 + WQtempx * x_31_16_1);
                                    LOC2(store, 31, 26, STOREDIM, STOREDIM) = (  Qtempx * x_31_13_0 + WQtempx * (  Qtempx * x_31_6_1 + WQtempx * (  Qtempx * x_31_3_2 + WQtempx * x_31_3_3) + CDtemp * (x_31_3_1 -  ABcom * x_31_3_2)) + CDtemp * 2 * (x_31_6_0 -  ABcom * x_31_6_1));
                                    LOC2(store, 31, 27, STOREDIM, STOREDIM) = (  Qtempx * x_31_19_0 + WQtempx * x_31_19_1);
                                    LOC2(store, 31, 28, STOREDIM, STOREDIM) = (  Qtempx * x_31_11_0 + WQtempx * (  Qtempx * x_31_4_1 + WQtempx * (  Qtempx * x_31_2_2 + WQtempx * x_31_2_3) + CDtemp * (x_31_2_1 -  ABcom * x_31_2_2)) + CDtemp * 2 * (x_31_4_0 -  ABcom * x_31_4_1));
                                    LOC2(store, 31, 29, STOREDIM, STOREDIM) = (  Qtempx * x_31_18_0 + WQtempx * x_31_18_1);
                                    LOC2(store, 31, 30, STOREDIM, STOREDIM) = (  Qtempy * x_31_15_0 + WQtempy * x_31_15_1 + CDtemp * 2 * (x_31_5_0 -  ABcom * x_31_5_1) + ABCDtemp * x_19_15_1);
                                    LOC2(store, 31, 31, STOREDIM, STOREDIM) = (  Qtempy * x_31_19_0 + WQtempy * x_31_19_1 + ABCDtemp * x_19_19_1);
                                    LOC2(store, 31, 32, STOREDIM, STOREDIM) = (  Qtempx * x_31_17_0 + WQtempx * (  Qtempx * x_31_7_1 + WQtempx * (  Qtempx * x_31_1_2 + WQtempx * (  Qtempx * x_31_0_3 + WQtempx * x_31_0_4) + CDtemp * (x_31_0_2 -  ABcom * x_31_0_3)) + CDtemp * 2 * (x_31_1_1 -  ABcom * x_31_1_2)) + CDtemp * 3 * (x_31_7_0 -  ABcom * x_31_7_1));
                                    LOC2(store, 31, 33, STOREDIM, STOREDIM) = (  Qtempy * x_31_18_0 + WQtempy * x_31_18_1 + CDtemp * 3 * (x_31_8_0 -  ABcom * x_31_8_1) + ABCDtemp * x_19_18_1);
                                    LOC2(store, 31, 34, STOREDIM, STOREDIM) = (  Qtempz * x_31_19_0 + WQtempz * x_31_19_1 + CDtemp * 3 * (x_31_9_0 -  ABcom * x_31_9_1) + 3 * ABCDtemp * x_16_19_1);
                                    LOC2(store, 32, 20, STOREDIM, STOREDIM) = (  Qtempx * x_32_12_0 + WQtempx * (  Qtempx * x_32_8_1 + WQtempx * x_32_8_2 + 4 * ABCDtemp * x_17_8_2) + CDtemp * (x_32_8_0 -  ABcom * x_32_8_1) + 4 * ABCDtemp * (  Qtempx * x_17_8_1 + WQtempx * x_17_8_2 + 3 * ABCDtemp * x_7_8_2));
                                    LOC2(store, 32, 21, STOREDIM, STOREDIM) = (  Qtempx * x_32_14_0 + WQtempx * (  Qtempx * x_32_9_1 + WQtempx * x_32_9_2 + 4 * ABCDtemp * x_17_9_2) + CDtemp * (x_32_9_0 -  ABcom * x_32_9_1) + 4 * ABCDtemp * (  Qtempx * x_17_9_1 + WQtempx * x_17_9_2 + 3 * ABCDtemp * x_7_9_2));
                                    LOC2(store, 32, 22, STOREDIM, STOREDIM) = (  Qtempy * x_32_16_0 + WQtempy * x_32_16_1 + CDtemp * (x_32_9_0 -  ABcom * x_32_9_1));
                                    LOC2(store, 32, 23, STOREDIM, STOREDIM) = (  Qtempx * x_32_10_0 + WQtempx * (  Qtempx * x_32_5_1 + WQtempx * x_32_5_2 + 4 * ABCDtemp * x_17_5_2) + CDtemp * (x_32_5_0 -  ABcom * x_32_5_1) + 4 * ABCDtemp * (  Qtempx * x_17_5_1 + WQtempx * x_17_5_2 + 3 * ABCDtemp * x_7_5_2));
                                    LOC2(store, 32, 24, STOREDIM, STOREDIM) = (  Qtempx * x_32_15_0 + WQtempx * x_32_15_1 + 4 * ABCDtemp * x_17_15_1);
                                    LOC2(store, 32, 25, STOREDIM, STOREDIM) = (  Qtempx * x_32_16_0 + WQtempx * x_32_16_1 + 4 * ABCDtemp * x_17_16_1);
                                    LOC2(store, 32, 26, STOREDIM, STOREDIM) = (  Qtempx * x_32_13_0 + WQtempx * (  Qtempx * x_32_6_1 + WQtempx * (  Qtempx * x_32_3_2 + WQtempx * x_32_3_3 + 4 * ABCDtemp * x_17_3_3) + CDtemp * (x_32_3_1 -  ABcom * x_32_3_2) + 4 * ABCDtemp * x_17_6_2) + CDtemp * 2 * (x_32_6_0 -  ABcom * x_32_6_1) + 4 * ABCDtemp * (  Qtempx * x_17_6_1 + WQtempx * x_17_6_2 + CDtemp * (x_17_3_1 -  ABcom * x_17_3_2) + 3 * ABCDtemp * (  Ptempx * x_1_6_2 + WPtempx * (  Ptempx * x_0_6_3 + WPtempx * x_0_6_4 + ABCDtemp * x_0_3_4) + ABtemp * (x_0_6_2 -  CDcom * x_0_6_3) + ABCDtemp * (  Ptempx * x_0_3_3 + WPtempx * x_0_3_4))));
                                    LOC2(store, 32, 27, STOREDIM, STOREDIM) = (  Qtempx * x_32_19_0 + WQtempx * x_32_19_1 + 4 * ABCDtemp * x_17_19_1);
                                    LOC2(store, 32, 28, STOREDIM, STOREDIM) = (  Qtempx * x_32_11_0 + WQtempx * (  Qtempx * x_32_4_1 + WQtempx * (  Qtempx * x_32_2_2 + WQtempx * x_32_2_3 + 4 * ABCDtemp * x_17_2_3) + CDtemp * (x_32_2_1 -  ABcom * x_32_2_2) + 4 * ABCDtemp * x_17_4_2) + CDtemp * 2 * (x_32_4_0 -  ABcom * x_32_4_1) + 4 * ABCDtemp * (  Qtempx * x_17_4_1 + WQtempx * x_17_4_2 + CDtemp * (x_17_2_1 -  ABcom * x_17_2_2) + 3 * ABCDtemp * (  Ptempx * x_1_4_2 + WPtempx * (  Ptempx * x_0_4_3 + WPtempx * x_0_4_4 + ABCDtemp * x_0_2_4) + ABtemp * (x_0_4_2 -  CDcom * x_0_4_3) + ABCDtemp * (  Ptempx * x_0_2_3 + WPtempx * x_0_2_4))));
                                    LOC2(store, 32, 29, STOREDIM, STOREDIM) = (  Qtempx * x_32_18_0 + WQtempx * x_32_18_1 + 4 * ABCDtemp * x_17_18_1);
                                    LOC2(store, 32, 30, STOREDIM, STOREDIM) = (  Qtempy * x_32_15_0 + WQtempy * x_32_15_1 + CDtemp * 2 * (x_32_5_0 -  ABcom * x_32_5_1));
                                    LOC2(store, 32, 31, STOREDIM, STOREDIM) = (  Qtempy * x_32_19_0 + WQtempy * x_32_19_1);
                                    LOC2(store, 32, 32, STOREDIM, STOREDIM) = (  Qtempx * x_32_17_0 + WQtempx * (  Qtempx * x_32_7_1 + WQtempx * (  Qtempx * x_32_1_2 + WQtempx * (  Qtempx * x_32_0_3 + WQtempx * x_32_0_4 + 4 * ABCDtemp * x_17_0_4) + CDtemp * (x_32_0_2 -  ABcom * x_32_0_3) + 4 * ABCDtemp * x_17_1_3) + CDtemp * 2 * (x_32_1_1 -  ABcom * x_32_1_2) + 4 * ABCDtemp * x_17_7_2) + CDtemp * 3 * (x_32_7_0 -  ABcom * x_32_7_1) + 4 * ABCDtemp * (  Qtempx * x_17_7_1 + WQtempx * x_17_7_2 + CDtemp * 2 * (x_17_1_1 -  ABcom * x_17_1_2) + 3 * ABCDtemp * (  Ptempx * x_1_7_2 + WPtempx * (  Ptempx * x_0_7_3 + WPtempx * x_0_7_4 + 2 * ABCDtemp * x_0_1_4) + ABtemp * (x_0_7_2 -  CDcom * x_0_7_3) + 2 * ABCDtemp * (  Ptempx * x_0_1_3 + WPtempx * x_0_1_4 + ABCDtemp * VY( 0, 0, 4)))));
                                    LOC2(store, 32, 33, STOREDIM, STOREDIM) = (  Qtempy * x_32_18_0 + WQtempy * x_32_18_1 + CDtemp * 3 * (x_32_8_0 -  ABcom * x_32_8_1));
                                    LOC2(store, 32, 34, STOREDIM, STOREDIM) = (  Qtempz * x_32_19_0 + WQtempz * x_32_19_1 + CDtemp * 3 * (x_32_9_0 -  ABcom * x_32_9_1));
                                    LOC2(store, 33, 20, STOREDIM, STOREDIM) = (  Qtempx * x_33_12_0 + WQtempx * (  Qtempx * x_33_8_1 + WQtempx * x_33_8_2) + CDtemp * (x_33_8_0 -  ABcom * x_33_8_1));
                                    LOC2(store, 33, 21, STOREDIM, STOREDIM) = (  Qtempx * x_33_14_0 + WQtempx * (  Qtempx * x_33_9_1 + WQtempx * x_33_9_2) + CDtemp * (x_33_9_0 -  ABcom * x_33_9_1));
                                    LOC2(store, 33, 22, STOREDIM, STOREDIM) = (  Qtempy * x_33_16_0 + WQtempy * x_33_16_1 + CDtemp * (x_33_9_0 -  ABcom * x_33_9_1) + 4 * ABCDtemp * x_18_16_1);
                                    LOC2(store, 33, 23, STOREDIM, STOREDIM) = (  Qtempx * x_33_10_0 + WQtempx * (  Qtempx * x_33_5_1 + WQtempx * x_33_5_2) + CDtemp * (x_33_5_0 -  ABcom * x_33_5_1));
                                    LOC2(store, 33, 24, STOREDIM, STOREDIM) = (  Qtempx * x_33_15_0 + WQtempx * x_33_15_1);
                                    LOC2(store, 33, 25, STOREDIM, STOREDIM) = (  Qtempx * x_33_16_0 + WQtempx * x_33_16_1);
                                    LOC2(store, 33, 26, STOREDIM, STOREDIM) = (  Qtempx * x_33_13_0 + WQtempx * (  Qtempx * x_33_6_1 + WQtempx * (  Qtempx * x_33_3_2 + WQtempx * x_33_3_3) + CDtemp * (x_33_3_1 -  ABcom * x_33_3_2)) + CDtemp * 2 * (x_33_6_0 -  ABcom * x_33_6_1));
                                    LOC2(store, 33, 27, STOREDIM, STOREDIM) = (  Qtempx * x_33_19_0 + WQtempx * x_33_19_1);
                                    LOC2(store, 33, 28, STOREDIM, STOREDIM) = (  Qtempx * x_33_11_0 + WQtempx * (  Qtempx * x_33_4_1 + WQtempx * (  Qtempx * x_33_2_2 + WQtempx * x_33_2_3) + CDtemp * (x_33_2_1 -  ABcom * x_33_2_2)) + CDtemp * 2 * (x_33_4_0 -  ABcom * x_33_4_1));
                                    LOC2(store, 33, 29, STOREDIM, STOREDIM) = (  Qtempx * x_33_18_0 + WQtempx * x_33_18_1);
                                    LOC2(store, 33, 30, STOREDIM, STOREDIM) = (  Qtempy * x_33_15_0 + WQtempy * x_33_15_1 + CDtemp * 2 * (x_33_5_0 -  ABcom * x_33_5_1) + 4 * ABCDtemp * x_18_15_1);
                                    LOC2(store, 33, 31, STOREDIM, STOREDIM) = (  Qtempy * x_33_19_0 + WQtempy * x_33_19_1 + 4 * ABCDtemp * x_18_19_1);
                                    LOC2(store, 33, 32, STOREDIM, STOREDIM) = (  Qtempx * x_33_17_0 + WQtempx * (  Qtempx * x_33_7_1 + WQtempx * (  Qtempx * x_33_1_2 + WQtempx * (  Qtempx * x_33_0_3 + WQtempx * x_33_0_4) + CDtemp * (x_33_0_2 -  ABcom * x_33_0_3)) + CDtemp * 2 * (x_33_1_1 -  ABcom * x_33_1_2)) + CDtemp * 3 * (x_33_7_0 -  ABcom * x_33_7_1));
                                    LOC2(store, 33, 33, STOREDIM, STOREDIM) = (  Qtempy * x_33_18_0 + WQtempy * x_33_18_1 + CDtemp * 3 * (x_33_8_0 -  ABcom * x_33_8_1) + 4 * ABCDtemp * x_18_18_1);
                                    LOC2(store, 33, 34, STOREDIM, STOREDIM) = (  Qtempz * x_33_19_0 + WQtempz * x_33_19_1 + CDtemp * 3 * (x_33_9_0 -  ABcom * x_33_9_1));
                                    LOC2(store, 34, 20, STOREDIM, STOREDIM) = (  Qtempx * x_34_12_0 + WQtempx * (  Qtempx * x_34_8_1 + WQtempx * x_34_8_2) + CDtemp * (x_34_8_0 -  ABcom * x_34_8_1));
                                    LOC2(store, 34, 21, STOREDIM, STOREDIM) = (  Qtempx * x_34_14_0 + WQtempx * (  Qtempx * x_34_9_1 + WQtempx * x_34_9_2) + CDtemp * (x_34_9_0 -  ABcom * x_34_9_1));
                                    LOC2(store, 34, 22, STOREDIM, STOREDIM) = (  Qtempy * x_34_16_0 + WQtempy * x_34_16_1 + CDtemp * (x_34_9_0 -  ABcom * x_34_9_1));
                                    LOC2(store, 34, 23, STOREDIM, STOREDIM) = (  Qtempx * x_34_10_0 + WQtempx * (  Qtempx * x_34_5_1 + WQtempx * x_34_5_2) + CDtemp * (x_34_5_0 -  ABcom * x_34_5_1));
                                    LOC2(store, 34, 24, STOREDIM, STOREDIM) = (  Qtempx * x_34_15_0 + WQtempx * x_34_15_1);
                                    LOC2(store, 34, 25, STOREDIM, STOREDIM) = (  Qtempx * x_34_16_0 + WQtempx * x_34_16_1);
                                    LOC2(store, 34, 26, STOREDIM, STOREDIM) = (  Qtempx * x_34_13_0 + WQtempx * (  Qtempx * x_34_6_1 + WQtempx * (  Qtempx * x_34_3_2 + WQtempx * x_34_3_3) + CDtemp * (x_34_3_1 -  ABcom * x_34_3_2)) + CDtemp * 2 * (x_34_6_0 -  ABcom * x_34_6_1));
                                    LOC2(store, 34, 27, STOREDIM, STOREDIM) = (  Qtempx * x_34_19_0 + WQtempx * x_34_19_1);
                                    LOC2(store, 34, 28, STOREDIM, STOREDIM) = (  Qtempx * x_34_11_0 + WQtempx * (  Qtempx * x_34_4_1 + WQtempx * (  Qtempx * x_34_2_2 + WQtempx * x_34_2_3) + CDtemp * (x_34_2_1 -  ABcom * x_34_2_2)) + CDtemp * 2 * (x_34_4_0 -  ABcom * x_34_4_1));
                                    LOC2(store, 34, 29, STOREDIM, STOREDIM) = (  Qtempx * x_34_18_0 + WQtempx * x_34_18_1);
                                    LOC2(store, 34, 30, STOREDIM, STOREDIM) = (  Qtempy * x_34_15_0 + WQtempy * x_34_15_1 + CDtemp * 2 * (x_34_5_0 -  ABcom * x_34_5_1));
                                    LOC2(store, 34, 31, STOREDIM, STOREDIM) = (  Qtempy * x_34_19_0 + WQtempy * x_34_19_1);
                                    LOC2(store, 34, 32, STOREDIM, STOREDIM) = (  Qtempx * x_34_17_0 + WQtempx * (  Qtempx * x_34_7_1 + WQtempx * (  Qtempx * x_34_1_2 + WQtempx * (  Qtempx * x_34_0_3 + WQtempx * x_34_0_4) + CDtemp * (x_34_0_2 -  ABcom * x_34_0_3)) + CDtemp * 2 * (x_34_1_1 -  ABcom * x_34_1_2)) + CDtemp * 3 * (x_34_7_0 -  ABcom * x_34_7_1));
                                    LOC2(store, 34, 33, STOREDIM, STOREDIM) = (  Qtempy * x_34_18_0 + WQtempy * x_34_18_1 + CDtemp * 3 * (x_34_8_0 -  ABcom * x_34_8_1));
                                    LOC2(store, 34, 34, STOREDIM, STOREDIM) = (  Qtempz * x_34_19_0 + WQtempz * x_34_19_1 + CDtemp * 3 * (x_34_9_0 -  ABcom * x_34_9_1) + 4 * ABCDtemp * x_19_19_1);
                                }*/
                            }
                        }
                        if ((I+J) >=  4 && (K+L)>= 2) {
                            // Subroutine for L =            1  B =            0 , m=           5
                            QUICKDouble x_1_0_5 = Ptempx * VY( 0, 0, 5) + WPtempx * VY( 0, 0, 6);
                            QUICKDouble x_2_0_5 = Ptempy * VY( 0, 0, 5) + WPtempy * VY( 0, 0, 6);
                            QUICKDouble x_3_0_5 = Ptempz * VY( 0, 0, 5) + WPtempz * VY( 0, 0, 6);
                            // Subroutine for L =            2  B =            0 , m=           4
                            QUICKDouble x_4_0_4 = Ptempx * x_2_0_4 + WPtempx * x_2_0_5;
                            QUICKDouble x_5_0_4 = Ptempy * x_3_0_4 + WPtempy * x_3_0_5;
                            QUICKDouble x_6_0_4 = Ptempx * x_3_0_4 + WPtempx * x_3_0_5;
                            QUICKDouble x_7_0_4 = Ptempx * x_1_0_4 + WPtempx * x_1_0_5 + ABtemp * (VY( 0, 0, 4) -  CDcom * VY( 0, 0, 5));
                            QUICKDouble x_8_0_4 = Ptempy * x_2_0_4 + WPtempy * x_2_0_5 + ABtemp * (VY( 0, 0, 4) -  CDcom * VY( 0, 0, 5));
                            QUICKDouble x_9_0_4 = Ptempz * x_3_0_4 + WPtempz * x_3_0_5 + ABtemp * (VY( 0, 0, 4) -  CDcom * VY( 0, 0, 5));
                            // Subroutine for L =            3  B =            0 , m=           3
                            QUICKDouble x_10_0_3 = Ptempx * x_5_0_3 + WPtempx * x_5_0_4;
                            QUICKDouble x_11_0_3 = Ptempx * x_4_0_3 + WPtempx * x_4_0_4 + ABtemp * (x_2_0_3 -  CDcom * x_2_0_4);
                            QUICKDouble x_12_0_3 = Ptempx * x_8_0_3 + WPtempx * x_8_0_4;
                            QUICKDouble x_13_0_3 = Ptempx * x_6_0_3 + WPtempx * x_6_0_4 + ABtemp * (x_3_0_3 -  CDcom * x_3_0_4);
                            QUICKDouble x_14_0_3 = Ptempx * x_9_0_3 + WPtempx * x_9_0_4;
                            QUICKDouble x_15_0_3 = Ptempy * x_5_0_3 + WPtempy * x_5_0_4 + ABtemp * (x_3_0_3 -  CDcom * x_3_0_4);
                            QUICKDouble x_16_0_3 = Ptempy * x_9_0_3 + WPtempy * x_9_0_4;
                            QUICKDouble x_17_0_3 = Ptempx * x_7_0_3 + WPtempx * x_7_0_4 + ABtemp * 2 * (x_1_0_3 -  CDcom * x_1_0_4);
                            QUICKDouble x_18_0_3 = Ptempy * x_8_0_3 + WPtempy * x_8_0_4 + ABtemp * 2 * (x_2_0_3 -  CDcom * x_2_0_4);
                            QUICKDouble x_19_0_3 = Ptempz * x_9_0_3 + WPtempz * x_9_0_4 + ABtemp * 2 * (x_3_0_3 -  CDcom * x_3_0_4);
                            // Subroutine for L =            4  B =            0 , m=           0
                            QUICKDouble x_20_0_0 = Ptempx * x_12_0_0 + WPtempx * x_12_0_1 + ABtemp * (x_8_0_0 -  CDcom * x_8_0_1);
                            QUICKDouble x_21_0_0 = Ptempx * x_14_0_0 + WPtempx * x_14_0_1 + ABtemp * (x_9_0_0 -  CDcom * x_9_0_1);
                            QUICKDouble x_22_0_0 = Ptempy * x_16_0_0 + WPtempy * x_16_0_1 + ABtemp * (x_9_0_0 -  CDcom * x_9_0_1);
                            QUICKDouble x_23_0_0 = Ptempx * x_10_0_0 + WPtempx * x_10_0_1 + ABtemp * (x_5_0_0 -  CDcom * x_5_0_1);
                            QUICKDouble x_24_0_0 = Ptempx * x_15_0_0 + WPtempx * x_15_0_1;
                            QUICKDouble x_25_0_0 = Ptempx * x_16_0_0 + WPtempx * x_16_0_1;
                            QUICKDouble x_26_0_0 = Ptempx * x_13_0_0 + WPtempx * x_13_0_1 + ABtemp * 2 * (x_6_0_0 -  CDcom * x_6_0_1);
                            QUICKDouble x_27_0_0 = Ptempx * x_19_0_0 + WPtempx * x_19_0_1;
                            QUICKDouble x_28_0_0 = Ptempx * x_11_0_0 + WPtempx * x_11_0_1 + ABtemp * 2 * (x_4_0_0 -  CDcom * x_4_0_1);
                            QUICKDouble x_29_0_0 = Ptempx * x_18_0_0 + WPtempx * x_18_0_1;
                            QUICKDouble x_30_0_0 = Ptempy * x_15_0_0 + WPtempy * x_15_0_1 + ABtemp * 2 * (x_5_0_0 -  CDcom * x_5_0_1);
                            QUICKDouble x_31_0_0 = Ptempy * x_19_0_0 + WPtempy * x_19_0_1;
                            QUICKDouble x_32_0_0 = Ptempx * x_17_0_0 + WPtempx * x_17_0_1 + ABtemp * 3 * (x_7_0_0 -  CDcom * x_7_0_1);
                            QUICKDouble x_33_0_0 = Ptempy * x_18_0_0 + WPtempy * x_18_0_1 + ABtemp * 3 * (x_8_0_0 -  CDcom * x_8_0_1);
                            QUICKDouble x_34_0_0 = Ptempz * x_19_0_0 + WPtempz * x_19_0_1 + ABtemp * 3 * (x_9_0_0 -  CDcom * x_9_0_1);
                            // Subroutine for L =            4  B =            0 , m=           1
                            QUICKDouble x_20_0_1 = Ptempx * x_12_0_1 + WPtempx * x_12_0_2 + ABtemp * (x_8_0_1 -  CDcom * x_8_0_2);
                            QUICKDouble x_21_0_1 = Ptempx * x_14_0_1 + WPtempx * x_14_0_2 + ABtemp * (x_9_0_1 -  CDcom * x_9_0_2);
                            QUICKDouble x_22_0_1 = Ptempy * x_16_0_1 + WPtempy * x_16_0_2 + ABtemp * (x_9_0_1 -  CDcom * x_9_0_2);
                            QUICKDouble x_23_0_1 = Ptempx * x_10_0_1 + WPtempx * x_10_0_2 + ABtemp * (x_5_0_1 -  CDcom * x_5_0_2);
                            QUICKDouble x_24_0_1 = Ptempx * x_15_0_1 + WPtempx * x_15_0_2;
                            QUICKDouble x_25_0_1 = Ptempx * x_16_0_1 + WPtempx * x_16_0_2;
                            QUICKDouble x_26_0_1 = Ptempx * x_13_0_1 + WPtempx * x_13_0_2 + ABtemp * 2 * (x_6_0_1 -  CDcom * x_6_0_2);
                            QUICKDouble x_27_0_1 = Ptempx * x_19_0_1 + WPtempx * x_19_0_2;
                            QUICKDouble x_28_0_1 = Ptempx * x_11_0_1 + WPtempx * x_11_0_2 + ABtemp * 2 * (x_4_0_1 -  CDcom * x_4_0_2);
                            QUICKDouble x_29_0_1 = Ptempx * x_18_0_1 + WPtempx * x_18_0_2;
                            QUICKDouble x_30_0_1 = Ptempy * x_15_0_1 + WPtempy * x_15_0_2 + ABtemp * 2 * (x_5_0_1 -  CDcom * x_5_0_2);
                            QUICKDouble x_31_0_1 = Ptempy * x_19_0_1 + WPtempy * x_19_0_2;
                            QUICKDouble x_32_0_1 = Ptempx * x_17_0_1 + WPtempx * x_17_0_2 + ABtemp * 3 * (x_7_0_1 -  CDcom * x_7_0_2);
                            QUICKDouble x_33_0_1 = Ptempy * x_18_0_1 + WPtempy * x_18_0_2 + ABtemp * 3 * (x_8_0_1 -  CDcom * x_8_0_2);
                            QUICKDouble x_34_0_1 = Ptempz * x_19_0_1 + WPtempz * x_19_0_2 + ABtemp * 3 * (x_9_0_1 -  CDcom * x_9_0_2);
                            // Subroutine for L =            4  B =            0 , m=           2
                            QUICKDouble x_20_0_2 = Ptempx * x_12_0_2 + WPtempx * x_12_0_3 + ABtemp * (x_8_0_2 -  CDcom * x_8_0_3);
                            QUICKDouble x_21_0_2 = Ptempx * x_14_0_2 + WPtempx * x_14_0_3 + ABtemp * (x_9_0_2 -  CDcom * x_9_0_3);
                            QUICKDouble x_22_0_2 = Ptempy * x_16_0_2 + WPtempy * x_16_0_3 + ABtemp * (x_9_0_2 -  CDcom * x_9_0_3);
                            QUICKDouble x_23_0_2 = Ptempx * x_10_0_2 + WPtempx * x_10_0_3 + ABtemp * (x_5_0_2 -  CDcom * x_5_0_3);
                            QUICKDouble x_24_0_2 = Ptempx * x_15_0_2 + WPtempx * x_15_0_3;
                            QUICKDouble x_25_0_2 = Ptempx * x_16_0_2 + WPtempx * x_16_0_3;
                            QUICKDouble x_26_0_2 = Ptempx * x_13_0_2 + WPtempx * x_13_0_3 + ABtemp * 2 * (x_6_0_2 -  CDcom * x_6_0_3);
                            QUICKDouble x_27_0_2 = Ptempx * x_19_0_2 + WPtempx * x_19_0_3;
                            QUICKDouble x_28_0_2 = Ptempx * x_11_0_2 + WPtempx * x_11_0_3 + ABtemp * 2 * (x_4_0_2 -  CDcom * x_4_0_3);
                            QUICKDouble x_29_0_2 = Ptempx * x_18_0_2 + WPtempx * x_18_0_3;
                            QUICKDouble x_30_0_2 = Ptempy * x_15_0_2 + WPtempy * x_15_0_3 + ABtemp * 2 * (x_5_0_2 -  CDcom * x_5_0_3);
                            QUICKDouble x_31_0_2 = Ptempy * x_19_0_2 + WPtempy * x_19_0_3;
                            QUICKDouble x_32_0_2 = Ptempx * x_17_0_2 + WPtempx * x_17_0_3 + ABtemp * 3 * (x_7_0_2 -  CDcom * x_7_0_3);
                            QUICKDouble x_33_0_2 = Ptempy * x_18_0_2 + WPtempy * x_18_0_3 + ABtemp * 3 * (x_8_0_2 -  CDcom * x_8_0_3);
                            QUICKDouble x_34_0_2 = Ptempz * x_19_0_2 + WPtempz * x_19_0_3 + ABtemp * 3 * (x_9_0_2 -  CDcom * x_9_0_3);
                            // Subroutine for B =            4  L =            1 , m=           0
                            QUICKDouble x_20_1_0 = Qtempx * x_20_0_0 + WQtempx * x_20_0_1 + 2 * ABCDtemp * x_12_0_1;
                            QUICKDouble x_21_1_0 = Qtempx * x_21_0_0 + WQtempx * x_21_0_1 + 2 * ABCDtemp * x_14_0_1;
                            QUICKDouble x_22_1_0 = Qtempx * x_22_0_0 + WQtempx * x_22_0_1;
                            QUICKDouble x_23_1_0 = Qtempx * x_23_0_0 + WQtempx * x_23_0_1 + 2 * ABCDtemp * x_10_0_1;
                            QUICKDouble x_24_1_0 = Qtempx * x_24_0_0 + WQtempx * x_24_0_1 + ABCDtemp * x_15_0_1;
                            QUICKDouble x_25_1_0 = Qtempx * x_25_0_0 + WQtempx * x_25_0_1 + ABCDtemp * x_16_0_1;
                            QUICKDouble x_26_1_0 = Qtempx * x_26_0_0 + WQtempx * x_26_0_1 + 3 * ABCDtemp * x_13_0_1;
                            QUICKDouble x_27_1_0 = Qtempx * x_27_0_0 + WQtempx * x_27_0_1 + ABCDtemp * x_19_0_1;
                            QUICKDouble x_28_1_0 = Qtempx * x_28_0_0 + WQtempx * x_28_0_1 + 3 * ABCDtemp * x_11_0_1;
                            QUICKDouble x_29_1_0 = Qtempx * x_29_0_0 + WQtempx * x_29_0_1 + ABCDtemp * x_18_0_1;
                            QUICKDouble x_30_1_0 = Qtempx * x_30_0_0 + WQtempx * x_30_0_1;
                            QUICKDouble x_31_1_0 = Qtempx * x_31_0_0 + WQtempx * x_31_0_1;
                            QUICKDouble x_32_1_0 = Qtempx * x_32_0_0 + WQtempx * x_32_0_1 + 4 * ABCDtemp * x_17_0_1;
                            QUICKDouble x_33_1_0 = Qtempx * x_33_0_0 + WQtempx * x_33_0_1;
                            QUICKDouble x_34_1_0 = Qtempx * x_34_0_0 + WQtempx * x_34_0_1;
                            QUICKDouble x_20_2_0 = Qtempy * x_20_0_0 + WQtempy * x_20_0_1 + 2 * ABCDtemp * x_11_0_1;
                            QUICKDouble x_21_2_0 = Qtempy * x_21_0_0 + WQtempy * x_21_0_1;
                            QUICKDouble x_22_2_0 = Qtempy * x_22_0_0 + WQtempy * x_22_0_1 + 2 * ABCDtemp * x_16_0_1;
                            QUICKDouble x_23_2_0 = Qtempy * x_23_0_0 + WQtempy * x_23_0_1 + ABCDtemp * x_13_0_1;
                            QUICKDouble x_24_2_0 = Qtempy * x_24_0_0 + WQtempy * x_24_0_1 + 2 * ABCDtemp * x_10_0_1;
                            QUICKDouble x_25_2_0 = Qtempy * x_25_0_0 + WQtempy * x_25_0_1 + ABCDtemp * x_14_0_1;
                            QUICKDouble x_26_2_0 = Qtempy * x_26_0_0 + WQtempy * x_26_0_1;
                            QUICKDouble x_27_2_0 = Qtempy * x_27_0_0 + WQtempy * x_27_0_1;
                            QUICKDouble x_28_2_0 = Qtempy * x_28_0_0 + WQtempy * x_28_0_1 + ABCDtemp * x_17_0_1;
                            QUICKDouble x_29_2_0 = Qtempy * x_29_0_0 + WQtempy * x_29_0_1 + 3 * ABCDtemp * x_12_0_1;
                            QUICKDouble x_30_2_0 = Qtempy * x_30_0_0 + WQtempy * x_30_0_1 + 3 * ABCDtemp * x_15_0_1;
                            QUICKDouble x_31_2_0 = Qtempy * x_31_0_0 + WQtempy * x_31_0_1 + ABCDtemp * x_19_0_1;
                            QUICKDouble x_32_2_0 = Qtempy * x_32_0_0 + WQtempy * x_32_0_1;
                            QUICKDouble x_33_2_0 = Qtempy * x_33_0_0 + WQtempy * x_33_0_1 + 4 * ABCDtemp * x_18_0_1;
                            QUICKDouble x_34_2_0 = Qtempy * x_34_0_0 + WQtempy * x_34_0_1;
                            QUICKDouble x_20_3_0 = Qtempz * x_20_0_0 + WQtempz * x_20_0_1;
                            QUICKDouble x_21_3_0 = Qtempz * x_21_0_0 + WQtempz * x_21_0_1 + 2 * ABCDtemp * x_13_0_1;
                            QUICKDouble x_22_3_0 = Qtempz * x_22_0_0 + WQtempz * x_22_0_1 + 2 * ABCDtemp * x_15_0_1;
                            QUICKDouble x_23_3_0 = Qtempz * x_23_0_0 + WQtempz * x_23_0_1 + ABCDtemp * x_11_0_1;
                            QUICKDouble x_24_3_0 = Qtempz * x_24_0_0 + WQtempz * x_24_0_1 + ABCDtemp * x_12_0_1;
                            QUICKDouble x_25_3_0 = Qtempz * x_25_0_0 + WQtempz * x_25_0_1 + 2 * ABCDtemp * x_10_0_1;
                            QUICKDouble x_26_3_0 = Qtempz * x_26_0_0 + WQtempz * x_26_0_1 + ABCDtemp * x_17_0_1;
                            QUICKDouble x_27_3_0 = Qtempz * x_27_0_0 + WQtempz * x_27_0_1 + 3 * ABCDtemp * x_14_0_1;
                            QUICKDouble x_28_3_0 = Qtempz * x_28_0_0 + WQtempz * x_28_0_1;
                            QUICKDouble x_29_3_0 = Qtempz * x_29_0_0 + WQtempz * x_29_0_1;
                            QUICKDouble x_30_3_0 = Qtempz * x_30_0_0 + WQtempz * x_30_0_1 + ABCDtemp * x_18_0_1;
                            QUICKDouble x_31_3_0 = Qtempz * x_31_0_0 + WQtempz * x_31_0_1 + 3 * ABCDtemp * x_16_0_1;
                            QUICKDouble x_32_3_0 = Qtempz * x_32_0_0 + WQtempz * x_32_0_1;
                            QUICKDouble x_33_3_0 = Qtempz * x_33_0_0 + WQtempz * x_33_0_1;
                            QUICKDouble x_34_3_0 = Qtempz * x_34_0_0 + WQtempz * x_34_0_1 + 4 * ABCDtemp * x_19_0_1;
                            
                            // Subroutine for B =            4  L =            1 , m=           1
                            QUICKDouble x_20_1_1 = Qtempx * x_20_0_1 + WQtempx * x_20_0_2 + 2 * ABCDtemp * x_12_0_2;
                            QUICKDouble x_21_1_1 = Qtempx * x_21_0_1 + WQtempx * x_21_0_2 + 2 * ABCDtemp * x_14_0_2;
                            QUICKDouble x_22_1_1 = Qtempx * x_22_0_1 + WQtempx * x_22_0_2;
                            QUICKDouble x_23_1_1 = Qtempx * x_23_0_1 + WQtempx * x_23_0_2 + 2 * ABCDtemp * x_10_0_2;
                            QUICKDouble x_24_1_1 = Qtempx * x_24_0_1 + WQtempx * x_24_0_2 + ABCDtemp * x_15_0_2;
                            QUICKDouble x_25_1_1 = Qtempx * x_25_0_1 + WQtempx * x_25_0_2 + ABCDtemp * x_16_0_2;
                            QUICKDouble x_26_1_1 = Qtempx * x_26_0_1 + WQtempx * x_26_0_2 + 3 * ABCDtemp * x_13_0_2;
                            QUICKDouble x_27_1_1 = Qtempx * x_27_0_1 + WQtempx * x_27_0_2 + ABCDtemp * x_19_0_2;
                            QUICKDouble x_28_1_1 = Qtempx * x_28_0_1 + WQtempx * x_28_0_2 + 3 * ABCDtemp * x_11_0_2;
                            QUICKDouble x_29_1_1 = Qtempx * x_29_0_1 + WQtempx * x_29_0_2 + ABCDtemp * x_18_0_2;
                            QUICKDouble x_30_1_1 = Qtempx * x_30_0_1 + WQtempx * x_30_0_2;
                            QUICKDouble x_31_1_1 = Qtempx * x_31_0_1 + WQtempx * x_31_0_2;
                            QUICKDouble x_32_1_1 = Qtempx * x_32_0_1 + WQtempx * x_32_0_2 + 4 * ABCDtemp * x_17_0_2;
                            QUICKDouble x_33_1_1 = Qtempx * x_33_0_1 + WQtempx * x_33_0_2;
                            QUICKDouble x_34_1_1 = Qtempx * x_34_0_1 + WQtempx * x_34_0_2;
                            QUICKDouble x_20_2_1 = Qtempy * x_20_0_1 + WQtempy * x_20_0_2 + 2 * ABCDtemp * x_11_0_2;
                            QUICKDouble x_21_2_1 = Qtempy * x_21_0_1 + WQtempy * x_21_0_2;
                            QUICKDouble x_22_2_1 = Qtempy * x_22_0_1 + WQtempy * x_22_0_2 + 2 * ABCDtemp * x_16_0_2;
                            QUICKDouble x_23_2_1 = Qtempy * x_23_0_1 + WQtempy * x_23_0_2 + ABCDtemp * x_13_0_2;
                            QUICKDouble x_24_2_1 = Qtempy * x_24_0_1 + WQtempy * x_24_0_2 + 2 * ABCDtemp * x_10_0_2;
                            QUICKDouble x_25_2_1 = Qtempy * x_25_0_1 + WQtempy * x_25_0_2 + ABCDtemp * x_14_0_2;
                            QUICKDouble x_26_2_1 = Qtempy * x_26_0_1 + WQtempy * x_26_0_2;
                            QUICKDouble x_27_2_1 = Qtempy * x_27_0_1 + WQtempy * x_27_0_2;
                            QUICKDouble x_28_2_1 = Qtempy * x_28_0_1 + WQtempy * x_28_0_2 + ABCDtemp * x_17_0_2;
                            QUICKDouble x_29_2_1 = Qtempy * x_29_0_1 + WQtempy * x_29_0_2 + 3 * ABCDtemp * x_12_0_2;
                            QUICKDouble x_30_2_1 = Qtempy * x_30_0_1 + WQtempy * x_30_0_2 + 3 * ABCDtemp * x_15_0_2;
                            QUICKDouble x_31_2_1 = Qtempy * x_31_0_1 + WQtempy * x_31_0_2 + ABCDtemp * x_19_0_2;
                            QUICKDouble x_32_2_1 = Qtempy * x_32_0_1 + WQtempy * x_32_0_2;
                            QUICKDouble x_33_2_1 = Qtempy * x_33_0_1 + WQtempy * x_33_0_2 + 4 * ABCDtemp * x_18_0_2;
                            QUICKDouble x_34_2_1 = Qtempy * x_34_0_1 + WQtempy * x_34_0_2;
                            QUICKDouble x_20_3_1 = Qtempz * x_20_0_1 + WQtempz * x_20_0_2;
                            QUICKDouble x_21_3_1 = Qtempz * x_21_0_1 + WQtempz * x_21_0_2 + 2 * ABCDtemp * x_13_0_2;
                            QUICKDouble x_22_3_1 = Qtempz * x_22_0_1 + WQtempz * x_22_0_2 + 2 * ABCDtemp * x_15_0_2;
                            QUICKDouble x_23_3_1 = Qtempz * x_23_0_1 + WQtempz * x_23_0_2 + ABCDtemp * x_11_0_2;
                            QUICKDouble x_24_3_1 = Qtempz * x_24_0_1 + WQtempz * x_24_0_2 + ABCDtemp * x_12_0_2;
                            QUICKDouble x_25_3_1 = Qtempz * x_25_0_1 + WQtempz * x_25_0_2 + 2 * ABCDtemp * x_10_0_2;
                            QUICKDouble x_26_3_1 = Qtempz * x_26_0_1 + WQtempz * x_26_0_2 + ABCDtemp * x_17_0_2;
                            QUICKDouble x_27_3_1 = Qtempz * x_27_0_1 + WQtempz * x_27_0_2 + 3 * ABCDtemp * x_14_0_2;
                            QUICKDouble x_28_3_1 = Qtempz * x_28_0_1 + WQtempz * x_28_0_2;
                            QUICKDouble x_29_3_1 = Qtempz * x_29_0_1 + WQtempz * x_29_0_2;
                            QUICKDouble x_30_3_1 = Qtempz * x_30_0_1 + WQtempz * x_30_0_2 + ABCDtemp * x_18_0_2;
                            QUICKDouble x_31_3_1 = Qtempz * x_31_0_1 + WQtempz * x_31_0_2 + 3 * ABCDtemp * x_16_0_2;
                            QUICKDouble x_32_3_1 = Qtempz * x_32_0_1 + WQtempz * x_32_0_2;
                            QUICKDouble x_33_3_1 = Qtempz * x_33_0_1 + WQtempz * x_33_0_2;
                            QUICKDouble x_34_3_1 = Qtempz * x_34_0_1 + WQtempz * x_34_0_2 + 4 * ABCDtemp * x_19_0_2;
                            
                            // Subroutine for B =            4  L =            2 , m=           0
                            QUICKDouble x_20_4_0 = Qtempx * x_20_2_0 + WQtempx * x_20_2_1 + 2 * ABCDtemp * x_12_2_1;
                            QUICKDouble x_21_4_0 = Qtempx * x_21_2_0 + WQtempx * x_21_2_1 + 2 * ABCDtemp * x_14_2_1;
                            QUICKDouble x_22_4_0 = Qtempx * x_22_2_0 + WQtempx * x_22_2_1;
                            QUICKDouble x_23_4_0 = Qtempx * x_23_2_0 + WQtempx * x_23_2_1 + 2 * ABCDtemp * x_10_2_1;
                            QUICKDouble x_24_4_0 = Qtempx * x_24_2_0 + WQtempx * x_24_2_1 + ABCDtemp * x_15_2_1;
                            QUICKDouble x_25_4_0 = Qtempx * x_25_2_0 + WQtempx * x_25_2_1 + ABCDtemp * x_16_2_1;
                            QUICKDouble x_26_4_0 = Qtempx * x_26_2_0 + WQtempx * x_26_2_1 + 3 * ABCDtemp * x_13_2_1;
                            QUICKDouble x_27_4_0 = Qtempx * x_27_2_0 + WQtempx * x_27_2_1 + ABCDtemp * x_19_2_1;
                            QUICKDouble x_28_4_0 = Qtempx * x_28_2_0 + WQtempx * x_28_2_1 + 3 * ABCDtemp * x_11_2_1;
                            QUICKDouble x_29_4_0 = Qtempx * x_29_2_0 + WQtempx * x_29_2_1 + ABCDtemp * x_18_2_1;
                            QUICKDouble x_30_4_0 = Qtempx * x_30_2_0 + WQtempx * x_30_2_1;
                            QUICKDouble x_31_4_0 = Qtempx * x_31_2_0 + WQtempx * x_31_2_1;
                            QUICKDouble x_32_4_0 = Qtempx * x_32_2_0 + WQtempx * x_32_2_1 + 4 * ABCDtemp * x_17_2_1;
                            QUICKDouble x_33_4_0 = Qtempx * x_33_2_0 + WQtempx * x_33_2_1;
                            QUICKDouble x_34_4_0 = Qtempx * x_34_2_0 + WQtempx * x_34_2_1;
                            QUICKDouble x_20_5_0 = Qtempy * x_20_3_0 + WQtempy * x_20_3_1 + 2 * ABCDtemp * x_11_3_1;
                            QUICKDouble x_21_5_0 = Qtempy * x_21_3_0 + WQtempy * x_21_3_1;
                            QUICKDouble x_22_5_0 = Qtempy * x_22_3_0 + WQtempy * x_22_3_1 + 2 * ABCDtemp * x_16_3_1;
                            QUICKDouble x_23_5_0 = Qtempy * x_23_3_0 + WQtempy * x_23_3_1 + ABCDtemp * x_13_3_1;
                            QUICKDouble x_24_5_0 = Qtempy * x_24_3_0 + WQtempy * x_24_3_1 + 2 * ABCDtemp * x_10_3_1;
                            QUICKDouble x_25_5_0 = Qtempy * x_25_3_0 + WQtempy * x_25_3_1 + ABCDtemp * x_14_3_1;
                            QUICKDouble x_26_5_0 = Qtempy * x_26_3_0 + WQtempy * x_26_3_1;
                            QUICKDouble x_27_5_0 = Qtempy * x_27_3_0 + WQtempy * x_27_3_1;
                            QUICKDouble x_28_5_0 = Qtempy * x_28_3_0 + WQtempy * x_28_3_1 + ABCDtemp * x_17_3_1;
                            QUICKDouble x_29_5_0 = Qtempy * x_29_3_0 + WQtempy * x_29_3_1 + 3 * ABCDtemp * x_12_3_1;
                            QUICKDouble x_30_5_0 = Qtempy * x_30_3_0 + WQtempy * x_30_3_1 + 3 * ABCDtemp * x_15_3_1;
                            QUICKDouble x_31_5_0 = Qtempy * x_31_3_0 + WQtempy * x_31_3_1 + ABCDtemp * x_19_3_1;
                            QUICKDouble x_32_5_0 = Qtempy * x_32_3_0 + WQtempy * x_32_3_1;
                            QUICKDouble x_33_5_0 = Qtempy * x_33_3_0 + WQtempy * x_33_3_1 + 4 * ABCDtemp * x_18_3_1;
                            QUICKDouble x_34_5_0 = Qtempy * x_34_3_0 + WQtempy * x_34_3_1;
                            QUICKDouble x_20_6_0 = Qtempx * x_20_3_0 + WQtempx * x_20_3_1 + 2 * ABCDtemp * x_12_3_1;
                            QUICKDouble x_21_6_0 = Qtempx * x_21_3_0 + WQtempx * x_21_3_1 + 2 * ABCDtemp * x_14_3_1;
                            QUICKDouble x_22_6_0 = Qtempx * x_22_3_0 + WQtempx * x_22_3_1;
                            QUICKDouble x_23_6_0 = Qtempx * x_23_3_0 + WQtempx * x_23_3_1 + 2 * ABCDtemp * x_10_3_1;
                            QUICKDouble x_24_6_0 = Qtempx * x_24_3_0 + WQtempx * x_24_3_1 + ABCDtemp * x_15_3_1;
                            QUICKDouble x_25_6_0 = Qtempx * x_25_3_0 + WQtempx * x_25_3_1 + ABCDtemp * x_16_3_1;
                            QUICKDouble x_26_6_0 = Qtempx * x_26_3_0 + WQtempx * x_26_3_1 + 3 * ABCDtemp * x_13_3_1;
                            QUICKDouble x_27_6_0 = Qtempx * x_27_3_0 + WQtempx * x_27_3_1 + ABCDtemp * x_19_3_1;
                            QUICKDouble x_28_6_0 = Qtempx * x_28_3_0 + WQtempx * x_28_3_1 + 3 * ABCDtemp * x_11_3_1;
                            QUICKDouble x_29_6_0 = Qtempx * x_29_3_0 + WQtempx * x_29_3_1 + ABCDtemp * x_18_3_1;
                            QUICKDouble x_30_6_0 = Qtempx * x_30_3_0 + WQtempx * x_30_3_1;
                            QUICKDouble x_31_6_0 = Qtempx * x_31_3_0 + WQtempx * x_31_3_1;
                            QUICKDouble x_32_6_0 = Qtempx * x_32_3_0 + WQtempx * x_32_3_1 + 4 * ABCDtemp * x_17_3_1;
                            QUICKDouble x_33_6_0 = Qtempx * x_33_3_0 + WQtempx * x_33_3_1;
                            QUICKDouble x_34_6_0 = Qtempx * x_34_3_0 + WQtempx * x_34_3_1;
                            QUICKDouble x_20_7_0 = Qtempx * x_20_1_0 + WQtempx * x_20_1_1 + CDtemp * (x_20_0_0 -  ABcom * x_20_0_1) + 2 * ABCDtemp * x_12_1_1;
                            QUICKDouble x_21_7_0 = Qtempx * x_21_1_0 + WQtempx * x_21_1_1 + CDtemp * (x_21_0_0 -  ABcom * x_21_0_1) + 2 * ABCDtemp * x_14_1_1;
                            QUICKDouble x_22_7_0 = Qtempx * x_22_1_0 + WQtempx * x_22_1_1 + CDtemp * (x_22_0_0 -  ABcom * x_22_0_1);
                            QUICKDouble x_23_7_0 = Qtempx * x_23_1_0 + WQtempx * x_23_1_1 + CDtemp * (x_23_0_0 -  ABcom * x_23_0_1) + 2 * ABCDtemp * x_10_1_1;
                            QUICKDouble x_24_7_0 = Qtempx * x_24_1_0 + WQtempx * x_24_1_1 + CDtemp * (x_24_0_0 -  ABcom * x_24_0_1) + ABCDtemp * x_15_1_1;
                            QUICKDouble x_25_7_0 = Qtempx * x_25_1_0 + WQtempx * x_25_1_1 + CDtemp * (x_25_0_0 -  ABcom * x_25_0_1) + ABCDtemp * x_16_1_1;
                            QUICKDouble x_26_7_0 = Qtempx * x_26_1_0 + WQtempx * x_26_1_1 + CDtemp * (x_26_0_0 -  ABcom * x_26_0_1) + 3 * ABCDtemp * x_13_1_1;
                            QUICKDouble x_27_7_0 = Qtempx * x_27_1_0 + WQtempx * x_27_1_1 + CDtemp * (x_27_0_0 -  ABcom * x_27_0_1) + ABCDtemp * x_19_1_1;
                            QUICKDouble x_28_7_0 = Qtempx * x_28_1_0 + WQtempx * x_28_1_1 + CDtemp * (x_28_0_0 -  ABcom * x_28_0_1) + 3 * ABCDtemp * x_11_1_1;
                            QUICKDouble x_29_7_0 = Qtempx * x_29_1_0 + WQtempx * x_29_1_1 + CDtemp * (x_29_0_0 -  ABcom * x_29_0_1) + ABCDtemp * x_18_1_1;
                            QUICKDouble x_30_7_0 = Qtempx * x_30_1_0 + WQtempx * x_30_1_1 + CDtemp * (x_30_0_0 -  ABcom * x_30_0_1);
                            QUICKDouble x_31_7_0 = Qtempx * x_31_1_0 + WQtempx * x_31_1_1 + CDtemp * (x_31_0_0 -  ABcom * x_31_0_1);
                            QUICKDouble x_32_7_0 = Qtempx * x_32_1_0 + WQtempx * x_32_1_1 + CDtemp * (x_32_0_0 -  ABcom * x_32_0_1) + 4 * ABCDtemp * x_17_1_1;
                            QUICKDouble x_33_7_0 = Qtempx * x_33_1_0 + WQtempx * x_33_1_1 + CDtemp * (x_33_0_0 -  ABcom * x_33_0_1);
                            QUICKDouble x_34_7_0 = Qtempx * x_34_1_0 + WQtempx * x_34_1_1 + CDtemp * (x_34_0_0 -  ABcom * x_34_0_1);
                            QUICKDouble x_20_8_0 = Qtempy * x_20_2_0 + WQtempy * x_20_2_1 + CDtemp * (x_20_0_0 -  ABcom * x_20_0_1) + 2 * ABCDtemp * x_11_2_1;
                            QUICKDouble x_21_8_0 = Qtempy * x_21_2_0 + WQtempy * x_21_2_1 + CDtemp * (x_21_0_0 -  ABcom * x_21_0_1);
                            QUICKDouble x_22_8_0 = Qtempy * x_22_2_0 + WQtempy * x_22_2_1 + CDtemp * (x_22_0_0 -  ABcom * x_22_0_1) + 2 * ABCDtemp * x_16_2_1;
                            QUICKDouble x_23_8_0 = Qtempy * x_23_2_0 + WQtempy * x_23_2_1 + CDtemp * (x_23_0_0 -  ABcom * x_23_0_1) + ABCDtemp * x_13_2_1;
                            QUICKDouble x_24_8_0 = Qtempy * x_24_2_0 + WQtempy * x_24_2_1 + CDtemp * (x_24_0_0 -  ABcom * x_24_0_1) + 2 * ABCDtemp * x_10_2_1;
                            QUICKDouble x_25_8_0 = Qtempy * x_25_2_0 + WQtempy * x_25_2_1 + CDtemp * (x_25_0_0 -  ABcom * x_25_0_1) + ABCDtemp * x_14_2_1;
                            QUICKDouble x_26_8_0 = Qtempy * x_26_2_0 + WQtempy * x_26_2_1 + CDtemp * (x_26_0_0 -  ABcom * x_26_0_1);
                            QUICKDouble x_27_8_0 = Qtempy * x_27_2_0 + WQtempy * x_27_2_1 + CDtemp * (x_27_0_0 -  ABcom * x_27_0_1);
                            QUICKDouble x_28_8_0 = Qtempy * x_28_2_0 + WQtempy * x_28_2_1 + CDtemp * (x_28_0_0 -  ABcom * x_28_0_1) + ABCDtemp * x_17_2_1;
                            QUICKDouble x_29_8_0 = Qtempy * x_29_2_0 + WQtempy * x_29_2_1 + CDtemp * (x_29_0_0 -  ABcom * x_29_0_1) + 3 * ABCDtemp * x_12_2_1;
                            QUICKDouble x_30_8_0 = Qtempy * x_30_2_0 + WQtempy * x_30_2_1 + CDtemp * (x_30_0_0 -  ABcom * x_30_0_1) + 3 * ABCDtemp * x_15_2_1;
                            QUICKDouble x_31_8_0 = Qtempy * x_31_2_0 + WQtempy * x_31_2_1 + CDtemp * (x_31_0_0 -  ABcom * x_31_0_1) + ABCDtemp * x_19_2_1;
                            QUICKDouble x_32_8_0 = Qtempy * x_32_2_0 + WQtempy * x_32_2_1 + CDtemp * (x_32_0_0 -  ABcom * x_32_0_1);
                            QUICKDouble x_33_8_0 = Qtempy * x_33_2_0 + WQtempy * x_33_2_1 + CDtemp * (x_33_0_0 -  ABcom * x_33_0_1) + 4 * ABCDtemp * x_18_2_1;
                            QUICKDouble x_34_8_0 = Qtempy * x_34_2_0 + WQtempy * x_34_2_1 + CDtemp * (x_34_0_0 -  ABcom * x_34_0_1);
                            QUICKDouble x_20_9_0 = Qtempz * x_20_3_0 + WQtempz * x_20_3_1 + CDtemp * (x_20_0_0 -  ABcom * x_20_0_1);
                            QUICKDouble x_21_9_0 = Qtempz * x_21_3_0 + WQtempz * x_21_3_1 + CDtemp * (x_21_0_0 -  ABcom * x_21_0_1) + 2 * ABCDtemp * x_13_3_1;
                            QUICKDouble x_22_9_0 = Qtempz * x_22_3_0 + WQtempz * x_22_3_1 + CDtemp * (x_22_0_0 -  ABcom * x_22_0_1) + 2 * ABCDtemp * x_15_3_1;
                            QUICKDouble x_23_9_0 = Qtempz * x_23_3_0 + WQtempz * x_23_3_1 + CDtemp * (x_23_0_0 -  ABcom * x_23_0_1) + ABCDtemp * x_11_3_1;
                            QUICKDouble x_24_9_0 = Qtempz * x_24_3_0 + WQtempz * x_24_3_1 + CDtemp * (x_24_0_0 -  ABcom * x_24_0_1) + ABCDtemp * x_12_3_1;
                            QUICKDouble x_25_9_0 = Qtempz * x_25_3_0 + WQtempz * x_25_3_1 + CDtemp * (x_25_0_0 -  ABcom * x_25_0_1) + 2 * ABCDtemp * x_10_3_1;
                            QUICKDouble x_26_9_0 = Qtempz * x_26_3_0 + WQtempz * x_26_3_1 + CDtemp * (x_26_0_0 -  ABcom * x_26_0_1) + ABCDtemp * x_17_3_1;
                            QUICKDouble x_27_9_0 = Qtempz * x_27_3_0 + WQtempz * x_27_3_1 + CDtemp * (x_27_0_0 -  ABcom * x_27_0_1) + 3 * ABCDtemp * x_14_3_1;
                            QUICKDouble x_28_9_0 = Qtempz * x_28_3_0 + WQtempz * x_28_3_1 + CDtemp * (x_28_0_0 -  ABcom * x_28_0_1);
                            QUICKDouble x_29_9_0 = Qtempz * x_29_3_0 + WQtempz * x_29_3_1 + CDtemp * (x_29_0_0 -  ABcom * x_29_0_1);
                            QUICKDouble x_30_9_0 = Qtempz * x_30_3_0 + WQtempz * x_30_3_1 + CDtemp * (x_30_0_0 -  ABcom * x_30_0_1) + ABCDtemp * x_18_3_1;
                            QUICKDouble x_31_9_0 = Qtempz * x_31_3_0 + WQtempz * x_31_3_1 + CDtemp * (x_31_0_0 -  ABcom * x_31_0_1) + 3 * ABCDtemp * x_16_3_1;
                            QUICKDouble x_32_9_0 = Qtempz * x_32_3_0 + WQtempz * x_32_3_1 + CDtemp * (x_32_0_0 -  ABcom * x_32_0_1);
                            QUICKDouble x_33_9_0 = Qtempz * x_33_3_0 + WQtempz * x_33_3_1 + CDtemp * (x_33_0_0 -  ABcom * x_33_0_1);
                            QUICKDouble x_34_9_0 = Qtempz * x_34_3_0 + WQtempz * x_34_3_1 + CDtemp * (x_34_0_0 -  ABcom * x_34_0_1) + 4 * ABCDtemp * x_19_3_1;
                            
                            // WRITE LAST FOR I =            4  J=           2
                            LOC2(store, 20,  4, STOREDIM, STOREDIM) = x_20_4_0;
                            LOC2(store, 20,  5, STOREDIM, STOREDIM) = x_20_5_0;
                            LOC2(store, 20,  6, STOREDIM, STOREDIM) = x_20_6_0;
                            LOC2(store, 20,  7, STOREDIM, STOREDIM) = x_20_7_0;
                            LOC2(store, 20,  8, STOREDIM, STOREDIM) = x_20_8_0;
                            LOC2(store, 20,  9, STOREDIM, STOREDIM) = x_20_9_0;
                            LOC2(store, 21,  4, STOREDIM, STOREDIM) = x_21_4_0;
                            LOC2(store, 21,  5, STOREDIM, STOREDIM) = x_21_5_0;
                            LOC2(store, 21,  6, STOREDIM, STOREDIM) = x_21_6_0;
                            LOC2(store, 21,  7, STOREDIM, STOREDIM) = x_21_7_0;
                            LOC2(store, 21,  8, STOREDIM, STOREDIM) = x_21_8_0;
                            LOC2(store, 21,  9, STOREDIM, STOREDIM) = x_21_9_0;
                            LOC2(store, 22,  4, STOREDIM, STOREDIM) = x_22_4_0;
                            LOC2(store, 22,  5, STOREDIM, STOREDIM) = x_22_5_0;
                            LOC2(store, 22,  6, STOREDIM, STOREDIM) = x_22_6_0;
                            LOC2(store, 22,  7, STOREDIM, STOREDIM) = x_22_7_0;
                            LOC2(store, 22,  8, STOREDIM, STOREDIM) = x_22_8_0;
                            LOC2(store, 22,  9, STOREDIM, STOREDIM) = x_22_9_0;
                            LOC2(store, 23,  4, STOREDIM, STOREDIM) = x_23_4_0;
                            LOC2(store, 23,  5, STOREDIM, STOREDIM) = x_23_5_0;
                            LOC2(store, 23,  6, STOREDIM, STOREDIM) = x_23_6_0;
                            LOC2(store, 23,  7, STOREDIM, STOREDIM) = x_23_7_0;
                            LOC2(store, 23,  8, STOREDIM, STOREDIM) = x_23_8_0;
                            LOC2(store, 23,  9, STOREDIM, STOREDIM) = x_23_9_0;
                            LOC2(store, 24,  4, STOREDIM, STOREDIM) = x_24_4_0;
                            LOC2(store, 24,  5, STOREDIM, STOREDIM) = x_24_5_0;
                            LOC2(store, 24,  6, STOREDIM, STOREDIM) = x_24_6_0;
                            LOC2(store, 24,  7, STOREDIM, STOREDIM) = x_24_7_0;
                            LOC2(store, 24,  8, STOREDIM, STOREDIM) = x_24_8_0;
                            LOC2(store, 24,  9, STOREDIM, STOREDIM) = x_24_9_0;
                            LOC2(store, 25,  4, STOREDIM, STOREDIM) = x_25_4_0;
                            LOC2(store, 25,  5, STOREDIM, STOREDIM) = x_25_5_0;
                            LOC2(store, 25,  6, STOREDIM, STOREDIM) = x_25_6_0;
                            LOC2(store, 25,  7, STOREDIM, STOREDIM) = x_25_7_0;
                            LOC2(store, 25,  8, STOREDIM, STOREDIM) = x_25_8_0;
                            LOC2(store, 25,  9, STOREDIM, STOREDIM) = x_25_9_0;
                            LOC2(store, 26,  4, STOREDIM, STOREDIM) = x_26_4_0;
                            LOC2(store, 26,  5, STOREDIM, STOREDIM) = x_26_5_0;
                            LOC2(store, 26,  6, STOREDIM, STOREDIM) = x_26_6_0;
                            LOC2(store, 26,  7, STOREDIM, STOREDIM) = x_26_7_0;
                            LOC2(store, 26,  8, STOREDIM, STOREDIM) = x_26_8_0;
                            LOC2(store, 26,  9, STOREDIM, STOREDIM) = x_26_9_0;
                            LOC2(store, 27,  4, STOREDIM, STOREDIM) = x_27_4_0;
                            LOC2(store, 27,  5, STOREDIM, STOREDIM) = x_27_5_0;
                            LOC2(store, 27,  6, STOREDIM, STOREDIM) = x_27_6_0;
                            LOC2(store, 27,  7, STOREDIM, STOREDIM) = x_27_7_0;
                            LOC2(store, 27,  8, STOREDIM, STOREDIM) = x_27_8_0;
                            LOC2(store, 27,  9, STOREDIM, STOREDIM) = x_27_9_0;
                            LOC2(store, 28,  4, STOREDIM, STOREDIM) = x_28_4_0;
                            LOC2(store, 28,  5, STOREDIM, STOREDIM) = x_28_5_0;
                            LOC2(store, 28,  6, STOREDIM, STOREDIM) = x_28_6_0;
                            LOC2(store, 28,  7, STOREDIM, STOREDIM) = x_28_7_0;
                            LOC2(store, 28,  8, STOREDIM, STOREDIM) = x_28_8_0;
                            LOC2(store, 28,  9, STOREDIM, STOREDIM) = x_28_9_0;
                            LOC2(store, 29,  4, STOREDIM, STOREDIM) = x_29_4_0;
                            LOC2(store, 29,  5, STOREDIM, STOREDIM) = x_29_5_0;
                            LOC2(store, 29,  6, STOREDIM, STOREDIM) = x_29_6_0;
                            LOC2(store, 29,  7, STOREDIM, STOREDIM) = x_29_7_0;
                            LOC2(store, 29,  8, STOREDIM, STOREDIM) = x_29_8_0;
                            LOC2(store, 29,  9, STOREDIM, STOREDIM) = x_29_9_0;
                            LOC2(store, 30,  4, STOREDIM, STOREDIM) = x_30_4_0;
                            LOC2(store, 30,  5, STOREDIM, STOREDIM) = x_30_5_0;
                            LOC2(store, 30,  6, STOREDIM, STOREDIM) = x_30_6_0;
                            LOC2(store, 30,  7, STOREDIM, STOREDIM) = x_30_7_0;
                            LOC2(store, 30,  8, STOREDIM, STOREDIM) = x_30_8_0;
                            LOC2(store, 30,  9, STOREDIM, STOREDIM) = x_30_9_0;
                            LOC2(store, 31,  4, STOREDIM, STOREDIM) = x_31_4_0;
                            LOC2(store, 31,  5, STOREDIM, STOREDIM) = x_31_5_0;
                            LOC2(store, 31,  6, STOREDIM, STOREDIM) = x_31_6_0;
                            LOC2(store, 31,  7, STOREDIM, STOREDIM) = x_31_7_0;
                            LOC2(store, 31,  8, STOREDIM, STOREDIM) = x_31_8_0;
                            LOC2(store, 31,  9, STOREDIM, STOREDIM) = x_31_9_0;
                            LOC2(store, 32,  4, STOREDIM, STOREDIM) = x_32_4_0;
                            LOC2(store, 32,  5, STOREDIM, STOREDIM) = x_32_5_0;
                            LOC2(store, 32,  6, STOREDIM, STOREDIM) = x_32_6_0;
                            LOC2(store, 32,  7, STOREDIM, STOREDIM) = x_32_7_0;
                            LOC2(store, 32,  8, STOREDIM, STOREDIM) = x_32_8_0;
                            LOC2(store, 32,  9, STOREDIM, STOREDIM) = x_32_9_0;
                            LOC2(store, 33,  4, STOREDIM, STOREDIM) = x_33_4_0;
                            LOC2(store, 33,  5, STOREDIM, STOREDIM) = x_33_5_0;
                            LOC2(store, 33,  6, STOREDIM, STOREDIM) = x_33_6_0;
                            LOC2(store, 33,  7, STOREDIM, STOREDIM) = x_33_7_0;
                            LOC2(store, 33,  8, STOREDIM, STOREDIM) = x_33_8_0;
                            LOC2(store, 33,  9, STOREDIM, STOREDIM) = x_33_9_0;
                            LOC2(store, 34,  4, STOREDIM, STOREDIM) = x_34_4_0;
                            LOC2(store, 34,  5, STOREDIM, STOREDIM) = x_34_5_0;
                            LOC2(store, 34,  6, STOREDIM, STOREDIM) = x_34_6_0;
                            LOC2(store, 34,  7, STOREDIM, STOREDIM) = x_34_7_0;
                            LOC2(store, 34,  8, STOREDIM, STOREDIM) = x_34_8_0;
                            LOC2(store, 34,  9, STOREDIM, STOREDIM) = x_34_9_0;
                        }
                    }
                }
                if ((I+J) >=  3 && (K+L)>= 1) {
                    // Subroutine for L =            1  B =            0 , m=           3
                    QUICKDouble x_1_0_3 = Ptempx * VY( 0, 0, 3) + WPtempx * VY( 0, 0, 4);
                    QUICKDouble x_2_0_3 = Ptempy * VY( 0, 0, 3) + WPtempy * VY( 0, 0, 4);
                    QUICKDouble x_3_0_3 = Ptempz * VY( 0, 0, 3) + WPtempz * VY( 0, 0, 4);
                    // Subroutine for L =            2  B =            0 , m=           2
                    QUICKDouble x_4_0_2 = Ptempx * x_2_0_2 + WPtempx * x_2_0_3;
                    QUICKDouble x_5_0_2 = Ptempy * x_3_0_2 + WPtempy * x_3_0_3;
                    QUICKDouble x_6_0_2 = Ptempx * x_3_0_2 + WPtempx * x_3_0_3;
                    QUICKDouble x_7_0_2 = Ptempx * x_1_0_2 + WPtempx * x_1_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                    QUICKDouble x_8_0_2 = Ptempy * x_2_0_2 + WPtempy * x_2_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                    QUICKDouble x_9_0_2 = Ptempz * x_3_0_2 + WPtempz * x_3_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                    // Subroutine for L =            3  B =            0 , m=           0
                    QUICKDouble x_10_0_0 = Ptempx * x_5_0_0 + WPtempx * x_5_0_1;
                    QUICKDouble x_11_0_0 = Ptempx * x_4_0_0 + WPtempx * x_4_0_1 + ABtemp * (x_2_0_0 -  CDcom * x_2_0_1);
                    QUICKDouble x_12_0_0 = Ptempx * x_8_0_0 + WPtempx * x_8_0_1;
                    QUICKDouble x_13_0_0 = Ptempx * x_6_0_0 + WPtempx * x_6_0_1 + ABtemp * (x_3_0_0 -  CDcom * x_3_0_1);
                    QUICKDouble x_14_0_0 = Ptempx * x_9_0_0 + WPtempx * x_9_0_1;
                    QUICKDouble x_15_0_0 = Ptempy * x_5_0_0 + WPtempy * x_5_0_1 + ABtemp * (x_3_0_0 -  CDcom * x_3_0_1);
                    QUICKDouble x_16_0_0 = Ptempy * x_9_0_0 + WPtempy * x_9_0_1;
                    QUICKDouble x_17_0_0 = Ptempx * x_7_0_0 + WPtempx * x_7_0_1 + ABtemp * 2 * (x_1_0_0 -  CDcom * x_1_0_1);
                    QUICKDouble x_18_0_0 = Ptempy * x_8_0_0 + WPtempy * x_8_0_1 + ABtemp * 2 * (x_2_0_0 -  CDcom * x_2_0_1);
                    QUICKDouble x_19_0_0 = Ptempz * x_9_0_0 + WPtempz * x_9_0_1 + ABtemp * 2 * (x_3_0_0 -  CDcom * x_3_0_1);
                    // Subroutine for L =            3  B =            0 , m=           1
                    QUICKDouble x_10_0_1 = Ptempx * x_5_0_1 + WPtempx * x_5_0_2;
                    QUICKDouble x_11_0_1 = Ptempx * x_4_0_1 + WPtempx * x_4_0_2 + ABtemp * (x_2_0_1 -  CDcom * x_2_0_2);
                    QUICKDouble x_12_0_1 = Ptempx * x_8_0_1 + WPtempx * x_8_0_2;
                    QUICKDouble x_13_0_1 = Ptempx * x_6_0_1 + WPtempx * x_6_0_2 + ABtemp * (x_3_0_1 -  CDcom * x_3_0_2);
                    QUICKDouble x_14_0_1 = Ptempx * x_9_0_1 + WPtempx * x_9_0_2;
                    QUICKDouble x_15_0_1 = Ptempy * x_5_0_1 + WPtempy * x_5_0_2 + ABtemp * (x_3_0_1 -  CDcom * x_3_0_2);
                    QUICKDouble x_16_0_1 = Ptempy * x_9_0_1 + WPtempy * x_9_0_2;
                    QUICKDouble x_17_0_1 = Ptempx * x_7_0_1 + WPtempx * x_7_0_2 + ABtemp * 2 * (x_1_0_1 -  CDcom * x_1_0_2);
                    QUICKDouble x_18_0_1 = Ptempy * x_8_0_1 + WPtempy * x_8_0_2 + ABtemp * 2 * (x_2_0_1 -  CDcom * x_2_0_2);
                    QUICKDouble x_19_0_1 = Ptempz * x_9_0_1 + WPtempz * x_9_0_2 + ABtemp * 2 * (x_3_0_1 -  CDcom * x_3_0_2);
                    // Subroutine for B =            3  L =            1 , m=           0
                    QUICKDouble x_10_1_0 = Qtempx * x_10_0_0 + WQtempx * x_10_0_1 + ABCDtemp * x_5_0_1;
                    QUICKDouble x_11_1_0 = Qtempx * x_11_0_0 + WQtempx * x_11_0_1 + 2 * ABCDtemp * x_4_0_1;
                    QUICKDouble x_12_1_0 = Qtempx * x_12_0_0 + WQtempx * x_12_0_1 + ABCDtemp * x_8_0_1;
                    QUICKDouble x_13_1_0 = Qtempx * x_13_0_0 + WQtempx * x_13_0_1 + 2 * ABCDtemp * x_6_0_1;
                    QUICKDouble x_14_1_0 = Qtempx * x_14_0_0 + WQtempx * x_14_0_1 + ABCDtemp * x_9_0_1;
                    QUICKDouble x_15_1_0 = Qtempx * x_15_0_0 + WQtempx * x_15_0_1;
                    QUICKDouble x_16_1_0 = Qtempx * x_16_0_0 + WQtempx * x_16_0_1;
                    QUICKDouble x_17_1_0 = Qtempx * x_17_0_0 + WQtempx * x_17_0_1 + 3 * ABCDtemp * x_7_0_1;
                    QUICKDouble x_18_1_0 = Qtempx * x_18_0_0 + WQtempx * x_18_0_1;
                    QUICKDouble x_19_1_0 = Qtempx * x_19_0_0 + WQtempx * x_19_0_1;
                    QUICKDouble x_10_2_0 = Qtempy * x_10_0_0 + WQtempy * x_10_0_1 + ABCDtemp * x_6_0_1;
                    QUICKDouble x_11_2_0 = Qtempy * x_11_0_0 + WQtempy * x_11_0_1 + ABCDtemp * x_7_0_1;
                    QUICKDouble x_12_2_0 = Qtempy * x_12_0_0 + WQtempy * x_12_0_1 + 2 * ABCDtemp * x_4_0_1;
                    QUICKDouble x_13_2_0 = Qtempy * x_13_0_0 + WQtempy * x_13_0_1;
                    QUICKDouble x_14_2_0 = Qtempy * x_14_0_0 + WQtempy * x_14_0_1;
                    QUICKDouble x_15_2_0 = Qtempy * x_15_0_0 + WQtempy * x_15_0_1 + 2 * ABCDtemp * x_5_0_1;
                    QUICKDouble x_16_2_0 = Qtempy * x_16_0_0 + WQtempy * x_16_0_1 + ABCDtemp * x_9_0_1;
                    QUICKDouble x_17_2_0 = Qtempy * x_17_0_0 + WQtempy * x_17_0_1;
                    QUICKDouble x_18_2_0 = Qtempy * x_18_0_0 + WQtempy * x_18_0_1 + 3 * ABCDtemp * x_8_0_1;
                    QUICKDouble x_19_2_0 = Qtempy * x_19_0_0 + WQtempy * x_19_0_1;
                    QUICKDouble x_10_3_0 = Qtempz * x_10_0_0 + WQtempz * x_10_0_1 + ABCDtemp * x_4_0_1;
                    QUICKDouble x_11_3_0 = Qtempz * x_11_0_0 + WQtempz * x_11_0_1;
                    QUICKDouble x_12_3_0 = Qtempz * x_12_0_0 + WQtempz * x_12_0_1;
                    QUICKDouble x_13_3_0 = Qtempz * x_13_0_0 + WQtempz * x_13_0_1 + ABCDtemp * x_7_0_1;
                    QUICKDouble x_14_3_0 = Qtempz * x_14_0_0 + WQtempz * x_14_0_1 + 2 * ABCDtemp * x_6_0_1;
                    QUICKDouble x_15_3_0 = Qtempz * x_15_0_0 + WQtempz * x_15_0_1 + ABCDtemp * x_8_0_1;
                    QUICKDouble x_16_3_0 = Qtempz * x_16_0_0 + WQtempz * x_16_0_1 + 2 * ABCDtemp * x_5_0_1;
                    QUICKDouble x_17_3_0 = Qtempz * x_17_0_0 + WQtempz * x_17_0_1;
                    QUICKDouble x_18_3_0 = Qtempz * x_18_0_0 + WQtempz * x_18_0_1;
                    QUICKDouble x_19_3_0 = Qtempz * x_19_0_0 + WQtempz * x_19_0_1 + 3 * ABCDtemp * x_9_0_1;
                    
                    // WRITE LAST FOR I =            3  J=           1
                    LOC2(store, 10,  1, STOREDIM, STOREDIM) = x_10_1_0;
                    LOC2(store, 10,  2, STOREDIM, STOREDIM) = x_10_2_0;
                    LOC2(store, 10,  3, STOREDIM, STOREDIM) = x_10_3_0;
                    LOC2(store, 11,  1, STOREDIM, STOREDIM) = x_11_1_0;
                    LOC2(store, 11,  2, STOREDIM, STOREDIM) = x_11_2_0;
                    LOC2(store, 11,  3, STOREDIM, STOREDIM) = x_11_3_0;
                    LOC2(store, 12,  1, STOREDIM, STOREDIM) = x_12_1_0;
                    LOC2(store, 12,  2, STOREDIM, STOREDIM) = x_12_2_0;
                    LOC2(store, 12,  3, STOREDIM, STOREDIM) = x_12_3_0;
                    LOC2(store, 13,  1, STOREDIM, STOREDIM) = x_13_1_0;
                    LOC2(store, 13,  2, STOREDIM, STOREDIM) = x_13_2_0;
                    LOC2(store, 13,  3, STOREDIM, STOREDIM) = x_13_3_0;
                    LOC2(store, 14,  1, STOREDIM, STOREDIM) = x_14_1_0;
                    LOC2(store, 14,  2, STOREDIM, STOREDIM) = x_14_2_0;
                    LOC2(store, 14,  3, STOREDIM, STOREDIM) = x_14_3_0;
                    LOC2(store, 15,  1, STOREDIM, STOREDIM) = x_15_1_0;
                    LOC2(store, 15,  2, STOREDIM, STOREDIM) = x_15_2_0;
                    LOC2(store, 15,  3, STOREDIM, STOREDIM) = x_15_3_0;
                    LOC2(store, 16,  1, STOREDIM, STOREDIM) = x_16_1_0;
                    LOC2(store, 16,  2, STOREDIM, STOREDIM) = x_16_2_0;
                    LOC2(store, 16,  3, STOREDIM, STOREDIM) = x_16_3_0;
                    LOC2(store, 17,  1, STOREDIM, STOREDIM) = x_17_1_0;
                    LOC2(store, 17,  2, STOREDIM, STOREDIM) = x_17_2_0;
                    LOC2(store, 17,  3, STOREDIM, STOREDIM) = x_17_3_0;
                    LOC2(store, 18,  1, STOREDIM, STOREDIM) = x_18_1_0;
                    LOC2(store, 18,  2, STOREDIM, STOREDIM) = x_18_2_0;
                    LOC2(store, 18,  3, STOREDIM, STOREDIM) = x_18_3_0;
                    LOC2(store, 19,  1, STOREDIM, STOREDIM) = x_19_1_0;
                    LOC2(store, 19,  2, STOREDIM, STOREDIM) = x_19_2_0;
                    LOC2(store, 19,  3, STOREDIM, STOREDIM) = x_19_3_0;
                    if ((I+J) >=  4 && (K+L)>= 1) {
                        // Subroutine for L =            1  B =            0 , m=           4
                        QUICKDouble x_1_0_4 = Ptempx * VY( 0, 0, 4) + WPtempx * VY( 0, 0, 5);
                        QUICKDouble x_2_0_4 = Ptempy * VY( 0, 0, 4) + WPtempy * VY( 0, 0, 5);
                        QUICKDouble x_3_0_4 = Ptempz * VY( 0, 0, 4) + WPtempz * VY( 0, 0, 5);
                        // Subroutine for L =            2  B =            0 , m=           3
                        QUICKDouble x_4_0_3 = Ptempx * x_2_0_3 + WPtempx * x_2_0_4;
                        QUICKDouble x_5_0_3 = Ptempy * x_3_0_3 + WPtempy * x_3_0_4;
                        QUICKDouble x_6_0_3 = Ptempx * x_3_0_3 + WPtempx * x_3_0_4;
                        QUICKDouble x_7_0_3 = Ptempx * x_1_0_3 + WPtempx * x_1_0_4 + ABtemp * (VY( 0, 0, 3) -  CDcom * VY( 0, 0, 4));
                        QUICKDouble x_8_0_3 = Ptempy * x_2_0_3 + WPtempy * x_2_0_4 + ABtemp * (VY( 0, 0, 3) -  CDcom * VY( 0, 0, 4));
                        QUICKDouble x_9_0_3 = Ptempz * x_3_0_3 + WPtempz * x_3_0_4 + ABtemp * (VY( 0, 0, 3) -  CDcom * VY( 0, 0, 4));
                        // Subroutine for L =            3  B =            0 , m=           2
                        QUICKDouble x_10_0_2 = Ptempx * x_5_0_2 + WPtempx * x_5_0_3;
                        QUICKDouble x_11_0_2 = Ptempx * x_4_0_2 + WPtempx * x_4_0_3 + ABtemp * (x_2_0_2 -  CDcom * x_2_0_3);
                        QUICKDouble x_12_0_2 = Ptempx * x_8_0_2 + WPtempx * x_8_0_3;
                        QUICKDouble x_13_0_2 = Ptempx * x_6_0_2 + WPtempx * x_6_0_3 + ABtemp * (x_3_0_2 -  CDcom * x_3_0_3);
                        QUICKDouble x_14_0_2 = Ptempx * x_9_0_2 + WPtempx * x_9_0_3;
                        QUICKDouble x_15_0_2 = Ptempy * x_5_0_2 + WPtempy * x_5_0_3 + ABtemp * (x_3_0_2 -  CDcom * x_3_0_3);
                        QUICKDouble x_16_0_2 = Ptempy * x_9_0_2 + WPtempy * x_9_0_3;
                        QUICKDouble x_17_0_2 = Ptempx * x_7_0_2 + WPtempx * x_7_0_3 + ABtemp * 2 * (x_1_0_2 -  CDcom * x_1_0_3);
                        QUICKDouble x_18_0_2 = Ptempy * x_8_0_2 + WPtempy * x_8_0_3 + ABtemp * 2 * (x_2_0_2 -  CDcom * x_2_0_3);
                        QUICKDouble x_19_0_2 = Ptempz * x_9_0_2 + WPtempz * x_9_0_3 + ABtemp * 2 * (x_3_0_2 -  CDcom * x_3_0_3);
                        // Subroutine for L =            4  B =            0 , m=           0
                        QUICKDouble x_20_0_0 = Ptempx * x_12_0_0 + WPtempx * x_12_0_1 + ABtemp * (x_8_0_0 -  CDcom * x_8_0_1);
                        QUICKDouble x_21_0_0 = Ptempx * x_14_0_0 + WPtempx * x_14_0_1 + ABtemp * (x_9_0_0 -  CDcom * x_9_0_1);
                        QUICKDouble x_22_0_0 = Ptempy * x_16_0_0 + WPtempy * x_16_0_1 + ABtemp * (x_9_0_0 -  CDcom * x_9_0_1);
                        QUICKDouble x_23_0_0 = Ptempx * x_10_0_0 + WPtempx * x_10_0_1 + ABtemp * (x_5_0_0 -  CDcom * x_5_0_1);
                        QUICKDouble x_24_0_0 = Ptempx * x_15_0_0 + WPtempx * x_15_0_1;
                        QUICKDouble x_25_0_0 = Ptempx * x_16_0_0 + WPtempx * x_16_0_1;
                        QUICKDouble x_26_0_0 = Ptempx * x_13_0_0 + WPtempx * x_13_0_1 + ABtemp * 2 * (x_6_0_0 -  CDcom * x_6_0_1);
                        QUICKDouble x_27_0_0 = Ptempx * x_19_0_0 + WPtempx * x_19_0_1;
                        QUICKDouble x_28_0_0 = Ptempx * x_11_0_0 + WPtempx * x_11_0_1 + ABtemp * 2 * (x_4_0_0 -  CDcom * x_4_0_1);
                        QUICKDouble x_29_0_0 = Ptempx * x_18_0_0 + WPtempx * x_18_0_1;
                        QUICKDouble x_30_0_0 = Ptempy * x_15_0_0 + WPtempy * x_15_0_1 + ABtemp * 2 * (x_5_0_0 -  CDcom * x_5_0_1);
                        QUICKDouble x_31_0_0 = Ptempy * x_19_0_0 + WPtempy * x_19_0_1;
                        QUICKDouble x_32_0_0 = Ptempx * x_17_0_0 + WPtempx * x_17_0_1 + ABtemp * 3 * (x_7_0_0 -  CDcom * x_7_0_1);
                        QUICKDouble x_33_0_0 = Ptempy * x_18_0_0 + WPtempy * x_18_0_1 + ABtemp * 3 * (x_8_0_0 -  CDcom * x_8_0_1);
                        QUICKDouble x_34_0_0 = Ptempz * x_19_0_0 + WPtempz * x_19_0_1 + ABtemp * 3 * (x_9_0_0 -  CDcom * x_9_0_1);
                        // Subroutine for L =            4  B =            0 , m=           1
                        QUICKDouble x_20_0_1 = Ptempx * x_12_0_1 + WPtempx * x_12_0_2 + ABtemp * (x_8_0_1 -  CDcom * x_8_0_2);
                        QUICKDouble x_21_0_1 = Ptempx * x_14_0_1 + WPtempx * x_14_0_2 + ABtemp * (x_9_0_1 -  CDcom * x_9_0_2);
                        QUICKDouble x_22_0_1 = Ptempy * x_16_0_1 + WPtempy * x_16_0_2 + ABtemp * (x_9_0_1 -  CDcom * x_9_0_2);
                        QUICKDouble x_23_0_1 = Ptempx * x_10_0_1 + WPtempx * x_10_0_2 + ABtemp * (x_5_0_1 -  CDcom * x_5_0_2);
                        QUICKDouble x_24_0_1 = Ptempx * x_15_0_1 + WPtempx * x_15_0_2;
                        QUICKDouble x_25_0_1 = Ptempx * x_16_0_1 + WPtempx * x_16_0_2;
                        QUICKDouble x_26_0_1 = Ptempx * x_13_0_1 + WPtempx * x_13_0_2 + ABtemp * 2 * (x_6_0_1 -  CDcom * x_6_0_2);
                        QUICKDouble x_27_0_1 = Ptempx * x_19_0_1 + WPtempx * x_19_0_2;
                        QUICKDouble x_28_0_1 = Ptempx * x_11_0_1 + WPtempx * x_11_0_2 + ABtemp * 2 * (x_4_0_1 -  CDcom * x_4_0_2);
                        QUICKDouble x_29_0_1 = Ptempx * x_18_0_1 + WPtempx * x_18_0_2;
                        QUICKDouble x_30_0_1 = Ptempy * x_15_0_1 + WPtempy * x_15_0_2 + ABtemp * 2 * (x_5_0_1 -  CDcom * x_5_0_2);
                        QUICKDouble x_31_0_1 = Ptempy * x_19_0_1 + WPtempy * x_19_0_2;
                        QUICKDouble x_32_0_1 = Ptempx * x_17_0_1 + WPtempx * x_17_0_2 + ABtemp * 3 * (x_7_0_1 -  CDcom * x_7_0_2);
                        QUICKDouble x_33_0_1 = Ptempy * x_18_0_1 + WPtempy * x_18_0_2 + ABtemp * 3 * (x_8_0_1 -  CDcom * x_8_0_2);
                        QUICKDouble x_34_0_1 = Ptempz * x_19_0_1 + WPtempz * x_19_0_2 + ABtemp * 3 * (x_9_0_1 -  CDcom * x_9_0_2);
                        // Subroutine for B =            4  L =            1 , m=           0
                        QUICKDouble x_20_1_0 = Qtempx * x_20_0_0 + WQtempx * x_20_0_1 + 2 * ABCDtemp * x_12_0_1;
                        QUICKDouble x_21_1_0 = Qtempx * x_21_0_0 + WQtempx * x_21_0_1 + 2 * ABCDtemp * x_14_0_1;
                        QUICKDouble x_22_1_0 = Qtempx * x_22_0_0 + WQtempx * x_22_0_1;
                        QUICKDouble x_23_1_0 = Qtempx * x_23_0_0 + WQtempx * x_23_0_1 + 2 * ABCDtemp * x_10_0_1;
                        QUICKDouble x_24_1_0 = Qtempx * x_24_0_0 + WQtempx * x_24_0_1 + ABCDtemp * x_15_0_1;
                        QUICKDouble x_25_1_0 = Qtempx * x_25_0_0 + WQtempx * x_25_0_1 + ABCDtemp * x_16_0_1;
                        QUICKDouble x_26_1_0 = Qtempx * x_26_0_0 + WQtempx * x_26_0_1 + 3 * ABCDtemp * x_13_0_1;
                        QUICKDouble x_27_1_0 = Qtempx * x_27_0_0 + WQtempx * x_27_0_1 + ABCDtemp * x_19_0_1;
                        QUICKDouble x_28_1_0 = Qtempx * x_28_0_0 + WQtempx * x_28_0_1 + 3 * ABCDtemp * x_11_0_1;
                        QUICKDouble x_29_1_0 = Qtempx * x_29_0_0 + WQtempx * x_29_0_1 + ABCDtemp * x_18_0_1;
                        QUICKDouble x_30_1_0 = Qtempx * x_30_0_0 + WQtempx * x_30_0_1;
                        QUICKDouble x_31_1_0 = Qtempx * x_31_0_0 + WQtempx * x_31_0_1;
                        QUICKDouble x_32_1_0 = Qtempx * x_32_0_0 + WQtempx * x_32_0_1 + 4 * ABCDtemp * x_17_0_1;
                        QUICKDouble x_33_1_0 = Qtempx * x_33_0_0 + WQtempx * x_33_0_1;
                        QUICKDouble x_34_1_0 = Qtempx * x_34_0_0 + WQtempx * x_34_0_1;
                        QUICKDouble x_20_2_0 = Qtempy * x_20_0_0 + WQtempy * x_20_0_1 + 2 * ABCDtemp * x_11_0_1;
                        QUICKDouble x_21_2_0 = Qtempy * x_21_0_0 + WQtempy * x_21_0_1;
                        QUICKDouble x_22_2_0 = Qtempy * x_22_0_0 + WQtempy * x_22_0_1 + 2 * ABCDtemp * x_16_0_1;
                        QUICKDouble x_23_2_0 = Qtempy * x_23_0_0 + WQtempy * x_23_0_1 + ABCDtemp * x_13_0_1;
                        QUICKDouble x_24_2_0 = Qtempy * x_24_0_0 + WQtempy * x_24_0_1 + 2 * ABCDtemp * x_10_0_1;
                        QUICKDouble x_25_2_0 = Qtempy * x_25_0_0 + WQtempy * x_25_0_1 + ABCDtemp * x_14_0_1;
                        QUICKDouble x_26_2_0 = Qtempy * x_26_0_0 + WQtempy * x_26_0_1;
                        QUICKDouble x_27_2_0 = Qtempy * x_27_0_0 + WQtempy * x_27_0_1;
                        QUICKDouble x_28_2_0 = Qtempy * x_28_0_0 + WQtempy * x_28_0_1 + ABCDtemp * x_17_0_1;
                        QUICKDouble x_29_2_0 = Qtempy * x_29_0_0 + WQtempy * x_29_0_1 + 3 * ABCDtemp * x_12_0_1;
                        QUICKDouble x_30_2_0 = Qtempy * x_30_0_0 + WQtempy * x_30_0_1 + 3 * ABCDtemp * x_15_0_1;
                        QUICKDouble x_31_2_0 = Qtempy * x_31_0_0 + WQtempy * x_31_0_1 + ABCDtemp * x_19_0_1;
                        QUICKDouble x_32_2_0 = Qtempy * x_32_0_0 + WQtempy * x_32_0_1;
                        QUICKDouble x_33_2_0 = Qtempy * x_33_0_0 + WQtempy * x_33_0_1 + 4 * ABCDtemp * x_18_0_1;
                        QUICKDouble x_34_2_0 = Qtempy * x_34_0_0 + WQtempy * x_34_0_1;
                        QUICKDouble x_20_3_0 = Qtempz * x_20_0_0 + WQtempz * x_20_0_1;
                        QUICKDouble x_21_3_0 = Qtempz * x_21_0_0 + WQtempz * x_21_0_1 + 2 * ABCDtemp * x_13_0_1;
                        QUICKDouble x_22_3_0 = Qtempz * x_22_0_0 + WQtempz * x_22_0_1 + 2 * ABCDtemp * x_15_0_1;
                        QUICKDouble x_23_3_0 = Qtempz * x_23_0_0 + WQtempz * x_23_0_1 + ABCDtemp * x_11_0_1;
                        QUICKDouble x_24_3_0 = Qtempz * x_24_0_0 + WQtempz * x_24_0_1 + ABCDtemp * x_12_0_1;
                        QUICKDouble x_25_3_0 = Qtempz * x_25_0_0 + WQtempz * x_25_0_1 + 2 * ABCDtemp * x_10_0_1;
                        QUICKDouble x_26_3_0 = Qtempz * x_26_0_0 + WQtempz * x_26_0_1 + ABCDtemp * x_17_0_1;
                        QUICKDouble x_27_3_0 = Qtempz * x_27_0_0 + WQtempz * x_27_0_1 + 3 * ABCDtemp * x_14_0_1;
                        QUICKDouble x_28_3_0 = Qtempz * x_28_0_0 + WQtempz * x_28_0_1;
                        QUICKDouble x_29_3_0 = Qtempz * x_29_0_0 + WQtempz * x_29_0_1;
                        QUICKDouble x_30_3_0 = Qtempz * x_30_0_0 + WQtempz * x_30_0_1 + ABCDtemp * x_18_0_1;
                        QUICKDouble x_31_3_0 = Qtempz * x_31_0_0 + WQtempz * x_31_0_1 + 3 * ABCDtemp * x_16_0_1;
                        QUICKDouble x_32_3_0 = Qtempz * x_32_0_0 + WQtempz * x_32_0_1;
                        QUICKDouble x_33_3_0 = Qtempz * x_33_0_0 + WQtempz * x_33_0_1;
                        QUICKDouble x_34_3_0 = Qtempz * x_34_0_0 + WQtempz * x_34_0_1 + 4 * ABCDtemp * x_19_0_1;
                        
                        // WRITE LAST FOR I =            4  J=           1
                        LOC2(store, 20,  1, STOREDIM, STOREDIM) = x_20_1_0;
                        LOC2(store, 20,  2, STOREDIM, STOREDIM) = x_20_2_0;
                        LOC2(store, 20,  3, STOREDIM, STOREDIM) = x_20_3_0;
                        LOC2(store, 21,  1, STOREDIM, STOREDIM) = x_21_1_0;
                        LOC2(store, 21,  2, STOREDIM, STOREDIM) = x_21_2_0;
                        LOC2(store, 21,  3, STOREDIM, STOREDIM) = x_21_3_0;
                        LOC2(store, 22,  1, STOREDIM, STOREDIM) = x_22_1_0;
                        LOC2(store, 22,  2, STOREDIM, STOREDIM) = x_22_2_0;
                        LOC2(store, 22,  3, STOREDIM, STOREDIM) = x_22_3_0;
                        LOC2(store, 23,  1, STOREDIM, STOREDIM) = x_23_1_0;
                        LOC2(store, 23,  2, STOREDIM, STOREDIM) = x_23_2_0;
                        LOC2(store, 23,  3, STOREDIM, STOREDIM) = x_23_3_0;
                        LOC2(store, 24,  1, STOREDIM, STOREDIM) = x_24_1_0;
                        LOC2(store, 24,  2, STOREDIM, STOREDIM) = x_24_2_0;
                        LOC2(store, 24,  3, STOREDIM, STOREDIM) = x_24_3_0;
                        LOC2(store, 25,  1, STOREDIM, STOREDIM) = x_25_1_0;
                        LOC2(store, 25,  2, STOREDIM, STOREDIM) = x_25_2_0;
                        LOC2(store, 25,  3, STOREDIM, STOREDIM) = x_25_3_0;
                        LOC2(store, 26,  1, STOREDIM, STOREDIM) = x_26_1_0;
                        LOC2(store, 26,  2, STOREDIM, STOREDIM) = x_26_2_0;
                        LOC2(store, 26,  3, STOREDIM, STOREDIM) = x_26_3_0;
                        LOC2(store, 27,  1, STOREDIM, STOREDIM) = x_27_1_0;
                        LOC2(store, 27,  2, STOREDIM, STOREDIM) = x_27_2_0;
                        LOC2(store, 27,  3, STOREDIM, STOREDIM) = x_27_3_0;
                        LOC2(store, 28,  1, STOREDIM, STOREDIM) = x_28_1_0;
                        LOC2(store, 28,  2, STOREDIM, STOREDIM) = x_28_2_0;
                        LOC2(store, 28,  3, STOREDIM, STOREDIM) = x_28_3_0;
                        LOC2(store, 29,  1, STOREDIM, STOREDIM) = x_29_1_0;
                        LOC2(store, 29,  2, STOREDIM, STOREDIM) = x_29_2_0;
                        LOC2(store, 29,  3, STOREDIM, STOREDIM) = x_29_3_0;
                        LOC2(store, 30,  1, STOREDIM, STOREDIM) = x_30_1_0;
                        LOC2(store, 30,  2, STOREDIM, STOREDIM) = x_30_2_0;
                        LOC2(store, 30,  3, STOREDIM, STOREDIM) = x_30_3_0;
                        LOC2(store, 31,  1, STOREDIM, STOREDIM) = x_31_1_0;
                        LOC2(store, 31,  2, STOREDIM, STOREDIM) = x_31_2_0;
                        LOC2(store, 31,  3, STOREDIM, STOREDIM) = x_31_3_0;
                        LOC2(store, 32,  1, STOREDIM, STOREDIM) = x_32_1_0;
                        LOC2(store, 32,  2, STOREDIM, STOREDIM) = x_32_2_0;
                        LOC2(store, 32,  3, STOREDIM, STOREDIM) = x_32_3_0;
                        LOC2(store, 33,  1, STOREDIM, STOREDIM) = x_33_1_0;
                        LOC2(store, 33,  2, STOREDIM, STOREDIM) = x_33_2_0;
                        LOC2(store, 33,  3, STOREDIM, STOREDIM) = x_33_3_0;
                        LOC2(store, 34,  1, STOREDIM, STOREDIM) = x_34_1_0;
                        LOC2(store, 34,  2, STOREDIM, STOREDIM) = x_34_2_0;
                        LOC2(store, 34,  3, STOREDIM, STOREDIM) = x_34_3_0;
                    }
                }
            }
        }
        if ((I+J) >=  2 && (K+L)>= 0) {
            // Subroutine for L =            1  B =            0 , m=           1
            QUICKDouble x_1_0_1 = Ptempx * VY( 0, 0, 1) + WPtempx * VY( 0, 0, 2);
            QUICKDouble x_2_0_1 = Ptempy * VY( 0, 0, 1) + WPtempy * VY( 0, 0, 2);
            QUICKDouble x_3_0_1 = Ptempz * VY( 0, 0, 1) + WPtempz * VY( 0, 0, 2);
            // Subroutine for L =            2  B =            0 , m=           0
            QUICKDouble x_4_0_0 = Ptempx * x_2_0_0 + WPtempx * x_2_0_1;
            QUICKDouble x_5_0_0 = Ptempy * x_3_0_0 + WPtempy * x_3_0_1;
            QUICKDouble x_6_0_0 = Ptempx * x_3_0_0 + WPtempx * x_3_0_1;
            QUICKDouble x_7_0_0 = Ptempx * x_1_0_0 + WPtempx * x_1_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
            QUICKDouble x_8_0_0 = Ptempy * x_2_0_0 + WPtempy * x_2_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
            QUICKDouble x_9_0_0 = Ptempz * x_3_0_0 + WPtempz * x_3_0_1 + ABtemp * (VY( 0, 0, 0) -  CDcom * VY( 0, 0, 1));
            // WRITE LAST FOR I =            2  J=           0
            LOC2(store,  4,  0, STOREDIM, STOREDIM) = x_4_0_0;
            LOC2(store,  5,  0, STOREDIM, STOREDIM) = x_5_0_0;
            LOC2(store,  6,  0, STOREDIM, STOREDIM) = x_6_0_0;
            LOC2(store,  7,  0, STOREDIM, STOREDIM) = x_7_0_0;
            LOC2(store,  8,  0, STOREDIM, STOREDIM) = x_8_0_0;
            LOC2(store,  9,  0, STOREDIM, STOREDIM) = x_9_0_0;
            if ((I+J) >=  3 && (K+L)>= 0) {
                // Subroutine for L =            1  B =            0 , m=           2
                QUICKDouble x_1_0_2 = Ptempx * VY( 0, 0, 2) + WPtempx * VY( 0, 0, 3);
                QUICKDouble x_2_0_2 = Ptempy * VY( 0, 0, 2) + WPtempy * VY( 0, 0, 3);
                QUICKDouble x_3_0_2 = Ptempz * VY( 0, 0, 2) + WPtempz * VY( 0, 0, 3);
                // Subroutine for L =            2  B =            0 , m=           1
                QUICKDouble x_4_0_1 = Ptempx * x_2_0_1 + WPtempx * x_2_0_2;
                QUICKDouble x_5_0_1 = Ptempy * x_3_0_1 + WPtempy * x_3_0_2;
                QUICKDouble x_6_0_1 = Ptempx * x_3_0_1 + WPtempx * x_3_0_2;
                QUICKDouble x_7_0_1 = Ptempx * x_1_0_1 + WPtempx * x_1_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                QUICKDouble x_8_0_1 = Ptempy * x_2_0_1 + WPtempy * x_2_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                QUICKDouble x_9_0_1 = Ptempz * x_3_0_1 + WPtempz * x_3_0_2 + ABtemp * (VY( 0, 0, 1) -  CDcom * VY( 0, 0, 2));
                // Subroutine for L =            3  B =            0 , m=           0
                QUICKDouble x_10_0_0 = Ptempx * x_5_0_0 + WPtempx * x_5_0_1;
                QUICKDouble x_11_0_0 = Ptempx * x_4_0_0 + WPtempx * x_4_0_1 + ABtemp * (x_2_0_0 -  CDcom * x_2_0_1);
                QUICKDouble x_12_0_0 = Ptempx * x_8_0_0 + WPtempx * x_8_0_1;
                QUICKDouble x_13_0_0 = Ptempx * x_6_0_0 + WPtempx * x_6_0_1 + ABtemp * (x_3_0_0 -  CDcom * x_3_0_1);
                QUICKDouble x_14_0_0 = Ptempx * x_9_0_0 + WPtempx * x_9_0_1;
                QUICKDouble x_15_0_0 = Ptempy * x_5_0_0 + WPtempy * x_5_0_1 + ABtemp * (x_3_0_0 -  CDcom * x_3_0_1);
                QUICKDouble x_16_0_0 = Ptempy * x_9_0_0 + WPtempy * x_9_0_1;
                QUICKDouble x_17_0_0 = Ptempx * x_7_0_0 + WPtempx * x_7_0_1 + ABtemp * 2 * (x_1_0_0 -  CDcom * x_1_0_1);
                QUICKDouble x_18_0_0 = Ptempy * x_8_0_0 + WPtempy * x_8_0_1 + ABtemp * 2 * (x_2_0_0 -  CDcom * x_2_0_1);
                QUICKDouble x_19_0_0 = Ptempz * x_9_0_0 + WPtempz * x_9_0_1 + ABtemp * 2 * (x_3_0_0 -  CDcom * x_3_0_1);
                // WRITE LAST FOR I =            3  J=           0
                LOC2(store, 10,  0, STOREDIM, STOREDIM) = x_10_0_0;
                LOC2(store, 11,  0, STOREDIM, STOREDIM) = x_11_0_0;
                LOC2(store, 12,  0, STOREDIM, STOREDIM) = x_12_0_0;
                LOC2(store, 13,  0, STOREDIM, STOREDIM) = x_13_0_0;
                LOC2(store, 14,  0, STOREDIM, STOREDIM) = x_14_0_0;
                LOC2(store, 15,  0, STOREDIM, STOREDIM) = x_15_0_0;
                LOC2(store, 16,  0, STOREDIM, STOREDIM) = x_16_0_0;
                LOC2(store, 17,  0, STOREDIM, STOREDIM) = x_17_0_0;
                LOC2(store, 18,  0, STOREDIM, STOREDIM) = x_18_0_0;
                LOC2(store, 19,  0, STOREDIM, STOREDIM) = x_19_0_0;
                if ((I+J) >=  4 && (K+L)>= 0) {
                    // Subroutine for L =            1  B =            0 , m=           3
                    QUICKDouble x_1_0_3 = Ptempx * VY( 0, 0, 3) + WPtempx * VY( 0, 0, 4);
                    QUICKDouble x_2_0_3 = Ptempy * VY( 0, 0, 3) + WPtempy * VY( 0, 0, 4);
                    QUICKDouble x_3_0_3 = Ptempz * VY( 0, 0, 3) + WPtempz * VY( 0, 0, 4);
                    // Subroutine for L =            2  B =            0 , m=           2
                    QUICKDouble x_4_0_2 = Ptempx * x_2_0_2 + WPtempx * x_2_0_3;
                    QUICKDouble x_5_0_2 = Ptempy * x_3_0_2 + WPtempy * x_3_0_3;
                    QUICKDouble x_6_0_2 = Ptempx * x_3_0_2 + WPtempx * x_3_0_3;
                    QUICKDouble x_7_0_2 = Ptempx * x_1_0_2 + WPtempx * x_1_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                    QUICKDouble x_8_0_2 = Ptempy * x_2_0_2 + WPtempy * x_2_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                    QUICKDouble x_9_0_2 = Ptempz * x_3_0_2 + WPtempz * x_3_0_3 + ABtemp * (VY( 0, 0, 2) -  CDcom * VY( 0, 0, 3));
                    // Subroutine for L =            3  B =            0 , m=           1
                    QUICKDouble x_10_0_1 = Ptempx * x_5_0_1 + WPtempx * x_5_0_2;
                    QUICKDouble x_11_0_1 = Ptempx * x_4_0_1 + WPtempx * x_4_0_2 + ABtemp * (x_2_0_1 -  CDcom * x_2_0_2);
                    QUICKDouble x_12_0_1 = Ptempx * x_8_0_1 + WPtempx * x_8_0_2;
                    QUICKDouble x_13_0_1 = Ptempx * x_6_0_1 + WPtempx * x_6_0_2 + ABtemp * (x_3_0_1 -  CDcom * x_3_0_2);
                    QUICKDouble x_14_0_1 = Ptempx * x_9_0_1 + WPtempx * x_9_0_2;
                    QUICKDouble x_15_0_1 = Ptempy * x_5_0_1 + WPtempy * x_5_0_2 + ABtemp * (x_3_0_1 -  CDcom * x_3_0_2);
                    QUICKDouble x_16_0_1 = Ptempy * x_9_0_1 + WPtempy * x_9_0_2;
                    QUICKDouble x_17_0_1 = Ptempx * x_7_0_1 + WPtempx * x_7_0_2 + ABtemp * 2 * (x_1_0_1 -  CDcom * x_1_0_2);
                    QUICKDouble x_18_0_1 = Ptempy * x_8_0_1 + WPtempy * x_8_0_2 + ABtemp * 2 * (x_2_0_1 -  CDcom * x_2_0_2);
                    QUICKDouble x_19_0_1 = Ptempz * x_9_0_1 + WPtempz * x_9_0_2 + ABtemp * 2 * (x_3_0_1 -  CDcom * x_3_0_2);
                    // Subroutine for L =            4  B =            0 , m=           0
                    QUICKDouble x_20_0_0 = Ptempx * x_12_0_0 + WPtempx * x_12_0_1 + ABtemp * (x_8_0_0 -  CDcom * x_8_0_1);
                    QUICKDouble x_21_0_0 = Ptempx * x_14_0_0 + WPtempx * x_14_0_1 + ABtemp * (x_9_0_0 -  CDcom * x_9_0_1);
                    QUICKDouble x_22_0_0 = Ptempy * x_16_0_0 + WPtempy * x_16_0_1 + ABtemp * (x_9_0_0 -  CDcom * x_9_0_1);
                    QUICKDouble x_23_0_0 = Ptempx * x_10_0_0 + WPtempx * x_10_0_1 + ABtemp * (x_5_0_0 -  CDcom * x_5_0_1);
                    QUICKDouble x_24_0_0 = Ptempx * x_15_0_0 + WPtempx * x_15_0_1;
                    QUICKDouble x_25_0_0 = Ptempx * x_16_0_0 + WPtempx * x_16_0_1;
                    QUICKDouble x_26_0_0 = Ptempx * x_13_0_0 + WPtempx * x_13_0_1 + ABtemp * 2 * (x_6_0_0 -  CDcom * x_6_0_1);
                    QUICKDouble x_27_0_0 = Ptempx * x_19_0_0 + WPtempx * x_19_0_1;
                    QUICKDouble x_28_0_0 = Ptempx * x_11_0_0 + WPtempx * x_11_0_1 + ABtemp * 2 * (x_4_0_0 -  CDcom * x_4_0_1);
                    QUICKDouble x_29_0_0 = Ptempx * x_18_0_0 + WPtempx * x_18_0_1;
                    QUICKDouble x_30_0_0 = Ptempy * x_15_0_0 + WPtempy * x_15_0_1 + ABtemp * 2 * (x_5_0_0 -  CDcom * x_5_0_1);
                    QUICKDouble x_31_0_0 = Ptempy * x_19_0_0 + WPtempy * x_19_0_1;
                    QUICKDouble x_32_0_0 = Ptempx * x_17_0_0 + WPtempx * x_17_0_1 + ABtemp * 3 * (x_7_0_0 -  CDcom * x_7_0_1);
                    QUICKDouble x_33_0_0 = Ptempy * x_18_0_0 + WPtempy * x_18_0_1 + ABtemp * 3 * (x_8_0_0 -  CDcom * x_8_0_1);
                    QUICKDouble x_34_0_0 = Ptempz * x_19_0_0 + WPtempz * x_19_0_1 + ABtemp * 3 * (x_9_0_0 -  CDcom * x_9_0_1);
                    // WRITE LAST FOR I =            4  J=           0
                    LOC2(store, 20,  0, STOREDIM, STOREDIM) = x_20_0_0;
                    LOC2(store, 21,  0, STOREDIM, STOREDIM) = x_21_0_0;
                    LOC2(store, 22,  0, STOREDIM, STOREDIM) = x_22_0_0;
                    LOC2(store, 23,  0, STOREDIM, STOREDIM) = x_23_0_0;
                    LOC2(store, 24,  0, STOREDIM, STOREDIM) = x_24_0_0;
                    LOC2(store, 25,  0, STOREDIM, STOREDIM) = x_25_0_0;
                    LOC2(store, 26,  0, STOREDIM, STOREDIM) = x_26_0_0;
                    LOC2(store, 27,  0, STOREDIM, STOREDIM) = x_27_0_0;
                    LOC2(store, 28,  0, STOREDIM, STOREDIM) = x_28_0_0;
                    LOC2(store, 29,  0, STOREDIM, STOREDIM) = x_29_0_0;
                    LOC2(store, 30,  0, STOREDIM, STOREDIM) = x_30_0_0;
                    LOC2(store, 31,  0, STOREDIM, STOREDIM) = x_31_0_0;
                    LOC2(store, 32,  0, STOREDIM, STOREDIM) = x_32_0_0;
                    LOC2(store, 33,  0, STOREDIM, STOREDIM) = x_33_0_0;
                    LOC2(store, 34,  0, STOREDIM, STOREDIM) = x_34_0_0;
                }
            }
        }
    }
}







__device__ void vertical2_spdf(int I, int J, int K, int L,
                              QUICKDouble* YVerticalTemp, QUICKDouble* store,
                              QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                              QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                              QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                              QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                              QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                              QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    
    if ((I+J) >=  0 && (K+L) >= 5) {
        h2_0_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  0 && (K+L) >= 6) {
    //    h2_0_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    if ((I+J) >=  1 && (K+L) >= 5) {
        h2_1_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  1 && (K+L) >= 6) {
    //    h2_1_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    if ((I+J) >=  2 && (K+L) >= 5) {
        h2_2_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  2 && (K+L) >= 6) {
    //    h2_2_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    if ((I+J) >=  3 && (K+L) >= 5) {
        h2_3_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  3 && (K+L) >= 6) {
   //     h2_3_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    
    if ((I+J) >=  4 && (K+L) >= 5) {
        h2_4_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }/*
      if ((I+J) >=  4 && (K+L) >= 6) {
      h_4_6(YVerticalTemp, store, \
      Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
      WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
      }*/
}






__device__ void vertical2_spdf2(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  5 && (K+L) >= 0) {
        h2_5_0(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  5 && (K+L) >= 1) {
        h2_5_1(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  5 && (K+L) >= 2) {
        h2_5_2(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  5 && (K+L) >= 3) {
        h2_5_3(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  5 && (K+L) >= 4) {
        h2_5_4(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }/*
    if ((I+J) >=  6 && (K+L) >= 0) {
        h2_6_0(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  6 && (K+L) >= 1) {
        h2_6_1(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  6 && (K+L) >= 2) {
        h2_6_2(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
    if ((I+J) >=  6 && (K+L) >= 3) {
        h2_6_3(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }*/
}






__device__ void vertical2_spdf3(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  5 && (K+L) >= 5) {
        h2_5_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}


__device__ void vertical2_spdf4(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  6 && (K+L) >= 5) {
    //    h2_6_5(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}

__device__ void vertical2_spdf5(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    
    if ((I+J) >=  4 && (K+L) >= 6) {
       // h2_4_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}






__device__ void vertical2_spdf6(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  6 && (K+L) >= 4) {
     //   h2_6_4(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}




__device__ void vertical2_spdf7(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  5 && (K+L) >= 6) {
   //     h2_5_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}


__device__ void vertical2_spdf8(int I, int J, int K, int L,
                               QUICKDouble* YVerticalTemp, QUICKDouble* store,
                               QUICKDouble Ptempx, QUICKDouble Ptempy, QUICKDouble Ptempz,  \
                               QUICKDouble WPtempx,QUICKDouble WPtempy,QUICKDouble WPtempz, \
                               QUICKDouble Qtempx, QUICKDouble Qtempy, QUICKDouble Qtempz,  \
                               QUICKDouble WQtempx,QUICKDouble WQtempy,QUICKDouble WQtempz, \
                               QUICKDouble ABCDtemp,QUICKDouble ABtemp, \
                               QUICKDouble CDtemp, QUICKDouble ABcom, QUICKDouble CDcom)
{
    if ((I+J) >=  6 && (K+L) >= 6) {
 //       h2_6_6(YVerticalTemp, store, \
              Ptempx, Ptempy, Ptempz, WPtempx, WPtempy, WPtempz, Qtempx, Qtempy, Qtempz,  \
              WQtempx, WQtempy, WQtempz, ABCDtemp, ABtemp, CDtemp,  ABcom, CDcom);
    }
}

