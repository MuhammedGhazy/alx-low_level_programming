#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function print structutr
 *
 * @ptr: pointer point to my structure
 *
 * Return: My structure by pointer but the standrd return is void.
*/

void print_dog (struct dog *ptr)
{
	if(ptr == NULL)
	{
		/* Nothing */
	}
	else
	{
		printf("%s\n", ptr->name ? ptr->name : "(nill)");
		printf("%0.1f\n", ptr->age);
		printf("%s\n", ptr->owner ? ptr->owner : "(nill)" );
	}
}


