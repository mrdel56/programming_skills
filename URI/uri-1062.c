#include<stdio.h>
int main()
{
    int s_d,s_h,s_m,s_s;
    int e_d,e_h,e_m,e_s;
    char dia1[10],dia2[10],del[5];   

    scanf("%s %d",dia1,&s_d);
    scanf("%d %s %d %s %d\n",&s_h,del,&s_m,del,&s_s);
    scanf("%s %d",dia2,&e_d);
    scanf("%d %s %d %s %d",&e_h,del,&e_m,del,&e_s);
    
    int s = e_s - s_s;
    int m = e_m - s_m;
    int h = e_h - s_h;
    int d = e_d - s_d;
    if(s<0){
        s+=60;
        m--;
    } 
    if(m<0){
        m+=60;
        h--;
    }
    if(h<0){
        h+=24;
        d--;
    }
    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
    return 0;
}
