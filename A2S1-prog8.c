#include<stdio.h>

int main()
{
	float ppu = 5, num, price, dis, total;
	printf("Enter the quantity of the units you want to buy: ");
	scanf("%f",&num);
	
	if (num > 0 && num < 31)
	{
		total = num * 5;
		printf("The total amount to be paid for %.1f units with no discount is : %.2f\n",num, total);
	}

	else if (num > 30 && num < 51)
	{
		price = num * 5;
		dis = (price * 10)/100;
		total = price - dis;
		printf("The total amount to be paid for %.1f units after applying 10%% discount is : %.2f\n",num, total);
	}

	else if (num > 50)
	{	
		price = num * 5;
		dis = (price * 15)/100;
		total = price - dis;
		printf("The total amount to be paid for %.1f units after applying 15%% discount is : %.2f\n",num, total);
	}

	else 
		printf("Invalid quantity of units entered.\n");
	
	return 0;
}
		
