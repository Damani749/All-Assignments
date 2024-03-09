#include<stdio.h>

int main()
{
	int choice;
	float cel, faren; 
	printf("Please select from the given choice: \n");
	printf("1.Convert temperature from Celcius to Farenheit.\n");
	printf("2.Convert temperature from Farenheit to celcius.\n");
	scanf("%d",&choice);

	//----------------------Celcius to Farenheit-------------------//
	if (choice == 1)
	{
		printf("Enter the value in degree celcius\n");
		scanf("%f",&cel);

		faren =	(float)((cel * 9/5) + 32);
		printf("The temperature in Farenheit is %.2f.\n",faren);
	}
	//--------------------Farenheit to Celcius--------------------//
	else if (choice == 2)
	{
		printf("Enter the value in farenheit.\n");
        scanf("%f",&faren);
 
        cel = (float)((faren - 32) * 5/9);
		printf("The temperature in Farenheit is %.2f.\n",cel);
    }

	else
		printf("The choice entered by you is invalid.\n");
return 0;
}

