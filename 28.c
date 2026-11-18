#include <stdio.h>

int main(void)
{
    int n, i;
    unsigned long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no even numbers between 1 and %d\n", n);
        return 0;
    }

    for (i = 2; i <= n; i += 2)
        product *= i;

    printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    return 0;
}
