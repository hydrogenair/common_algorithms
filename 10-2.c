#include <stdio.h>
void increment_date(int *y,int *m,int *d){
    //���ǲ�ͬ�·ݣ����(����)
    *d+=1;
    if(*m==12&&*d==32){
        *m=1;
        *d=1;
        *y+=1;
    }else{
        if((*m==1||*m==3||*m==5||*m==7||*m==8||*m==10)&&*d==32){
                *m+=1;
                *d=1;
            }
        else if((*m==4||*m==6||*m==9||*m==11)&&*d==31){
                *m+=1;
                *d=1;
            }

    }
    if(*m==2){
        if((*y%4==0&&*y%100!=0)||(*y%400==0)){
            if(*d==30){
                *m=3;
                *d=1;
            }
        }else{
            if(*d==29){
                *m=3;
                *d=1;
        }
    }
    
}