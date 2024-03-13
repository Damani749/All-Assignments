#include<stdio.h>

int main()
{
	int num, temp, sum = 0;
	printf("Enter a number whose digits calculation you want(max 5 digits).\n");
	scanf("%d", &num);

	while (num != 0)
	{
		temp = num % 10;
		sum = sum + temp;
		num = num/10;
	}
	printf("%d\n", sum);
	return 0;
}
