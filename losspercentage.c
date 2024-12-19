#include <stdio.h>

int main() {
    float cost_price = 200;
    float selling_price = 250;
    float profit_loss_percentage = ((selling_price - cost_price) / cost_price) * 100;

    printf("Profit/Loss Percentage: %.2f%%\n", profit_loss_percentage);
    return 0;
}