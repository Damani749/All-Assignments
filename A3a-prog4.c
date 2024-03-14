#include<stdio.h>

int main()
{
	int num,fact = 1;
	printf("Enter a given number whose factorial you want.\n");
	scanf("%d", &num);

	while(num != 0)
	{
		fact = fact * num;
		num --;
	}

	printf("The factorial of a given number is %d.\n",fact);
	return 0;
}
