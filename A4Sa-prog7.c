#include<stdio.h>

void fibo(int n);

int main()
{
	int num;
	printf("Enter the number upto which you want to print fibonacci sequence.\n");
	scanf("%d", &num);
	fibo(num);
	return 0;
}

void fibo(int n)
{
	if (n == 0 || n == 1)
		printf("1\n");
	else
	{
		int a=1, b=1, temp;
		for (int i = 1; i < n; i++)
		{
			temp = a + b;
			a = b;
			b = temp;
		}

		printf("%d\n", temp);
	}
}
