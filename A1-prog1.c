#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter two numbers as per your choice.\n");
	int a,b,sum,diff,product;
	scanf("%d%d",&a, &b);
	printf("The two numbers entered are %d and %d\n", a,b);

	//----------------------------------------SUM--------------------------------------//
	sum = a + b;
	printf("Sum of two numbers is: %d\n", sum);
	
	//----------------------------------------DIFF------------------------------------//
	
	if (a < b)
	{
		diff = b - a;
		printf("The difference between a and b is %d\n",diff);
	}
	if (a > b)
	{
		diff = a - b;
		printf("The difference between a and b is %d\n",diff);
	}
	
	//---------------------------------------PRODUCT---------------------------------//
	product = a * b;
	printf("Product of two numbers is: %d\n", product);

	return 0;
}
