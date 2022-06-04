#include<stdio.h>
int main()
{
    int i,testcase,a,b,c;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a*a) == (b*b + c*c)){
            printf("Case %d: yes\n",i);
        }
        else if((a*a + c*c) == (b*b)){
            printf("Case %d: yes\n",i);
        }
        else if((a*a + b*b) == (c*c)){
            printf("Case %d: yes\n",i);
        }
        else{
            printf("Case %d: no\n",i);
        }
    }
    return 0;
}