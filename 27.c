#include <stdio.h>

int main(void)
{
    int n, i;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += 2 * i - 1;          /* i-th odd number */

    printf("Sum of first %d odd numbers = %lld\n", n, sum);
    return 0;
}
