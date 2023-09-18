#include "main.h"
/**
 * swap_int - swaps the value of two int
 *	using two input parameter
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
