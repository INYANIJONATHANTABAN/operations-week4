#include <stdio.h>

int main() {
    float base_price = 150;
    float VAT_rate = 0.18; // 18%
    float final_price = base_price + (VAT_rate * base_price);

    printf("Final Price after VAT: UGX %.2f\n", final_price);
    return 0;
}