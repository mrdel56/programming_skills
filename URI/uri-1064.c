#include<stdio.h>
int main()
{
    int i;
    double x;
    int count=0;
    double avg;
    for(i=0; i<6;i++)
    {
        scanf("%lf",&x);
        if(x>=0){           
            count++;
            avg += x;
        }       
    }
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg/count);
    return 0;
}