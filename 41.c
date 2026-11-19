#include <stdio.h>

int main(void)
{
    long long n, temp, place = 1, first, last, middle, result;
    int negative = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) {
        negative = 1;
        n = -n;
    }

    if (n < 10) {
        result = n;
    } else {
        temp = n;
        while (temp >= 10) {
            place *= 10;
            temp /= 10;
        }

        first = n / place;
        last = n % 10;
        middle = (n % place) / 10;
        result = last * place + middle * 10 + first;
    }

    if (negative) {
        result = -result;
    }

    printf("Number after swapping first and last digit = %lld\n", result);

    return 0;
}
