#include <stdio.h>

#define MAX 10

int main(void)
{
    int a[MAX][MAX], b[MAX][MAX], prod[MAX][MAX];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    if (r1 < 1 || r1 > MAX || c1 < 1 || c1 > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r2 < 1 || r2 > MAX || c2 < 1 || c2 > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2) {
        printf("Matrices cannot be multiplied (columns of first != rows of second)\n");
        return 0;
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for (k = 0; k < c1; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
