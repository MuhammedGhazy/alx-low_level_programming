#include "main.h"
/**
 * _strdup - function returns a pointer to a newly allocated memory
 *	containing a copy of the string given as parameter.
 * @str: input string
 *
 * Return: On success, the function returns a pointer to the duplicated string.
 *	It returns NULL if insufficient memory was available.
*/
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	/* +1 on the size puts the end of string char */
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
	return (NULL);
	}
	else
	{
	for (; i < size; i++)
	m[i] = str[i];
	}
	return (m);
}
