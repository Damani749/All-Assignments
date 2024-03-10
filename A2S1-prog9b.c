#include <stdio.h>

int main() 
{
    int month, year, days;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) 
	{
        printf("Invalid month input.\n");
    } 
	else if (month == 2) 
	{
        days = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        printf("Number of days in February %d: %d\n", year, days);
    } 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        days = 30;
        printf("Number of days in %d: %d\n", month, days);
    } 
	else 
	{
        days = 31;
        printf("Number of days in %d: %d\n", month, days);
    }

    return 0;
}

