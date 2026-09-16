#include <stdio.h>
#include <math.h>
int main(void) {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);
    double percent = fabs(sp - cp) / cp * 100.0;
    if (sp > cp)
        printf("Profit %.0f%%\n", percent);
    else if (sp < cp)
        printf("Loss %.0f%%\n", percent);
    else
        printf("No profit, no loss\n");
    return 0;
}
