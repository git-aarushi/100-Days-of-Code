#include <stdio.h>

int main(void)
{
    int n, temp, d, i;
    long long fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        d = temp % 10;

        fact = 1;
        for (i = 2; i <= d; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (n > 0 && sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
