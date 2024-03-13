#include<stdio.h>

int main()
{
	int num, i=0;
	char ch;
	printf("Enter a character.\n");
	scanf("%c",&ch);
	printf("Enter a number.\n");
	scanf("%d", &num);

	while (i < num)
	{
		printf("%-2c", ch);
		i++;
	}
	printf("\n");
	return 0;
}
