#include<stdio.h>

int main()
{
	int num, count = 1;
	printf("Enter a number whose table you want to print.\n");
	scanf("%d",&num);
	
	// Using while loop
	while (count < 11)
	{
		printf("%d * %d = %d\n",num, count, num*count);
		count ++;
	}
	return 0;
}
