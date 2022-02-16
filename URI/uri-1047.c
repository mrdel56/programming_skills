#include<stdio.h>
int main()
{
    int i_h,i_m,f_h,f_m;
    scanf("%d %d %d %d",&i_h,&i_m,&f_h,&f_m);

    if(f_m<i_m){
        f_m+=60;
        f_h-=1;
        f_m-=i_m;
        if(f_h<i_h){
            f_h+=24;
            f_h-=i_h;
        }
        else{
            f_h-=i_h;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",f_h,f_m);
    }
    else if(i_h==f_h && i_m==f_m){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(f_m>i_m){
        f_m-=i_m;
        if(f_h<i_h){
            f_h+=24;
            f_h-=i_h;
        }
        else{
            f_h -= i_h;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",f_h,f_m);
    }
    return 0;
}