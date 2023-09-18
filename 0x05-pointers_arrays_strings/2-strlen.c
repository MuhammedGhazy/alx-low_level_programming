#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int cou;

	for (cou = 0; *s != '\0'; s++)
		++cou;

	return (cou);
}
