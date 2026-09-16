#include <stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    scanf(" %c", &c);
    if (isupper((unsigned char)c))
        printf("Uppercase alphabet\n");
    else if (islower((unsigned char)c))
        printf("Lowercase alphabet\n");
    else if (isdigit((unsigned char)c))
        printf("Digit\n");
    else
        printf("Special character\n");
    return 0;
}
