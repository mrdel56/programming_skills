#include<stdio.h>
int main()
{
    int i,j;
    int count = 0;
    for(i=0; i<5;i++)
    {
        scanf("%d",&j);
        if(j%2==0){           
            count++;
        }       
    }
    printf("%d valores pares\n",count);
    return 0;
}