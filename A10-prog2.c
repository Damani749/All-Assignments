#include<stdio.h>

#define MAX_SIZE	(sizeof(int) * 4)
void binary(int n, int *bin);
void print_binary(int *bin);



int main()
{
	int num;
	int bin[MAX_SIZE];
	printf("Enter the number you want to convert in Binary using bitwise operators.\n");
	scanf("%d", &num);\
	binary(num,bin);
	print_binary(bin);
	return 0;
}

void binary(int n, int *bin)
{
	int index = MAX_SIZE-1;

	while(index >= 0)
	{
		bin[index] = n & 1;
		n = (n>>1);
		index --;
	}
}

void print_binary(int *bin)
{
	for (int index = 0; index < MAX_SIZE; index++)
	{
		printf("%d", bin[index]);
	}
	printf("\n");
}

