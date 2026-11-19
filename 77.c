#include <stdio.h>

#define MAX 10

int main(void)
{
    int a[MAX][MAX], r, c, i, j, distinct = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > MAX || c < 1 || c > MAX) {
        printf("Invalid size\n");
        return 0;
    }

    if (r != c) {
        printf("Not a square matrix\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r && distinct; i++) {
        for (j = i + 1; j < r; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    printf("Diagonal elements are distinct: %s\n", distinct ? "True" : "False");

    return 0;
}
