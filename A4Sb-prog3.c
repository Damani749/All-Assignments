#include<stdio.h>

int gcd(int n1, int n2);

int main()
{
	int num1, num2, result;
	printf("Enter num1 and num2 to find their gcd.\n");
	scanf("%d%d", &num1, &num2);
	result = gcd(num1, num2);
	printf("The gcd of %d and %d is %d.\n", num1, num2, result);
	return 0;
}

int gcd(int n1, int n2)
{

	if (n2 > n1)
		return gcd(n2,n1);

	if (n2 == 0)
		return n1;
	else 
		return gcd(n2, n1%n2);
}

