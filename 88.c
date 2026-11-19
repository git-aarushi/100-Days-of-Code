#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("String after replacing spaces = %s\n", str);

    return 0;
}
