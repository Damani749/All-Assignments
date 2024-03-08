#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter any number whose table you want to print.\n");
	scanf("%d",&num);
    if (num <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Multiplication table for %d:\n", num);
    
    for (int count = 1; count <= 10; count++) 
	{
        printf("%d x %2d = %2d\n", num, count, num * count);
    }
    return 0;
}
