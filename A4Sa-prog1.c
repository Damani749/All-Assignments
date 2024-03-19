#include<stdio.h>

int fact (int n);
int main()
{	
	int result;
	result = fact(5);
	printf("The factorial of 5 is %d.\n", result);	
	return 0;
}

int fact(int n)
{
	int factorial = 1;
	for(int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}
