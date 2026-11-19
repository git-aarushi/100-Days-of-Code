#include <stdio.h>

int main(void)
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters:\n");
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
