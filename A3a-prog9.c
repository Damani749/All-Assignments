#include<stdio.h>

int main()
{
	int n1, n2, temp;
	printf("Enter two numbers whose GCD you want to find.\n");
	scanf("%d%d",&n1,&n2);

	if (n2>n1)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	while (n1 % n2 != 0)
	{
		temp = (n1 % n2);
		n1 = n2;
		n2 = temp;
	}
	printf("The GCD is %d\n", n2);
	return 0;
}


