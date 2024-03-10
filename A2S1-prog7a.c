#include<stdio.h>

int main()
{
	int year, days;
	
	printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0) 
	{
        days = 366;
		printf("The %d year is a leap year.\n",year);
    } 
	else if (year % 100 == 0) 
	{
        days = 365;
		printf("The %d year is not a leap year.\n",year);
    } 
	else if (year % 4 == 0) 
	{
        days = 366;
		printf("The %d year is a leap year.\n",year);
    } 
	else 
	{
        days = 365;
		printf("The %d year is not a leap year.\n",year);
    }

    printf("Number of days in year %d is %d\n", year, days);

    return 0;
}
