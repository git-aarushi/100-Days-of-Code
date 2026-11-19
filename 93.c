#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s1[200], s2[200];
    int count[256] = {0};
    int i, isAnagram = 1;

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    for (i = 0; s1[i] != '\0'; i++) {
        count[tolower((unsigned char)s1[i])]++;
    }
    for (i = 0; s2[i] != '\0'; i++) {
        count[tolower((unsigned char)s2[i])]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
