#include<stdio.h>
#include<math.h>
int main()
{
    int i,testCase;
    double r,pi=2*acos(0.0),squareArea,circleArea,shadedArea;
    scanf("%d",&testCase);
    for(i=1;i<=testCase;i++){
        scanf("%lf\n",&r);
        squareArea = (2*r*2*r);
        circleArea = pi*r*r;
        shadedArea = squareArea - circleArea;         
        printf("Case %d: %.2lf\n",i,shadedArea);         
    }  
    return 0;
}