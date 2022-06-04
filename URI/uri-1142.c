#include<stdio.h>
int main()
{
    int i,j,k,N;
    scanf("%d",&N);
    for(i=1,j=2,k=3;i<=25,j<=26,k<=27;i+=4,j+=4,k+=4)
    {
        printf("%d %d %d PUM\n",i,j,k);
    }

    return 0;
}
