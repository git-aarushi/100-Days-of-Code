#include <stdio.h>

int main(void)
{
    char str[200];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
