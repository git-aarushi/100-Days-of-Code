#include <stdio.h>

int main(void)
{
    long long a, b, x, y, r, hcf, lcm;

    printf("Enter two positive numbers: ");
    scanf("%lld %lld", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers\n");
        return 0;
    }

    /* find HCF first */
    x = a;
    y = b;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    hcf = x;

    lcm = (a / hcf) * b;      /* divide first to avoid overflow */

    printf("LCM of %lld and %lld = %lld\n", a, b, lcm);
    return 0;
}
