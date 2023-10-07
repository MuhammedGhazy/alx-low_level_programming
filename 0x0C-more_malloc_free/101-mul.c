#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *
 * @str: pointer to the string to print
 *
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an int
 *
 * @s: char type string
 *
 * Return: int converted
*/

int _atoi(const char *s)
{
	int si = 1;

	unsigned long int r = 0, f, i;


	for (f = 0; !(s[f] >= 48 && s[f] <= 57); f++)
	{
		if (s[f] == '-')
		{
			si *= -1;
		}
	}
	for (i = f; s[i] >= 48 && s[i] <= 57; i++)
	{
		r *= 10;
		r += (s[i] - 48);
	}
	return (si * r);
}

/**
 * print_int - prints an int
 *
 * @n: int
 *
 * Return: Always 0 (Success)
*/

void print_int(unsigned long int n)
{
	unsigned long int d = 1, i, r;

	for (i = 0; n / d > 9; i++, d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
	{
		r = n / d;
		_putchar ('0' + r);
	}
}

/**
 * main - print the result, followed by a new line
 *
 * @argc: int
 * @argv: list
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
