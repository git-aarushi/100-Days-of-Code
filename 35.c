#include <stdio.h>

int main(void)
{
    long long n, temp;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    temp = (n < 0) ? -n : n;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits of %lld = %d\n", n, sum);
    return 0;
}
