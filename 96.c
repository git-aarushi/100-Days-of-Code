#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[200], temp;
    int i = 0, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            i++;
            continue;
        }

        start = i;
        while (str[i] != '\0' && str[i] != ' ') {
            i++;
        }
        end = i - 1;

        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Sentence with each word reversed = %s\n", str);

    return 0;
}
