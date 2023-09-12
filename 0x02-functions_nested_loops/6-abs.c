#include "main.h"
/**
 * _abs - function that computes the absalute
 *	value of an int
 *
 * @n: takes in int type input for fun
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
