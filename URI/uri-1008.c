#include<stdio.h>
int main()
{
    int employ_num,total_h;
    double  perHour_pay,salary;

    scanf("%d %d", &employ_num,&total_h);
    scanf("%lf", &perHour_pay);

    salary = total_h*perHour_pay;
    printf("NUMBER = %d\n", employ_num);
    printf("SALARY = U$ %.2lf\n",salary);

    return 0;
}