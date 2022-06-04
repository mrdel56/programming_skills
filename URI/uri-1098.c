#include<stdio.h>
int main()
{
    float a=0.2,i,j;
    for(i=0.0; i<=2.2; i+=a)
    {
        for(j=1.0;j<=3.0;j+=1.0)
        {
            if((i>0.0 && i<1.0 )||(i>1 && i<2.0)) 
            {
                printf("I=%.1f J=%.1f\n",i,i+j);
            }
            else 
            {
                printf("I=%.0f J=%.0f\n",i,i+j);
            }                           
        }
    }
    
    return 0;
}