#include "main.h"
 /**
  * *_strdup - function return a pointer allocated in memory
  *
  * @*str: input string
  *
  * Return: Always 0 (Success)
  *
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
	return (NULL);

	else
	{
	for (; i < size; i++)
	m[i] = str[i];
	}
	return (m);
}
