#include<stdio.h>
int main()
{
    int i,j,a=7,b;
    for(i=1;i<=9;i+=2){
        for(j=1; j<=3; j++){           
            printf("I=%d J=%d\n",i,a);
            a--;           
        }
        a+=5;               
    }
    return 0;
}