#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i, positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive = %d, Negative = %d, Zero = %d\n", positive, negative, zero);

    return 0;
}
