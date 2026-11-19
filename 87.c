#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (isdigit((unsigned char)str[i])) {
            digits++;
        } else if (!isalpha((unsigned char)str[i])) {
            special++;
        }
    }

    printf("Spaces = %d, Digits = %d, Special = %d\n", spaces, digits, special);

    return 0;
}
