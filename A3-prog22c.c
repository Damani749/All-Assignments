#include<stdio.h>

int main()
{
	int i, j, num = 1;
	for (i = 1; i < 6; i++)
	{
		num = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d", num);
			num = num +1;
		}
	printf("\n");
	}
	return 0;
}
