#include<stdio.h>
int main()
{
    int i,n;
    float avg,x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f %f %f",&x,&y,&z);
         avg = (x*2 + y*3 + z*5)/(2+3+5);
        printf("%.1f\n",avg);
    }
    
    return 0;
}