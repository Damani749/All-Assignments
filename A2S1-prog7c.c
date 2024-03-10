#include<stdio.h>

int main()
{
	int year, days, leap;
	printf("Enter year: ");
	scanf("%d", &year);
	
	days = ((year % 4==0)&&(year % 100 !=0)) || (year % 400 == 0) ? 366:365;

	if (days == 366)
		printf("The %d year is a leap year.\n",year);
	else
		printf("The %d year is not a leap year.\n",year);
	
	return 0;
}


