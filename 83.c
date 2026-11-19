#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[200], ch;
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            ch = tolower((unsigned char)str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);

    return 0;
}
