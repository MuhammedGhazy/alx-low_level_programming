#include <stdio.h>
/**
 *main - func print the number of argument passed to programe
 *
 * @argc: number of argument
 *
 * @argv: array of argument
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv; /* Ignore argv */
	printf("%d\n", argc - 1);

	return (0);
}

