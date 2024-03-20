#include <stdio.h>

int fibonacci(int n);
void print_fibonacci(int n);

int main() 
{
    int numTerms = 10; // Number of terms to print
    print_fibonacci(numTerms);
    return 0;
}

int fibonacci(int n) 
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void print_fibonacci(int n) 
{
    int i, first = 0, second = 1, next;
    
    printf("First %d terms of Fibonacci series: ", n);    
    for (i = 0; i < n; i++) 
	{
        if (i <= 1)
            next = i;
        else 
		{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
	printf("\n");
}
