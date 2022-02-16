#include<stdio.h>
int main()
{
    int g,s;
    scanf("%d %d", &g, &s);

    if(g>0 && s==0){
        printf("Gold\n");
    }
    else if(s>0 && g==0){
        printf("Silver\n");
    }
    else{
        printf("Alloy\n");
    }
    return 0;
}
