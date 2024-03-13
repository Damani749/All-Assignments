#include<stdio.h>

int main()
{
	int empid,depno;
	char dsgn;
	printf("Enter your employee ID: ");
	scanf("%d",&empid);
	printf("Enter your Designation code: ");
	scanf("%*c%c",&dsgn);
	printf("Enter the department numer out of 10,20,30 and 40: ");
	scanf("%d", &depno);
	if ((depno == 10 || depno == 20 || depno == 30 || depno == 40) && (dsgn == 'M' || dsgn == 'S' || dsgn == 's' || dsgn == 'C'))
	{
		switch(depno)
		{
			case 10: 
				printf("Employee with employee ID %d is working in 'Marketing' department ",empid);
				break;
			case 20:
				printf("Employee with employee ID %d is working in 'Management' department ",empid);
				break;
			case 30:
				printf("Employee with employee ID %d is working in 'Sales' department ",empid);
				break;
			case 40:
				printf("Employee with employees ID %d is working in 'Designing' department ",empid);
		}
				
		switch(dsgn)
		{
			case 'M':
				printf("as Manager.\n");
				break;
			case 'S':
				printf("as Supervisor.\n");
				break;
			case 's':
				printf("as Security check.\n");
				break;
			case 'C':
				printf("as clerk.\n");
				break;
		}
	}
	else
		printf("Department number or designation code given by you is invalid.\n");
	return 0;	
}
