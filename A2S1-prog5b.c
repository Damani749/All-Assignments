#include<stdio.h>

int main()
{
	int a,b,c,max;
	printf("Enter the three numbers and find the greater one out of them.\n");
	scanf("%d%d%d",&a,&b,&c);

	max = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d is maximum number.\n",max);
	return 0;
}
