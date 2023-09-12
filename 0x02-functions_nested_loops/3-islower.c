#include "main.h"

/**
 * _islower - function to check if
 *	character is lower caser
 * @c: checks input of function
 *
 * Returne: returns 1 if 'c' is lowercase
 *	otherwise akways 0 (success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
