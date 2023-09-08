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
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII repo*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
