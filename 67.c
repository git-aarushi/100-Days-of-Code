#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i, pos, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n >= MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (index, starting from 0) and the element to insert: ");
    scanf("%d %d", &pos, &x);

    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
