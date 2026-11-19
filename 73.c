#include <stdio.h>

#define MAX 10

int main(void)
{
    int a[MAX][MAX], rowSum[MAX], r, c, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > MAX || c < 1 || c > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    printf("Row sums: ");
    for (i = 0; i < r; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", rowSum[i]);
    }
    printf("\n");

    return 0;
}
