#include "main.h"

/**
 * *_memset - fills memory
 *
 * @s: pointer
 * @b: constant
 * @n: max byte(s)
 *
 * Return: S
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * *_calloc - function allocated memory
 *
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
