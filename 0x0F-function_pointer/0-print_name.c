#include <function.h>
/**
 * print_name - prints a name
 *
 * @name: the string name input
 *
 * @f: the printing function pointer
 *
 * Return: VOID.
*/
void print_name(char *name, void (*f) (char *))
{
	if(name && f)
	{
		f(name);
	}
}

