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
	printf("Size of a cahr: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
