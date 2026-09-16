#include <stdio.h>
int main(void) {
    double a, b, c, largest;
    scanf("%lf %lf %lf", &a, &b, &c);
    largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;
    printf("Largest is %g\n", largest);
    return 0;
}
