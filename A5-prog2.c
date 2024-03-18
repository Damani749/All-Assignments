#include<stdio.h>

void accept_array(int *arr);
void print_array(int *arr);

int ele;

int main()
{
	printf("Enter the number of elements you want to store in array: ");
	scanf("%d", &ele);
	int arr[ele];
	int *ptr = arr;

	accept_array(arr);
	print_array(arr);
	
	return 0;
}

void accept_array(int *arr)
{
	for (int i=0; i < ele; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void print_array(int *arr)
{
	for (int i=0; i<ele; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
