#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number to know whether it is positive, negative or zero.\n");
	scanf("%d",&num);
	
	if (num != 0)
	{
		if (num > 0)
			printf("%d number is positive.\n",num);
		else 
			printf("%d number is negative.\n",num);
	}
	else
		printf("The number is 0.\n");
	
	return 0;
}
