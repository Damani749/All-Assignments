#include<stdio.h>

void print_array(int *arr, int size);
int linear_search (int *arr, int size, int num);

int main()
{
	int arr[] = {13, 45, 90, 29, 67, 84, 36, 21, 93, 54, 88};
	int *ptr = arr;
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("The original elements in th array are: ");
	print_array(arr,size);
	int result = linear_search(arr, size, 55);
	(result == NULL) ? printf("Element is not present in the given array, NULL is returned.\n") : printf("Element is present at index %d\n", result);

	return 0;
}

void print_array(int *arr,int size)
{
	for (int i=0; i < size ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int linear_search(int *arr, int size, int num)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num)
			return i;
	}
	printf("\n");
	return NULL;
}
