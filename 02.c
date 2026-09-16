#include <stdio.h>
int main(void) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Sum=%g, Diff=%g, Product=%g, Quotient=%g\n",
           a + b, a - b, a * b, a / b);
    return 0;
}
