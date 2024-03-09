#include<stdio.h>

int main()
{
	int num;
	printf("Enter any 4 digit number.\n");
	scanf("%d",&num);

	int a = num / 1000;
    int num1 = a * 1000;

    int b = (num % 1000) / 100;
    int num2 = b * 100;

    int c = (num % 100) / 10;
    int num3 = c * 10;

    int d = num % 10;
    int num4 = d;
	
	printf("The face value of a given number is %4d\t %d\t %d\t %d\n",a,b,c,d);
	printf("The place value of %d is %d.\n",a,num1);
	printf("The place value of %d is %d.\n",b,num2);
	printf("The place value of %d is %d.\n",c,num3);
	printf("The place value of %d is %d.\n",d,num4);
	printf("Reversing the number by changing the decimal places is %d%d%d%d\n",d,c,b,a);
	return 0;
}
