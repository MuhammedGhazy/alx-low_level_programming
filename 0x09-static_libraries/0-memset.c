#include "main.h"
/**
 * *_memset - Memory
 *
 * @s: Pointer
 * @b: constant
 * @n: Max Bytes
 * Return: Pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; n > 0; m++, n--)
	{
		s[m] = b;
	}
	return (s);
}
