#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[200], s2[200];
    int len1, len2, i, shift, match, isRotation = 0;

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 == len2) {
        if (len1 == 0) {
            isRotation = 1;
        }

        /* Try every possible rotation of s1 and compare it with s2. */
        for (shift = 0; shift < len1 && !isRotation; shift++) {
            match = 1;
            for (i = 0; i < len1; i++) {
                if (s1[(i + shift) % len1] != s2[i]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                isRotation = 1;
            }
        }
    }

    if (isRotation) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
