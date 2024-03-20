#include <stdio.h>

void print_binary(int num) 
{
    if (num > 1)
        print_binary(num / 2);
    
    printf("%d", num % 2);
}

int main() 
{
    int number = 25; // Number to convert to binary
    printf("Binary representation of %d is: ", number);
    print_binary(number);
	printf("\n");
    return 0;
}
