#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[200], lower;
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        lower = tolower((unsigned char)str[i]);
        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("String without vowels = %s\n", str);

    return 0;
}
