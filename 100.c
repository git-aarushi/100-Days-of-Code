#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[200];
    int i, j, k, len, first = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("Sub-strings: ");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (!first) {
                printf(",");
            }
            first = 0;

            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");

    return 0;
}
