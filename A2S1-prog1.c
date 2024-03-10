#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num,deno,res;
	printf("Enter a numerator and denominator to perform Division.\n");
	scanf("%f %f", &num, &deno);

	if (deno == 0)
		printf("The denominator cannot be 0. Divion by zero is invalid.\n");
	else
		printf("Result of your division is %.2f.\n",res = num/deno);
	
	return 0;
}
