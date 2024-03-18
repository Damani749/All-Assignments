#include<stdio.h>

int main()
{
	int i,count;
	printf("The prime numbers between 1 to 100 are: ");
	for (i = 2; i <= 100; i++)
	{
		count = 0;
		for (int num = 1; num < i; num ++)
		{
			if (i % num == 0)
				count = count + 1;
		}
		if (count < 3)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}

