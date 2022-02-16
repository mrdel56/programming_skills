#include <stdio.h>
 
int main() {
 
    double R, PI=3.14159, A;
    scanf("%lf",&R);
    
    A = PI * (R*R);
    printf("A=%.4lf\n", A);
 
    return 0;
}