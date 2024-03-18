#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	srand(time(0));
	int magic_number = rand() % 1000 + 1;
	int user_guess, chances = 10;

	printf("Welcome to the Guess the Magic Number Game!\n");
	printf("I have selected a number between 1 and 1000. You have 10 chances to guess it.\n");

	do 
	{
		printf("Enter your guess: ");
		scanf("%d", &user_guess);

		if (user_guess == magic_number) 
		{
			printf("Congratulations! You won.\n");
			break;
		} 
		else if (user_guess < magic_number) 
		{
			printf("The magic number is greater. Guess again!\n");
		} 
		else 
		{
			printf("The magic number is smaller. Guess again!\n");
		}

		chances--;

		if (chances == 0) 
		{
			printf("Sorry, you have run out of chances. The magic number was %d.\n", magic_number);
			break;
		}
	} while (1);

	return 0;
}
