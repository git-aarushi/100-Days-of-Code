#include <stdio.h>

int main(void)
{
    int n, i;
    double sum;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of terms\n");
        return 0;
    }

    /* Series: 1 + 3/4 + 5/6 + 7/8 + ...
       First term is 1; term i (i >= 2) is (2i - 1) / (2i). */
    sum = 1.0;
    for (i = 2; i <= n; i++) {
        sum += (2.0 * i - 1) / (2.0 * i);
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
