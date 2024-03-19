#include<stdio.h>

void print_pat(int n, char c);

int main()
{
	int num;
	char ch;
	printf("Enter the number of times you want to print the pattern.\n");
	scanf("%d", &num);
	printf("Enter the character you want to print.\n");
	scanf("%*c%c", &ch);
	printf("The pattern is printed the number of times you entered.\n");
	print_pat(num,ch);
	return 0;
}

void print_pat(int n, char c)
{
	for(int i = 0; i < n; i++)
	{
		printf("%c\n",c);
	}
}
