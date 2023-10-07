#include "main.h"

/**
 * array_range - function creats an array of int
 *
 * @min: starting int
 * @max: max int
 *
 * Return: array of int
*/

int *array_range(int min, int max)
{
	int len, counter;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (counter = 0; counter < len; counter++)
		ptr[counter] = min++;
	return (ptr);
}
