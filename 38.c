#include <stdio.h>

int main(void)
{
    long long n, sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %lld\n", sum);

    return 0;
}
