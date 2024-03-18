#include<stdio.h>

void accept_array(int *arr);
void print_array(int *arr);
void reverse_array(int *arr);

int ele;

int main()
{
	printf("Enter the number of elements you want to store in array: ");
	scanf("%d", &ele);
	int arr[ele];
	int *ptr = arr;

	accept_array(arr);
	printf("The array in the element before reversing are: \n");
	print_array(arr);
	reverse_array(arr);
	printf("The array in the element after reversing are: \n");
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
	printf("The elements entered are: \n");
	for (int i=0; i<ele; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

void reverse_array(int *arr)
{
	for(int i =0,j=(ele-1) ;i<j; i++,j--)
	{
		int temp = arr[i]; 
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

