#include "main.h"

/**
 * print_alphabet - on the _putchar function to print the alphaber a - z
 *
 * Return(0)
 *
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
