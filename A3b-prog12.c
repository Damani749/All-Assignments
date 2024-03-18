#include<stdio.h>

int main()
{
	int base, index;
	printf("Enter the base and index to get the output.\n");
	scanf("%d %d", &base, &index);
	int result = 1;
	for(int count = 0; count < index; count++)
	{
		result = result * base;
	}
	printf("The output is %d.\n", result);
	return 0;
}
