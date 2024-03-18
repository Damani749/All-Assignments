#include<stdio.h>

void print_array(int *arr, int size);
void remove_dup(int *arr, int size);
void sort_array (int *arr, int size);

int main()
{
	int arr[] = {13, 45, 90, 36, 29, 67, 84, 36, 21, 90, 93, 54, 13, 88, 36};
	int *ptr = arr;
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("The original elements in th array are: ");
	print_array(arr,size);
	remove_dup(arr,size);

	return 0;
}

void print_array(int *arr,int size)
{
	for (int i=0; i < size ; i++)
	{
		printf("%d ", arr[i]);
	}
}

void remove_dup(int *arr, int size)
{
	printf("\nThe unique elements in the sorted manner of array are: ");
	int flag;
	for (int i=0; i<(size); i++)
	{
		flag = 1;
		for (int j=i+1; j<size; j++)
		{
			if (arr[i] == arr[j])
			{
				flag = 0;
				break;
			}
		}
	if (flag == 1)
			printf("%d ",arr[i]);
	sort_array(arr, size);
	}
	printf("\n");
}

//--------------------------SELECTION SORT------------------------------------------------//

void sort_array(int *arr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}



















