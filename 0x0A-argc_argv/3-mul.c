#include <stdio.h>
#include <stdlib.h>

/**
 * main-
 *
 * @argc: Number of command line arguments
 *
 * @argv: pointer to an arr of command line arguments
 *
 * Return: Always 0 (Success), non-zero fail
*/

int main(int argc, char **argv)
{
	int summing;

	if (argc == 3)
	{
		summing = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", summing);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
