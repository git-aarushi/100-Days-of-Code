#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i, pos;

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

    printf("Enter the position (index, starting from 0) to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return 0;
    }

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
