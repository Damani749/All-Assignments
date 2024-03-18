#include <stdio.h>

int main() 
{
    int i, j, space, rows = 4;
    char ch;

    for (i = 0; i <= rows; i++) 
	{
        ch = 'G';
        for (j = 1; j <= rows - i; j++) 
		{
            printf("  ");
        }

        for (j = 0; j <= 2 * i; j++) 
		{
            if (j < i) 
                printf("%c ", ch++);
			
			else 
                printf("%c ", ch--);
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 0; i--) 
	{
        ch = 'G';
        for (j = 1; j <= rows - i; j++) 
            printf("  ");

        for (j = 0; j <= 2 * i; j++) 
		{
            if (j < i) 
                printf("%c ", ch++);

			else 
                printf("%c ", ch--);
        }
        printf("\n");
    }
    return 0;
}
