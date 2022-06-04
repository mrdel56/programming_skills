#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}