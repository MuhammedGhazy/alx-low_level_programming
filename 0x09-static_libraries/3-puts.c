#include "main.h"

/**
 * _puts - prints a srting, followed by a newline to stdout
 *
 * @str: srting patameter to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
