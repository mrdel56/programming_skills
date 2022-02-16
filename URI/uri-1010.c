#include<stdio.h>
int main()
{
    int code1, code2, num_unit1, num_unit2;
    double price1, price2, pay;

    scanf("%d %d %lf", &code1, &num_unit1, &price1);
    scanf("%d %d %lf", &code2, &num_unit2, &price2);

    pay = (num_unit1 * price1) + (num_unit2 * price2);

    printf("VALOR A PAGAR: R$ %.2lf\n", pay);


    return 0;
}