#include <stdio.h>

int main(void)
{
    char str[200];
    int i;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    str[i] = '\0';

    printf("Uppercase string = %s\n", str);

    return 0;
}
