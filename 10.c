#include <stdio.h>
int main(void) {
    long long seconds;
    scanf("%lld", &seconds);
    long long h = seconds / 3600;
    long long m = (seconds % 3600) / 60;
    long long s = seconds % 60;
    printf("%lld:%lld:%lld\n", h, m, s);
    return 0;
}
