#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number whose factorial you want to find.\n");
	scanf("%d", &num);

	int fact = 1;
	for (int i = num; i > 0; i--)
	{
		fact = fact * i;
	}
	printf("Factorial of %d is %d\n", num, fact);

	return 0;
}
