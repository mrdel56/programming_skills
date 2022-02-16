#include <stdio.h>
#include <math.h>

int main() {
    int A, B, diff;
    scanf("%d %d", &A, &B);
    if ( A > B) {
        diff = pow(32, (A - B));
    } 
    else if(A<B) {
        diff = pow(32, (B - A));
    }
    else{
        diff = 1;
    }
    printf("%d", diff);
    return 0;
}
