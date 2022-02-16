#include<stdio.h>
int main()
{
    char name[50];
    double fixed_salary, seller_sold, total_salary;

    scanf("%s", name);
    scanf("%lf %lf", &fixed_salary, &seller_sold);

    total_salary = fixed_salary + (0.15*seller_sold);

    printf("TOTAL = R$ %.2lf\n", total_salary);

    return 0;
}