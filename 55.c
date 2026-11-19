#include <stdio.h>

int main(void)
{
    int n, i, j, isPrime, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d: ", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            if (count > 0) {
                printf(" ");
            }
            printf("%d", i);
            count++;
        }
    }
    printf("\n");

    return 0;
}
