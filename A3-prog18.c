#include<stdio.h>

int main()
{
	int num,i;
	for (num = 1; num < 11; num ++)
	{
		printf("------------------%d's table-------------------\n",num);
		for (i = 1; i< 11; i++)
		{
			printf("%d x %d = %d\n", num, i, num*i);
		}
	}
	return 0;
}
		
