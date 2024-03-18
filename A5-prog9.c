#include <stdio.h>

int binary_search(int arr[], int size, int target);

int main() 
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int index = binary_search(arr, size, target);

    if (index != -1) 
        printf("Element found at index: %d\n", index); 
	
	else 
        printf("Element not found in the array\n");

    return 0;
}

int binary_search(int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;

    while (left <= right) 
	{
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) 
		{
            return mid;
        } 
		else if (arr[mid] < target) 
		{
            left = mid + 1;
        } 
		else 
		{
            right = mid - 1;
        }
    }

    return -1; // Element not found
}
