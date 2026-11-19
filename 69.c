#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i, largest, second = 0, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    /* Second largest = largest value that is smaller than the maximum. */
    for (i = 0; i < n; i++) {
        if (arr[i] < largest && (!found || arr[i] > second)) {
            second = arr[i];
            found = 1;
        }
    }

    if (found) {
        printf("Second largest element = %d\n", second);
    } else {
        printf("No second largest element\n");
    }

    return 0;
}
