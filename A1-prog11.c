#include<stdio.h>
#include<limits.h>

int main()
{
	int ch = sizeof(char);
	int uch = sizeof(unsigned char);
	int sint = sizeof(short int);
	int unsint = sizeof (unsigned short int);
	int inte = sizeof (int);
	int unint = sizeof (unsigned int);
	int lint = sizeof (long int);
	int unlint = sizeof (unsigned long int);
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	printf("Data type\t\t\tSize\t\t\tFormat Specifier\t\t\tRange\n");
	printf("-------------------------------------------------------------------------------------------------------------------\n");

    printf("char %30d \t\t\t\t%%c %30d to %d\n",ch, SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char %21d \t\t\t\t%%c \t\t\t\t0 to %d\n",uch, UCHAR_MAX);
 
    printf("short int %25d \t\t\t\t%%hd %29d to %d\n",sint, SHRT_MIN, SHRT_MAX);
    printf("unsigned short int %16d \t\t\t\t%%hu \t\t\t\t0 to %d\n",unsint, USHRT_MAX);
 
	printf("signed int %24d \t\t\t\t%%d %30d to %d\n",inte, INT_MIN, INT_MAX);
    printf("unsigned int %22d \t\t\t\t%%u \t\t\t\t0 to %u\n",unint, UINT_MAX);

    printf("signed long int %19d \t\t\t\t%%ld %29ld to %ld\n",lint, LONG_MIN, LONG_MAX);
	printf("unsigned long int %17d \t\t\t\t%%lu \t\t\t\t0 to %lu\n\n",unlint, ULONG_MAX);
	return 0;
}
