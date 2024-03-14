#include<stdio.h>

int main()
{
	int num,count = 1;
	printf("Enter the number whose factors you want.\n");
	scanf("%d", &num);
	
	printf("The factors are: ");
	while (count <= num/2)
	{
		if (num % count == 0)
			printf(" %d ,",count);
		count ++;
	}
	printf("\b \n");

	return 0;
}
