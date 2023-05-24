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

int calculateDaysPassed(int day, int month, int year) {
    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysPassed = 0;

    for (int i = 1; i < month; i++) {
        daysPassed += daysInMonth[i - 1];
    }

    daysPassed += day;
    return daysPassed;
}

int calculateDaysBetween(int day1, int month1, int year1, int day2, int month2, int year2) {
    int daysPassed1 = calculateDaysPassed(day1, month1, year1);
    int daysPassed2 = calculateDaysPassed(day2, month2, year2);
    int daysBetween = 0;

    for (int i = year1; i < year2; i++) {
        daysBetween += 365 + isLeapYear(i);
    }

    daysBetween += daysPassed2 - daysPassed1;
    return daysBetween;
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
    int day1, month1, year1, day2, month2, year2, days_to_pass;

    printf("Enter the first date (d.mm.yyyy): ");
    scanf("%d.%d.%d", &day1, &month1, &year1);

    printf("Enter the number of days to pass: ");
    scanf("%d", &days_to_pass);

    calculateFinalDate(day1, month1, year1, days_to_pass);

    printf("Enter the second date (d.mm.yyyy): ");
    scanf("%d.%d.%d", &day2, &month2, &year2);

    if (!isValidDate(day1, month1, year1) || !isValidDate(day2, month2, year2)) {
        printf("Invalid date!\n");
        return 1;
    }

    int daysBetween = calculateDaysBetween(day1, month1, year1, day2, month2, year2);
    printf("The number of days between the two dates is: %d\n", daysBetween);

    return 0;
}
