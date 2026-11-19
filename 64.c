#include <stdio.h>

int main(void)
{
    long long n;
    int count[10] = {0};
    int i, best = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    do {
        count[n % 10]++;
        n /= 10;
    } while (n > 0);

    /* On a tie, the smaller digit is reported. */
    for (i = 1; i < 10; i++) {
        if (count[i] > count[best]) {
            best = i;
        }
    }

    printf("Digit occurring the most = %d (%d times)\n", best, count[best]);

    return 0;
}
