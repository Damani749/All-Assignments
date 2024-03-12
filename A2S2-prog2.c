#include <stdio.h>

int main()
{
	int num1, num2,res,flag = 0;
	float res1;
	char opr,choice;
	
	do 
	{
		printf("Please enter two numbers.\n");
		scanf("%d %d", &num1, &num2);

		printf("please enter the operand: ");
		scanf("%*c %c",&opr);

		switch (opr)
		{
			case '+':
				res = num1 + num2;
				printf("The addition of %d %c %d is %d.\n",num1,opr,num2,res);
				break;
			case '-':
				res = num1 - num2;
				printf("The subtraction of %d %c %d is %d.\n",num1, opr, num2, res);
				break;
			case '*':
				res = num1 * num2;
				printf("The multiplication of %d %c %d is %d.\n",num1, opr, num2, res);
				break;
			case '/':
				if (num2 == 0)
					printf("Divion is not possible as the denominator is zero\n");
				else
				{
					res1 = (float)num1/num2;
					printf("The divion of %d %c %d is %.2f.\n",num1, opr, num2, res1);
				}
				break;
			default:
				printf("Invalid operand entered.\n");
				break;
		}

		while ((getchar()) != '\n');
		printf("Do you want to continue to use calculator.(y/n)\n");
		scanf(" %c",&choice);

	}while (choice != 'n' && choice != 'N');

	return 0;
}

