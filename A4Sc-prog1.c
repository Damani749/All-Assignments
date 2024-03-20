#include<stdio.h>

int add (int *n1, int *n2);
int mul (int *n1, int *n2);
int result;
int *ptr = &result;


int main()
{
	int num1, num2;
	printf("Enter two numbers to get its product and Sum.\n");
	scanf("%d %d", &num1, &num2);
	result = add(&num1, &num2);
	printf("The result of addition is %d.\n",result);
	result = mul(&num1, &num2);
	printf("The result of product  is %d.\n",result);
	return 0;
}

int add(int *n1, int *n2)
{
	return *n1+ *n2;
}

int mul(int *n1, int *n2)
{
	return *n1 * *n2;
}
