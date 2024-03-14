#include<stdio.h>
int main()
{
	int num, temp, mid, armst = 0;
	printf("Enter the number you want to know whether it is armstorg or not.\n");
	scanf("%d", &num);

	temp = num;	
	while (num > 0)
	{
		mid = num % 10;
		if (temp < 999)
			armst = armst + (mid * mid * mid);
		else if (temp < 9999)
			armst = armst + (mid * mid * mid * mid);
		num = num/10;
	}
	
	if (armst == temp)
		printf("%d is a Armstrong number.\n",temp);

	else
		printf("%d is not a Armstrong number.\n",temp);
	
	return 0;
}


