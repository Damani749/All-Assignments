#include<stdio.h>

void swap(int *n1, int *n2);

int main()
{

	int a = 24, b = 9;
	printf("The numbers before swapping are: a = %d and b = %d\n", a, b);
	swap (&a, &b);
	printf("\n");
	return 0;
}

void swap (int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

	printf("The numbers after swap are: a =  %d and b = %d.\n", *n1, *n2);
}
