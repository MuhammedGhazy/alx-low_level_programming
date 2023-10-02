#include "main.h"
/**
 * *_memcpy - Copies
 * @dest: Memory
 * @src: Source
 * @n: Length
 * Return: Pointer dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
