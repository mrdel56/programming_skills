#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    x = c+d;
    y= a+b;
    if(b>c && d>a && x>y && c>0 && d>0 && a%2==0)
    {
        printf("Valores aceitos\n");
    }
    
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}