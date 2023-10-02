#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - func check
 *
 * @str: array input
 *
 * Return: Always 0 (Success)
*/

int check_num(char *str)
{
	unsigned int cou;

	cou = 0;
	while (cou < strlen(str))
	{
		if (!isdigit(str[cou]))
		{
			return (0);
		}
		cou++;
	}
	return (1);
}
/**
 * main - func print
 *
 * @argc: count
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int cot;
	int st;
	int sum = 0;

	cot = 1;
	while (cot < argc)
	{
		if (check_num(argv[cot]))
		{
			st = atoi(argv[cot]);
			sum += st;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		cot++;
	}
	printf("%d\n", sum);
	return (0);
}
