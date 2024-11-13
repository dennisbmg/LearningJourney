#include <stdio.h>

int main(int argc, char const *argv[])
{
    double salary_hour;
    double hours_month;

    printf("\nEnter Salary per hour: ");
    scanf("%lf", &salary_hour);
    printf("\nEnter Hours worked in a month: ");
    scanf("%lf", &hours_month);

    printf("Your Salary this month: %lf", salary_hour * hours_month);
    
    return 0;
}
