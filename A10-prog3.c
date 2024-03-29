#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE (sizeof(int) * 4)

void binary(int n, int *bin);
void print_binary(int *bin);

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
	{
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);
    int bin[MAX_SIZE];
    binary(num, bin);
    print_binary(bin);

    return 0;
}

void binary(int n, int *bin) 
{
    int index = MAX_SIZE - 1;
    while (index >= 0) {
        bin[index] = n & 1;
        n >>= 1;
        index--;
    }
}

void print_binary(int *bin) 
{
    for (int index = 0; index < MAX_SIZE; index++) 
	{
        printf("%d", bin[index]);
    }
    printf("\n");
}
