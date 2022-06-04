#include<stdio.h>
int main()
{
    int i,j,m,n,temp;
    
    int total=0;
    for(i=0; i<=100; i++){
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0){
            break;
        }
        if(m>n){
            temp=m;
            m=n;
            n=temp;
        }
        for(j=m; j<=n; j++){
            printf("%d ",j);
            total+=j;
        } 
        printf("Sum=%d\n",total);             
    }   
    return 0;   
}