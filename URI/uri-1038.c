#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==1)
    {
        float total_price = y*4.00;
        printf("Total: R$ %.2f\n",total_price);
    }
    else if(x==2)
    {
        float total_price = y*4.50;
        printf("Total: R$ %.2f\n",total_price);
    }
    else if(x==3)
    {
        float total_price = y*5.00;
        printf("Total: R$ %.2f\n",total_price);
    }
    else if(x==4)
    {
        float total_price = y*2.00;
        printf("Total: R$ %.2f\n",total_price);
    }
    else if(x==5)
    {
        float total_price = y*1.50;
        printf("Total: R$ %.2f\n",total_price);
    }
    return 0;
}