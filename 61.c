#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i, key, index = -1;

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

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("Element not found (-1)\n");
    }

    return 0;
}
