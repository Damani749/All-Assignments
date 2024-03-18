#include<stdio.h>

void print_array(int *arr, int size);
void bubble_sort(int *arr, int size);

int main()
{
	int arr[] = {45, 90, 29, 67, 84, 36, 21, 93, 54, 13, 88};
	int *ptr = arr;
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("The original elements in th array are: ");
	print_array(arr,size);
	printf("The sorted array is as follows: ");
	bubble_sort(arr,size);
	print_array(arr,size);

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


//--------------------------BUBBLE SORT------------------------------------------------//

void bubble_sort(int *arr, int size)
{
	int flag;
	for(int i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (int j = 0; j < size -i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	printf("\n");
}








