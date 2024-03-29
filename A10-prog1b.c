#include<stdio.h>

int count1 (int n);
int count = 0;

int main()
{
	int num;
	printf("Enter the number you want to find the number of bits '1' in it in Binary form.\n");
	scanf("%d",&num);
	int result = count1(num);
	printf("The number of bits '1' in binary of %d is %d.\n",num, count);
	return 0;
}

int count1 (int n)
{
	while(n)
	{
		count = count + (n & 1);
		n = (n >> 1);
	}
	return count;
}
