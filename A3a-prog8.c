#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number whose prime factors you want.\n");
	scanf("%d", &num);

	for (int i = 2; num > 1; i++) 
	{
		while (num % i == 0) 
		{
			printf("%d ", i);
			printf("*");
			num = num / i;         
		}     
	}
	printf("\b \n");
	return 0;
} 
