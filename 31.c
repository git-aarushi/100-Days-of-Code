#include <stdio.h>

int main(void)
{
    long long n, i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 2)
        isPrime = 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%lld is a prime number\n", n);
    else
        printf("%lld is not a prime number\n", n);

    return 0;
}
