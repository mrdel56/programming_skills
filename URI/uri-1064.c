#include<stdio.h>
int main()
{
    int i;
    double x;
    int count=0;
    double sum;
    for(i=0; i<6;i++)
    {
        scanf("%lf",&x);
        if(x>=0){           
            count++;
            sum += x;
        }       
    }
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",sum/count);
    return 0;
}