#include<stdio.h>

int power (int base, int index);

int main()
{
	int result;
	result = power (2,5);
	printf("The result of 2 power 5 is %d.\n", result);
	return 0;
}

int power (int base, int index)
{
	int answer = 1;
	for (int i = 1; i <= index; i++)
	{
		answer = answer * base;
	}
	return answer;
}

