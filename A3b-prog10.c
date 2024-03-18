#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number whose table you want to print.\n");
	scanf("%d", &num);

	for (int i = 1; i < 11; i++)
	{
		printf("%d * %d = %d\n", num, i, num*i);
	}
	printf("\n");
}
