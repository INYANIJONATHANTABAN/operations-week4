#include <stdio.h>

int main() {
    float original_price = 200;
    float discount_rate = 0.10; // 10%
    float VAT_rate = 0.18;      // 18%
    float discounted_price = original_price - (discount_rate * original_price);
    float final_price = discounted_price + (VAT_rate * discounted_price);

    printf("Final Price after Discount and VAT: UGX %.2f\n", final_price);
    return 0;
}