#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,y1,y2;
    scanf("%lf %lf %lf", &a,&b,&c);

    x = (b*b)-(4*a*c);
    y1 = (-b+sqrt(x))/(2*a);
    y2 = (-b-sqrt(x))/(2*a);
    
    if(x<0){
        printf("Impossivel calcular\n");
    }
    else if(a==0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n",y1); 
        printf("R2 = %.5lf\n",y2);
    } 

    return 0;
}