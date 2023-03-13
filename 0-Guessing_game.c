#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random_number;  // Declare variable for random number.
	int number;  // Declare variable for user's number.
	char name[20];
	int i = 1;

	srand(time(NULL));  // Seeds the sequence of random numbers to the current time.

	random_number = (rand() % 10) + 1;  // Generate random number between 1 and 5.

	printf("Hello, enter a username:\n");
	scanf("%s", &name);

	printf(" %s, Guess a number between 1 and 10:\n", name);

	while (i < 10)
	{
		scanf("%d", &number);

		if (number == random_number)
		{
			printf("Congratulations %s, you won!\n", name);
			printf("it took you %d tries\n", i);
			break;
		}
		else if (number > random_number)
		{
			printf("whoah too high, try again\n");
		}
		else
		{
			printf("oops, thats too low. How about another go?\n");
		}

		i++;

		if (i == 10)
		{
			printf("Sorry, you didn't guess the number in 10 tries. The number was %d\n", random_number);
		}
	}
}
