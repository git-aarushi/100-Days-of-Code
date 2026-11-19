#include <stdio.h>

int main(void)
{
    long long n, product = 1;
    int d;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        d = n % 10;
        if (d % 2 != 0) {
            product *= d;
        }
        n /= 10;
    }

    printf("Product of odd digits = %lld\n", product);

    return 0;
}
