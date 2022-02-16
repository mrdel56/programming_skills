#include<stdio.h>
int main()
{

    int i,j,n;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        scanf("%d",&j);
        if(j<0 && j%2!=0){
            printf("ODD NEGATIVE\n");
        }
        else if(j>0 && j%2!=0){
            printf("ODD POSITIVE\n");
        }
        else if(j<0 && j%2==0){
            printf("EVEN NEGATIVE\n");
        }       
        else if(j>0 && j%2==0){
            printf("EVEN POSITIVE\n");
        }
        else{
            printf("NULL\n");
        }
        i++;
    }
    return 0;
}