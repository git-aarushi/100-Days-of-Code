#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[200];
    int i = 0, j, start, wordLen, maxLen = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        while (str[i] == ' ') {
            i++;
        }

        start = i;
        while (str[i] != '\0' && str[i] != ' ') {
            i++;
        }
        wordLen = i - start;

        if (wordLen > maxLen) {
            maxLen = wordLen;
            maxStart = start;
        }
    }

    if (maxLen == 0) {
        printf("No words found\n");
        return 0;
    }

    printf("Longest word = ");
    for (j = 0; j < maxLen; j++) {
        printf("%c", str[maxStart + j]);
    }
    printf("\n");

    return 0;
}
