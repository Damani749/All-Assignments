#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number that you want to know whether it is even or odd.\n");
	scanf("%d",&num);
	if (num == 0)
		printf("The number 0 is not considered in even or odd.\n");

	else
	{
		if (num%2 == 0)
			printf("The number is even.\n");
		else
			printf("The number is odd.\n");
	}
	return 0;
}
