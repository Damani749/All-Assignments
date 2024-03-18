#include<stdio.h>

int main()
{
	int i,j,num = 65;
	int temp = num;
	for (i = 0; i < 4; i++)
	{	
		num = num + i; 
		for (j = 4; j > i; j--)
		{
			printf("%c", num);
			num +=1;
		}
		num = 65;
		printf("\n");
	}
	return 0;
}
