#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,peri,s;
	float area;
	printf("Find the perimeter and area of triangle.\n");
	printf("Enter the values of three sides of a triangle a,b and c to find perimeter and area\n");
	scanf("%d%d%d", &a,&b,&c);
	
	printf("The perimeter of a triangle is %d.\n", peri = a+b+c);
	s = peri;
	area = sqrt(s * (s-a) * (s-b) * (s-c));
	printf("The area of triangle is %f.\n",area);
	return 0;

}
