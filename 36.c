#include <stdio.h>

int main(void)
{
    long long n, temp, product = 1;
    int d, found = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    temp = (n < 0) ? -n : n;

    while (temp > 0) {
        d = temp % 10;
        if (d % 2 != 0) {
            product *= d;
            found = 1;
        }
        temp /= 10;
    }

    if (found)
        printf("Product of odd digits of %lld = %lld\n", n, product);
    else
        printf("%lld has no odd digits\n", n);

    return 0;
}
