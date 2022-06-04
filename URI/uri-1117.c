#include<stdio.h>
int main()
{
    int i,count=0;
    double x,sum=0,avg;
    for(i=0;i<=10000;i++){
        
        scanf("%lf",&x);
        if(x>0 && x<=10){
            count++;
            sum+=x;
        }
        else{
            printf("nota invalida\n");
        }
        if(count==2)break;
    }
        avg=sum/2;
        printf("media = %.2lf\n",avg);
    return 0;
}