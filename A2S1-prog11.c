#include<stdio.h>

int main()
{
	float x,y;
	printf("Enter the coordinates in form of (x,y) to know they are in which quandrant.\n");
	scanf("%f%f",&x,&y);

	if (x ==0 && y == 0)
		printf("The coordinates %.2f and %.2f falls on the origin.\n",x ,y);
	
	else if (x != 0 && y == 0)
		printf("The coordinates %.2f and %.2f falls on x-axis.\n",x ,y);
	
	else if (x == 0 && y != 0)
		printf("The coordinates %.2f and %.2f falls on y-axis.\n",x ,y);

	else if (x > 0 && y > 0)
		printf("The coordinates %.2f and %.2f falls on 1st Quadrant.\n",x ,y);

	else if (x < 0 && y > 0)
		printf("The coordinates %.2f and %.2f falls on 2nd Quadrant.\n",x ,y);
	
	else if (x < 0 && y < 0)
		printf("The coordinates %.2f and %.2f falls on 3rd Quadrant.\n",x ,y);
	
	else if (x > 0 && y < 0)
		printf("The coordinates %.2f and %.2f falls on 4th Quadrant.\n",x ,y);
	
	else
		printf("The coordinates given by you are invalid.\n");
	
	return 0;
}
