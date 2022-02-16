#include<stdio.h>
int main()
{
    int x,y,z,s;
    scanf("%d %d %d", &x, &y, &z);

    s = (x+y+abs(x-y))/2;
    s = (s+z+abs(s-z))/2;

    printf("%d eh o maior\n",s);
    return 0;
}