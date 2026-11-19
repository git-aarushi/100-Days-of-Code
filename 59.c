#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even = %d, Odd = %d\n", even, odd);

    return 0;
}
