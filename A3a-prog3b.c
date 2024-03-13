#include<stdio.h>

int main()
{
	int num, rem = 0,revNum = 0;
	printf("Enter a number whose reverse you want.\n");
	scanf("%d",&num);

	while (num != 0)
	{
		rem = num % 10;
		revNum = revNum * 10 + rem;
		num = num/10;
	}
	printf("The reverse number of a given number is %d\n",revNum);
	return 0;
}
