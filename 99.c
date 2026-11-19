#include <stdio.h>

int main(void)
{
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int dd, mm, yyyy;

    printf("Enter a date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3 ||
        dd < 1 || dd > 31 || mm < 1 || mm > 12) {
        printf("Invalid date\n");
        return 0;
    }

    printf("Date in new format = %02d-%s-%04d\n", dd, months[mm - 1], yyyy);

    return 0;
}
