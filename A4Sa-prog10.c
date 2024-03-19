#include<stdio.h>

void leap (int year);
void days (int month, int year);

int main()
{
	int y, m;
	printf("Enter year: ");
	scanf("%d", &y);
	printf("Enter month: ");
	scanf("%d", &m);
	leap(y);
	days(m,y);
	return 0;
}

void leap (int year)
{
	int days;
	days = ((year % 4==0)&&(year % 100 !=0)) || (year % 400 == 0) ? 366:365;

	if (days == 366)
		printf("The %d year is a leap year.\n",year);
	else
		printf("The %d year is not a leap year.\n",year);	
}

void days(int month, int year)
{
    int days;
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
}

