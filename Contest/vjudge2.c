#include<stdio.h>
int main()
{
    long long int m,n,a,total;
    scanf("%lld %lld %lld", &m,&n,&a);
    double longstone_height, longstone_width;

    longstone_height = ceil((double)m / a);
    longstone_width = ceil((double)n / a);
    total = longstone_height*longstone_width;
    printf("%lld\n", total);
    return 0;
}
