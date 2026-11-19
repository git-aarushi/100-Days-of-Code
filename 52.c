#include <stdio.h>

int main(void)
{
    int group, count, i;

    /* Groups of 1, 3, 5, 3, 1 stars (one star per line),
       with a blank line between the groups. */
    for (group = 1; group <= 5; group++) {
        if (group <= 3) {
            count = 2 * group - 1;
        } else {
            count = 2 * (6 - group) - 1;
        }

        if (group > 1) {
            printf("\n");
        }

        for (i = 1; i <= count; i++) {
            printf("*\n");
        }
    }

    return 0;
}
