#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[200];
    int i, len, surnameStart, initials = 0;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    len = strlen(name);
    while (len > 0 && name[len - 1] == ' ') {
        len--;
    }

    if (len == 0) {
        printf("Invalid name\n");
        return 0;
    }

    /* The surname is the last word of the name. */
    surnameStart = len;
    while (surnameStart > 0 && name[surnameStart - 1] != ' ') {
        surnameStart--;
    }

    printf("Name = ");
    for (i = 0; i < surnameStart; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            printf("%c.", toupper((unsigned char)name[i]));
            initials++;
        }
    }

    if (initials > 0) {
        printf(" ");
    }
    for (i = surnameStart; i < len; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}
