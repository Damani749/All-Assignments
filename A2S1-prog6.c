#include<stdio.h>

int main()
{
	int orig,num,rev;
	printf("Enter any five digit number.\n");
	scanf("%d",&num);
	orig = num;

	if (num > 9999)
	{
		for (int i =0; i < 5; i++)
		{
			rev = rev * 10;
			rev = rev + num % 10;
			num = num/10;
		}
	
		printf("The reverse number of a given number is %d.\n", rev);

		if (orig == rev)
			printf("The number %d is palindrome.\n",orig);
		else 
			printf("The number %d is not palindrome.\n",orig);
	}
	else
		printf("The entered number is not a five digit number.\n");
	
	return 0;
}
