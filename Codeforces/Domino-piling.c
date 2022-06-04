#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,area,numberOfDomino;
    scanf("%d %d",&m,&n);
    area = m*n;
    numberOfDomino = floor(area/2.0);
    printf("%d\n",numberOfDomino);
    return 0;
}