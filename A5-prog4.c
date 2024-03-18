#include<stdio.h>

void accept_array(int *arr);
void print_array(int *arr);
int max_element(int *arr);
int min_element(int *arr);

int ele;

int main()
{
	printf("Enter the number of elements you want to store in array: ");
	scanf("%d", &ele);
	int arr[ele];
	int *ptr = arr;

	accept_array(arr);
	print_array(arr);
	int max_num = max_element(arr);
	int min_num = min_element(arr);

	printf("The maximum element is %d and minimum element is %d.\n", max_num, min_num);
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

int max_element(int *arr)
{
	int max = 0;
	for (int i = 0; i < ele; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}


int min_element(int *arr)
{
	int min = arr[0];
	for (int i = 0; i < ele; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}








