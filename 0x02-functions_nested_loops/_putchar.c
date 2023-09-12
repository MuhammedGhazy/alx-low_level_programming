#include <unistd.h>
#include "main.h"

/**
 *
 * _putchar - writes the characre c to stdout
 * @c: the character to print
 *
 * Return: On success 1,
 *	On error, -1 is returnd, and error is set appropiately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
