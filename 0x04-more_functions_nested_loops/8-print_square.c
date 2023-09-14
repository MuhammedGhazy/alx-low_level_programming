#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 *  Return: Always 0 (Success)
*/
void print_square(int size)
{
	int r, x;

	for (r = 1; r <= size; r++)
	{
		for (x = 1; x <= size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
