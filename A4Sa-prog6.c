#include <stdio.h>

int factorial(int n);
int binomial_Coefficient(int n, int r);
void Pascal_Triangle(int rows);

int main() 
{
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    Pascal_Triangle(rows);
    return 0;
}

int factorial(int n) 
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int binomial_Coefficient(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void Pascal_Triangle(int rows) 
{
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j <= i; j++) 
            printf("%5d ", binomial_Coefficient(i, j));

        printf("\n");
    }
}
