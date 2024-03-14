#include<stdio.h>

int main()
{
	int num, count = 1;
	printf("Enter the number whose unique multiplication pairs you want.\n");
	scanf("%d", &num);
	
	// Using while loop
	while (count <= num/2)
	{	
		if (num % count == 0)
		{
			if (count < num/count)
				printf("%d * %d = %d\n", count, num/count, num);
		}
		count++;
	}
	return 0;
}

