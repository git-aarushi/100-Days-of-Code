#include <stdio.h>
int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: %lld %lld\n", a, b);
    return 0;
}
