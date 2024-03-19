#include<stdio.h>

int power(int b, int i);

int main()
{
	int base, index;
	printf("Enter the base and index to get the result.\n");
	scanf("%d%d", &base, &index);
	int result = power(base,index);	
	printf("The result is %d.\n", result);
	return 0;
}

int power(int b, int i)
{
	if ((b == 0) || (b==1))
		return b;

	if (i == 0)
		return 1;

	if (i == 1)
		return b;
	
	return b * power(b, i-1);
}
	

