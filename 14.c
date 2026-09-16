#include <stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    scanf(" %c", &c);
    c = (char)tolower((unsigned char)c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("Vowel\n");
    else
        printf("Consonant\n");
    return 0;
}
