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
        int d, p;
        
        for (d = '0'; d < '9'; d++)
        {
	
	for (p = d + 1; p <= '9'; d++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	continue;
        putchar(',');
	putchar(' ');
       	}
	}
	}
	putchar('\n');

	return (0);
}
