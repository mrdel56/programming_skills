#include<stdio.h>
int main()
{
    float t,v,s;
    float l;
    scanf("%f %f", &t, &v);

    s = v*t;
    l = s/12;

    printf("%.3f\n", l);

    return 0;
}