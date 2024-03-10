#include<stdio.h>
#include<stdlib.h>

int main()
{
	int month, year,days;
	printf("Enter the year and month whose number of days you want to find.\n");
	printf("Month no: ");
	scanf("%d",&month);
	printf("Year: ");
	scanf("%d",&year);

	if (month < 1 || month > 12) 
	{
		printf("Invalid month input.\n");
	}
	else if (month == 2) 
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		{
			days = 29;
		} 
		else 
		{
			days = 28;
		}
		printf("Number of days in February %d is %d\n", year, days);
	} 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
		days = 30;
		printf("Number of days in %d month is %d\n", month, days);
	} 
	else 
	{
		days = 31;
		printf("Number of days in %d month is %d\n", month, days);
	}

	return 0;
}
