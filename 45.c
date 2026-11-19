#include <stdio.h>

int main(void)
{
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of terms\n");
        return 0;
    }

    /* Series: 2/3 + 4/7 + 6/11 + 8/15 + ...
       Term i is (2i) / (4i - 1). */
    for (i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4.0 * i - 1);
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
