#include<stdio.h>
int main()
{
    int i,j,n,x,y,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
             int sum=0;
        scanf("%d %d",&x,&y);
        if(x>y){
                temp=x;
                x=y;
                y=temp;
            }
        for(j=x+1;j<y;j++){

            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}

