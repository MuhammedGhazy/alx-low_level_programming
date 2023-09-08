#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Using sizeof to print various types
 *
 * Return: Alawys 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
