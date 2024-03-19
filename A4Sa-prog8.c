#include <stdio.h>

int fibonacci_next();

int main() 
{
    int num;
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    for (int i = 0; i < num; i++) 
	{
        printf("%d ", fibonacci_next());
    }
	printf("\n");
    return 0;
}

int fibonacci_next() 
{
    static int first = 0, second = 1, next;

    next = first + second;
    first = second;
    second = next;

    return next;
}

