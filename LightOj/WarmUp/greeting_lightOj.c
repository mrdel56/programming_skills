#include<stdio.h>
int main()
{
    int i,a,b,t,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        if(a>=0 && b>=0 && a<=10 && b<=10){
            sum = a+b;
            printf("Case %d: %d\n",i,sum);
        }
    }
    return 0; 
}