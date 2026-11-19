#include <stdio.h>

int main(void)
{
    char str[200], repeated = 0;
    int seen[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Scan left to right; the first lowercase letter that has already
       been seen is the first repeating one. */
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (seen[str[i] - 'a']) {
                repeated = str[i];
                found = 1;
                break;
            }
            seen[str[i] - 'a'] = 1;
        }
    }

    if (found) {
        printf("First repeating lowercase alphabet = %c\n", repeated);
    } else {
        printf("No repeating lowercase alphabet found\n");
    }

    return 0;
}
