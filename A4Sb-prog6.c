#include <stdio.h>

void print_hexadecimal(int num) 
{
    char hex_digits[] = "0123456789ABCDEF";
    
    if (num > 15)
        print_hexadecimal(num / 16);
    
    printf("%c", hex_digits[num % 16]);
}

int main() 
{
    int number = 305; // Number to convert to hexadecimal
    printf("Hexadecimal representation of %d is: ", number);
    print_hexadecimal(number);
	printf("\n");
    return 0;
}
