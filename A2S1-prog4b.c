#include<stdio.h>

int main()
{
	int n1, n2, max;
	printf("Enter two numbers to find the greater one.\n");
	scanf("%d %d",&n1,&n2);
	
	if (n1 != n2)
	{
		//---------------USING TERNARY OPERATOR------------------//
		max = (n1>n2)?n1:n2;
		printf("The greater number is %d.\n",max);
	}
	else
		printf("Both the numbers are equal. No one is greater.\n");
	
	return 0;
}
	

