#include "main.h"

/**
 * rev_string - reversed a string
 *
 * @s: srting parameter input
 *
 * Return: Nothing
*/
void rev_string(char *s)
{
	int l, i;
	char Z;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		Z = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = Z;
	}
}
