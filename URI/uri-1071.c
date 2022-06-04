#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        int temp=x;
            x=y;
             y=temp;   
    }

    x+=1;
    while(x<y){
         
        if(x%2!=0){
            sum+=x;
        } 
       x++;       
    }
    printf("%d\n",sum);
    return 0;
}