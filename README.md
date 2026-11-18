#include <stdio.h>

int main(void)
{
    long long n, power = 1;

    printf("Enter a non-negative number: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Please enter a non-negative number\n");
        return 0;
    }

    /* find the highest power of 2 that is <= n */
    while (power * 2 <= n)
        power *= 2;

    printf("Binary of %lld = ", n);
    while (power > 0) {
        if (n >= power) {
            printf("1");
            n -= power;
        } else {
            printf("0");
        }
        power /= 2;
    }
    printf("\n");

    return 0;
}
