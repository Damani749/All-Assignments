#include<stdio.h>

int main()
{
	int n1, n2, i;
	printf("Enter the range of numbers you want to print the table.\n");
	scanf("%d%d", &n1, &n2);

	for (n1; n1 <= n2; n1++)
	{
		int i;
		printf("-------------------%d's-------------------\n",n1);
		for (i = 1; i < 11; i++)
		{
			printf("%d x %d = %d\n", n1, i, n1*i);
		}
	}
	return 0;
}
		
