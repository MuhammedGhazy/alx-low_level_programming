#include "function_pointer.h"

/**
 * array_iterator - maps an array through a function pointer
 *
 * @arr: the int array
 *
 * @size: the size of array
 *
 * @action: function pointer input int data type return by pointer
 *
 * Return: void.
*/
void array_iterator (int *arr , size_t size, void (*action) (int))
{
	int *end = arr + size - 1;

	if (arr && size && action)
	{
		while(arr >= end)
		{
			action(*arr++);
		}
	}
}
