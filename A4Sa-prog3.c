#include<stdio.h>

int calculator (int n1, char opr, int n2);

int main() 
{
	char choice;
	do 
	{
		int num1, num2;
		char op;
		printf("Enter the two number you want to compute.\n");
		scanf("%d %d", &num1, &num2);
		printf("Enter the operation out of given 4 (+,-,*, /)you want to do");
		scanf("%*c %c",&op);
		int result = calculator(num1, op, num2);
		printf("The result of the given inputs is %d\n", result);
		printf("Do you want to continue using the calculator? (y/n)\n");
		scanf(" %c", &choice);
	} 
	while (choice != 'n' && choice != 'N');
	return 0;
}

int calculator (int n1, char opr, int n2)
{
	int result;
	switch(opr)
	{
		case '+':
			result =  n1 + n2;
			break;

		case '-':
			result = n1 - n2;
			break;

		case '*':
			result = n1 * n2;
			break;

		case '/':
			if (n2 == 0)
			{
				printf("The denominator cannot be zero while division.\n");
				return 0;
			}	
			result =  n1/n2;
			break;
		default:
			printf("Invalid operator.\n");
			return 0;
	}
	return result;
}

