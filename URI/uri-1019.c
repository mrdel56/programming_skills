#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    printf("%d:",s/3600);
    s=s%3600;
    printf("%d:",s/60);
    s = s%60;
    printf("%d\n",s);
    return 0;
}