#include <stdio.h>
int main(void) {
    int days;
    scanf("%d", &days);

    if (days > 30) {
        printf("Membership Cancelled\n");
    } else if (days <= 5) {
        printf("Fine ₹%d\n", days * 2);
    } else if (days <= 10) {
        printf("Fine ₹%d\n", 10 + (days - 5) * 4);
    } else {
        printf("Fine ₹%d\n", 30 + (days - 10) * 6);
    }

    return 0;
}
