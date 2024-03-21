#include<stdio.h>
int calculate(int *op1, char *opr, int *op2);

int main()
{
	int num1, num2;
	char ch;
	printf("Enter the two numbers you want to perform operation on.\n");
	scanf("%d %d", &num1, &num2);
	printf("Enter the operation you want to perform.\n");
	scanf("%*c %c", &ch);
	int temp = calculate(&num1, &ch, &num2);
	if (temp != -1)
		printf("The result is %d\n", temp);
	else
		printf("An error occured during calculation.\n");
	return 0;
}

int calculate(int *op1, char *opr, int *op2)
{
	int result;
	switch (*opr)
	{
		case '+':
			result = *op1 + *op2;
			return result;

		case '-':
			result = *op1 - *op2;
			return result;

		case '*':
			result = *op1 * *op2;
			return result;

		case '/':
			if (*op2 == 0)
			{
				printf("Denominator is zero. Hence, divison cannot be done with denominator value zero.\n");
				return -1;

			}
			else
			{
				result = *op1 / *op2;
				return result;
			}
			break;

		default:
			printf("Invalid Data entered.\n");
			return -1;
	}
}
