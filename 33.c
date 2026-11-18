#include <stdio.h>

int main(void)
{
    long long a, b, x, y, r;

    printf("Enter two numbers: ");
    scanf("%lld %lld", &a, &b);

    x = (a < 0) ? -a : a;
    y = (b < 0) ? -b : b;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }

    printf("HCF of %lld and %lld = %lld\n", a, b, x);
    return 0;
}
