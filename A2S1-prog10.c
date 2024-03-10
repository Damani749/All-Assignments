#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	printf("Enter any single character to know whether it is uppercase, lowercase, digit or any other character.\n");
	scanf("%c", &ch);

	if ((ch >= 65 && ch<= 90) || (ch >= 97 && ch <=122))
	{
		printf("The given input character is an ALPHABET.\n");

		if (ch >= 65 && ch <= 90)
		{
			printf("The given character is an UPPERCASE\n");
		}
		else
		{
			printf("The given character is a LOWERCASE.\n");
		}
	}

	else if (ch >= 48 && ch <= 57)
	{
		printf("The given character is a DIGIT.\n");
	}

	else if (ch == 9 || ch == 10 || ch == 32 || ch == 13)
	{
		printf("The given character is a SPACE.\n");
	}

	else
		printf("The given character is not listed above.\n");
	
	return 0;
}
