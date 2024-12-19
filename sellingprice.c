#include <stdio.h>

int main() {
    float cost_price = 100;
    float profit_margin = 0.25; // 25%
    float selling_price = cost_price + (profit_margin * cost_price);

    printf("Selling Price: UGX %.2f\n", selling_price);
    return 0;
}