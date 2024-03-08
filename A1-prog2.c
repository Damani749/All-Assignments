#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number.\n");
	scanf("%d",&a);

	printf("The number as decimal is %d\n", a);
	printf("The number as character is %c\n", a);
	printf("The number as octal is %o\n", a);
	printf("The number as hexadecimal is %x\n", a);

	return 0;
}
