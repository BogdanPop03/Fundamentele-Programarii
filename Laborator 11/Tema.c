#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1)
        return 0;

    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day > daysInMonth[month - 1])
        return 0;

    return 1;
}

void calculateFinalDate(int day, int month, int year, int numDays) {
    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (numDays > 0) {
        int daysInCurrentMonth = daysInMonth[month - 1];

        if (day + numDays > daysInCurrentMonth) {
            numDays -= (daysInCurrentMonth - day + 1);
            day = 1;

            if (month == 12) {
                month = 1;
                year++;
            } else {
                month++;
            }

            if (month == 2)
                daysInMonth[1] = 28 + isLeapYear(year);
        } else {
            day += numDays;
            numDays = 0;
        }
    }

    printf("The final date is: %d.%d.%d\n", day, month, year);
}

int main() {
    int day, month, year, numDays;

    printf("Enter the initial date (d.mm.yyyy): ");
    scanf("%d.%d.%d", &day, &month, &year);

    printf("Enter the number of days to pass: ");
    scanf("%d", &numDays);

    if (!isValidDate(day, month, year)) {
        printf("Invalid date!\n");
        return 1;
    }

    calculateFinalDate(day, month, year, numDays);

    return 0;
}
