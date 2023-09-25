#include "main.h"
/**
 * *_strpbrk - Search
 * @s: String
 * @accept: String
 * Return: Pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i, x;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (accept[x] == s[i])
			{
				p = &s[i];
				return (p);
			}
			x++;
		}
		i++;
	}
	return (0);
}
