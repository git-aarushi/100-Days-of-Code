#include <stdio.h>

#define MAX 100

int main(void)
{
    int a[MAX], b[MAX], merged[2 * MAX];
    int n1, n2, i, k = 0;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    if (n1 < 1 || n1 > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    if (n2 < 1 || n2 > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++) {
        merged[k++] = a[i];
    }
    for (i = 0; i < n2; i++) {
        merged[k++] = b[i];
    }

    printf("Merged array: ");
    for (i = 0; i < k; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", merged[i]);
    }
    printf("\n");

    return 0;
}
