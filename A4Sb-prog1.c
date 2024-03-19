#include <stdio.h>

int factorial(int n);

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } 
	else 
	{
        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }
    return 0;
}

int factorial(int n) 
{
    if (n == 0) 
        return 1;

	else
        return n * factorial(n - 1);
}
