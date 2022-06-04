#include<stdio.h>
int main()
{
    int i,code,count1=0,count2=0,count3=0;
    for(i=1;i>0;i++)
    {        
        scanf("%d\n",&code);        
         if(code == 4)
         {
             break;
         }
        else if(code==1)
        {
            count1++;            
        }
        else if(code==2)
        {
            count2++;            
        }
        else if(code==3)
        {
            count3++;           
        }
                        
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",count1);
    printf("Gasolina: %d\n",count2);
    printf("Diesel: %d\n",count3);
    return 0;
}