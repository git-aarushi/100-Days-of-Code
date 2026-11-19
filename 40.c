#include <stdio.h>

int main(void)
{
    long long bin, temp, place = 1;
    int d;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    temp = bin;
    if (temp < 0) {
        printf("Invalid binary number\n");
        return 0;
    }
    while (temp > 0) {
        if (temp % 10 > 1) {
            printf("Invalid binary number\n");
            return 0;
        }
        temp /= 10;
    }

    temp = bin;
    while (temp >= 10) {
        place *= 10;
        temp /= 10;
    }

    printf("1's complement = ");
    while (place > 0) {
        d = (bin / place) % 10;
        printf("%d", d == 0 ? 1 : 0);
        place /= 10;
    }
    printf("\n");

    return 0;
}
