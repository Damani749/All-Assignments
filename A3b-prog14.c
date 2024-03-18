#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number you want to know whether it is prime or not.\n");
	scanf("%d", &num);
	int count = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			count ++;
	}
	if (count < 3)
		printf("The number given by user is a prime number.\n");
	else
		printf("The given number by user is not a prime number.\n");
	
	return 0;
}
