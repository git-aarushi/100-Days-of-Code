#include <stdio.h>

int main(void)
{
    long long n, temp, sum = 0, term;
    int digits = 0, d, i;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("%lld is not an Armstrong number\n", n);
        return 0;
    }

    /* count digits */
    temp = n;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    /* sum of digit^digits */
    temp = n;
    while (temp > 0) {
        d = temp % 10;
        term = 1;
        for (i = 1; i <= digits; i++)
            term *= d;
        sum += term;
        temp /= 10;
    }
