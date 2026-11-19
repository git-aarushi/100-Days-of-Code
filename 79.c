#include <stdio.h>

#define MAX 10

int main(void)
{
    int a[MAX][MAX], r, c, i, j, s, start, end, count = 0;

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

    /* Each diagonal has a constant value of s = i + j.
       Odd diagonals are traversed top to bottom, even diagonals bottom to top. */
    printf("Diagonal traversal: ");
    for (s = 0; s <= r + c - 2; s++) {
        start = (s - (c - 1) > 0) ? s - (c - 1) : 0;
        end = (s < r - 1) ? s : r - 1;

        if (s % 2 == 1) {
            for (i = start; i <= end; i++) {
                if (count > 0) {
                    printf(" ");
                }
                printf("%d", a[i][s - i]);
                count++;
            }
        } else {
            for (i = end; i >= start; i--) {
                if (count > 0) {
                    printf(" ");
                }
                printf("%d", a[i][s - i]);
                count++;
            }
        }
    }
    printf("\n");

    return 0;
}
