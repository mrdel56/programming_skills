#include<stdio.h>
int main()
{
    int i,n,x,y;
    
    double result=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        if(y!=0)
        {result = x / (double)y;
        printf("%.1lf\n",result);}
        else if(y==0){
            printf("divisao impossivel\n");
        }               
    }
    return 0;
}