#include <stdio.h>

#define MAX 10

int main(void)
{
    int a[MAX][MAX], r, c, i, j, symmetric = 1;

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
        }
    }

    if (r != c) {
        symmetric = 0;
    } else {
        for (i = 0; i < r && symmetric; i++) {
            for (j = 0; j < i; j++) {
                if (a[i][j] != a[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    printf("Symmetric matrix: %s\n", symmetric ? "True" : "False");

    return 0;
}
