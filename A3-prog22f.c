#include<stdio.h>

int main()
{
	int i, j, num = 65;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", num);
			num += 1;		 
		}
	printf("\n");
	}
	return 0;
}
