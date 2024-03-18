#include<stdio.h>

void accept_marks(int *arr);
void print_marks(int *arr);
int total_avg(int *arr);

int main()
{
	int arr[5], total;
	float avg;
	int *ptr = arr;

	accept_marks(arr);
	print_marks(arr);
	total = total_avg(arr);
	
	printf("The marks out of 500 is %d.\n", total);
	avg = (float) total/5;
	printf("The average marks of 5 subjects are: %.2f\n",avg);
	return 0;
}


void accept_marks(int *arr)
{
	printf("Enter marks of five subjects out of 100: \n");
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void print_marks(int *arr)
{
	printf("Printing marks of five subjects.\n");
	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

int total_avg(int *arr)
{
	printf("\nPrinting total marks of all five subjects.\n");
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}









