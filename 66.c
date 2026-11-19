#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n >= MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    i = n - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
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
