#include<stdio.h>

int main()
{
	char ch = '\n',ch1 = '\t', ch2 = '\a', ch3 = '\b', ch4 = '\r';
	printf("Printing the ASCII value of the given escape sequences: \n");
	printf("The ASCII value of \\n is %d.\n",ch);
	printf("The ASCII value of \\t is %d.\n",ch1);
	printf("The ASCII value of \\a is %d.\n",ch2);
	printf("The ASCII value of \\b is %d.\n",ch3);
	printf("The ASCII value of \\r is %d.\n",ch4);
	return 0;
}
