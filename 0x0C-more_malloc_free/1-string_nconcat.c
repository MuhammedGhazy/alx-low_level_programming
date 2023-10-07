#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - function
 *
 * @s1: input pointer
 * @s2: input pointer
 * @n: number of byte(s)
 *
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, co, s1_l, s2_l;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the length of the string*/
	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	/* memory reservation-for case 1 & 2*/
	str = malloc(s1_l + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str.*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second string into str.*/
	for (co = 0; co < n; co++)
	{
		str[i] = s2[co];
		i++;
	}
	str[i] = '\0';
	return (str);
}

