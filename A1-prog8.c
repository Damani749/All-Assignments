#include<stdio.h>

int main()
{
	int a,b,c;
	float avg;

	printf("Enter three integers whose average you want: ");
	scanf("%d%d%d", &a,&b,&c);
	
	avg = (a + b + c)/3;
	printf("The average of three integers is %.2f.\n",avg);

	return 0;
}
