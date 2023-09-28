#include "main.h"

/**
 * _sqrt_recursion - function
 *
 * @n: input
 * @val: sqrt
 *
 * Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function
 *
 * @n: input
 * @val: sqrt
 *
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
