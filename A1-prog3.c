#include<stdio.h>

int main()
{
	char ch;
	int num;
	printf("Enter any character as per your choice.\n");
	scanf("%c",&ch);

	printf("The ASCII value of your entered character in decimal is %d\n",ch);
	printf("The ASCII value of your entered character in octal is %o\n",ch);
	printf("The ASCII value of your entered character in heaxdecimal is %x\n",ch);
	
	printf("Enter any ASCII value as per your choice.\n");
	scanf("%d",&num);
	printf("The character for user entered ASCII value is %c\n",num);

	return 0;
}

