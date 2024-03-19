#include<stdio.h>

void prime (int n);
void prime_range(int a, int b);

int main()
{
	int num, start, end;
	printf("Enter the number you want to know whether it is prime or not.\n");
	scanf("%d", &num);
	prime(num);
	printf("Enter the starting and ending number you want to print the range of prime numbers.\n");
	scanf("%d %d", &start, &end);
	prime_range(start, end);

	printf("\n");

	return 0;
}

void prime(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			count ++;
	}
	if (count < 3)
		printf("The number given by user is a prime number.\n");
	else
		printf("The given number by user is not a prime number.\n");
}

void prime_range(int a, int b)
{
	int i,count;
	printf("The prime numbers between %d to %d are: ", a, b);

	for (i = a; i <= b; i++)
	{
		count = 0;
		for (int num = 1; num <= i; num ++)
		{
			if (i % num == 0)
				count = count + 1;
		}
		if (count < 3)
			printf("%d ", i);
	}
}
