#include<stdio.h>
int main()
{
    int i,j,p;
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        int k,n,sum1=0, sum2=0, sum3=0;
        scanf("%d %d",&k,&n);
        // int count
        // count=1 count<=n
        for(j=1; j<=n;j++){ 
            sum1 += j;
        }
        for(j=1; j<=2*n-1; j+=2 ){
            sum2 += j;
        }
        for(j =2; j<=2*n; j+=2){
            sum3 += j;
        }
        printf("%d %d %d %d\n",i,sum1,sum2,sum3);
    }
    return 0;
}