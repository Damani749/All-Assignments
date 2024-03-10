#include<stdio.h>

int main()
{
	int n1, n2;
	printf("Enter two numbers to know which one if greater.\n");
	scanf("%d %d", &n1, &n2);

	if (n1 != n2)
	{
		if (n1 > n2)
			printf("Number %d is greater than %d.\n",n1,n2);

		else
			printf("Number %d is greater than %d.\n",n2,n1);
	}
	else
		printf("No number is max, Both numbers are equal.\n");

	return 0;
}
