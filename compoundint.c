#include <stdio.h>
#include <math.h>

int main() {
    float principal = 8000;
    float rate = 0.04; // 4%
    int time = 2;
    int n = 4; // Compounded quarterly
    float compound_interest = principal * pow((1 + (rate / n)), (n * time)) - principal;

    printf("Compound Interest: UGX %.2f\n", compound_interest);
    return 0;
}