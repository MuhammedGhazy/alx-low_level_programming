#include "main.h"
/**
 * *_strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *x = needle;

		while (*i == *x && *x != '\0')
		{
			i++;
			x++;
		}
		if (*x == '\0')
			return (haystack);
	}
	return (0);
}
