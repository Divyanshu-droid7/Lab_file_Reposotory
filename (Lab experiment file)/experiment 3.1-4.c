#include <stdio.h>

int main() {
    int year, leapYears, totalDays, day;

    printf("Enter year: ");
    scanf("%d", &year);

    leapYears = (year - 1)/4 - (year - 1)/100 + (year - 1)/400;
    totalDays = (year - 1)*365 + leapYears;
    day = totalDays % 7;

    switch(day) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}
