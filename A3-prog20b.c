#include<stdio.h>

int main()
{
	int rem, temp, num, sum;
	for (num = 1; num < 501; num++)
	{
		sum = 0;
		temp = num;
		while (temp != 0)
		{
			rem = temp % 10;
			sum = sum + (rem * rem * rem);
			temp = temp/10;
		}

		if (sum == num)
			printf("The %d number is an armstrong number.\n", num);
	}
	return 0;
}
