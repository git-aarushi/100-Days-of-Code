#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i, k, r, temp;

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

    printf("Enter the number of positions to rotate right (k): ");
    scanf("%d", &k);

    if (k < 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    k = k % n;

    for (r = 0; r < k; r++) {
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }

    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
