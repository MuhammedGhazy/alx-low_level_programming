#include <stdio.h>
/**
 *main - func print the number of argument passed to programe, followed by a new line
 *
 * @argc: number of argument
 *
 * @argv: array of argument
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
