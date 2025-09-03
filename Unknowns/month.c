#include <stdio.h>

enum months {
    Jan = 1, Feb, March, April, May, June, July, Aug, Sept, Oct, Nov, Dec
} month;

// Function to get days in a month
int getDays(enum months month, int year) {
    switch (month) {
        case Jan: case March: case May: case July: case Aug: case Oct: case Dec:
            return 31;
        case April: case June: case Sept: case Nov:
            return 30;
        case Feb:
            return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        default:
            return -1; // Invalid month (should never happen)
    }
}

int main() {
    int year, monthInput;
    
    // Get user input
    printf("Enter the month (1-12): ");
    scanf("%d", &monthInput);  // Removed `\n` from `scanf`
    printf("Enter the year: ");
    scanf("%d", &year);  // Removed `\n` from `scanf`

    // Validate month range
    if (monthInput < 1 || monthInput > 12) {
        printf("Invalid month entered.\n");
        return 1;
    }

    // Convert input to enum
    month = (enum months)monthInput;
    
    // Get days in the given month
    int daysInMonth = getDays(month, year);
    printf("The month has %d days.\n", daysInMonth);

    return 0;
}
