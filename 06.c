#include <stdio.h>
int main(void) {
    double a, b, temp;
    scanf("%lf %lf", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %g %g\n", a, b);
    return 0;
}
