#include <stdio.h>

#define MAX 10

int main(void)
{
    int a[MAX][MAX], r, c, i, j;
    long long sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > MAX || c < 1 || c > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("Sum of all elements = %lld\n", sum);

    return 0;
}
