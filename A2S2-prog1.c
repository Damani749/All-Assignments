#include<stdio.h>

int main()
{
	int month, days, year;
	printf("enter the year: ");
	scanf("%d",&year);
	printf("enter the month: ");
	scanf("%d", &month);
	
	switch(month)
	{
		case 1: printf("The month January in year %d has 31 days.\n",year);
			break;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0))
				printf("The month February in year %d has 29 days.\n",year);
			else
				printf("The month February in year %d has 28 days\n",year);
			break;
		case 3: printf("The month March in year %d has 31 days.\n",year);
			break;
		case 4: printf("The month April in year %d has 30 days.\n",year);
			break;
		case 5: printf("The month May in year %d has 31 days.\n",year);
			break;
		case 6: printf("The month June in year %d has 30 days.\n",year);
			break;
		case 7: printf("The month July in year %d has 31 days.\n",year);
			break;
		case 8: printf("The month August in year %d has 31 days.\n",year);
			break;
		case 9: printf("The month September in year %d has 30 days.\n",year);
			break;
		case 10: printf("The month October in year %d has 31 days.\n",year);
			 break;
		case 11: printf("The month November in year %d has 30 days.\n",year);
			 break;
		case 12: printf("The month December in year %d has 31 days.\n",year);
			 break;

	return 0;
	}
}
