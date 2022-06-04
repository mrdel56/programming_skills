#include<stdio.h>
#include<math.h>
int main()
{   
    double i,s=0,s1=0;
    for(i=2;i<=100;i++){
        s=(s+1/i);
         s1=s+1;  
    }
    printf("%.2lf\n",s1);
    return 0;
}