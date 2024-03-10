#include<stdio.h>

int main()
{
	int n1, n2, n3;
	printf("Enter three numbers to know which one is greater one.\n");
	scanf("%d%d%d",&n1,&n2,&n3);

	if (n1 > n2 && n1 > n3)
		printf("%d is the greatest among the three.\n", n1);
	else if (n2 > n1 && n2 > n3)
		printf("%d is the greatest among the three.\n", n2);
	else if (n3 > n1 && n3 > n2)
		printf("%d is the greatest among the three.\n", n3);
	else if (n1 == n2 && n2 == n3)
		printf("All three numbers are equal.\n");
	else
		printf("Two numbers are equal, and they are greater than the third.\n");

	return 0;
}

