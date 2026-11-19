#include <stdio.h>

#define MAX 100

int main(void)
{
    int arr[MAX], n, i;
    long long sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements = %lld\n", sum);

    return 0;
}
