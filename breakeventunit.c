#include <stdio.h>

int main() {
    float fixed_costs = 2000;
    float variable_cost = 15;
    float selling_price = 25;
    float break_even_units = fixed_costs / (selling_price - variable_cost);

    printf("Break-Even Units: %.2f\n", break_even_units);
    return 0;
}