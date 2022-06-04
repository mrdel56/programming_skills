#include<stdio.h>
int main()
{
    int i,j;
    double s=0,s1=0;
    for(i=3,j=2;i<=39;i+2,j*j){
        s=s+i/j;
        s1+=1+s;
    }
    printf("%.2lf\n",s1);
    return 0;
}