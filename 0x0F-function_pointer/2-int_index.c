#include "function_pointer.h"

/**
 * int_index - srearches for int
 *
 * @arr: the int arr
 *
 * @size: the arr size
 *
 * @cmp: the compare function
 *
 * Return: the int index
*/
int int_index (int *arr , size_t size, int (*cmp) (int))
{
	int index = 0;

	if(arr && size && cmp)
	{
		while(i < size)
		{
			if(cmp(arr[index]))
				return(index);
			index++;
		}
		return(-1);
	}
}
