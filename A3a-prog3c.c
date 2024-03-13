#include<stdio.h>

int main()
{
	int num, rem = 0,revNum = 0,temp;
	printf("Enter a number whose reverse you want.\n");
	scanf("%d",&num);
	temp = num;
	while (num != 0)
	{
		rem = num % 10;
		revNum = revNum * 10 + rem;
		num = num/10;
	}
	printf("The reverse number of a given number is %d\n",revNum);
	if (temp == revNum)
	{
		printf("The given number is a palindrome.\n");
	}
	else
		printf("The given number is not a palindrome.\n");

	return 0;
}
