#include <stdio.h>

int main() {
    float hourly_wage = 30.0;
    int hours_per_week = 40;
    int weeks_per_year = 52;
    float annual_salary = hourly_wage * hours_per_week * weeks_per_year;

    printf("Annual Salary: UGX %.2f\n", annual_salary);
    return 0;
}