#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * 
 * Descrption: Print of yhe value
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastd);
	else if (lastd == 0)
		 printf("Last digit of %i is %i and is 0\n", n, lastd);
	else if (lastd < 6 && lastd != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastd);
	return (0);
}
