#include<stdio.h>

int main() 
{
    int num, count = 0, current_num, is_prime;

    printf("Enter a number: ");
    scanf("%d", &num);
    current_num = num + 1;
    printf("The first 5 prime numbers after %d are:\n", num);

    while (count < 5) 
	{
        is_prime = 1; // Assume current number is prime
        for (int i = 2; i <= current_num / 2; i++) 
		{
            if (current_num % i == 0) 
			{
                is_prime = 0; // Not a prime number
                break;
            }
        }

        if (is_prime) 
		{
            printf("%d\n", current_num);
            count++;
        }
        current_num++;
    }
    return 0;
}
