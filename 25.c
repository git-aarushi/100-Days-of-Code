#include <stdio.h>
int main(void) {
    long long a, b, result;
    char op;

    scanf("%lld %lld %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%lld\n", a + b);
            break;
        case '-':
            printf("%lld\n", a - b);
            break;
        case '*':
            printf("%lld\n", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Division by zero is not allowed\n");
            else
                printf("%lld\n", a / b);
            break;
        case '%':
            if (b == 0)
                printf("Modulo by zero is not allowed\n");
            else
                printf("%lld\n", a % b);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
