#include "dog.h"
#include <stddef.h>

/**
 * init_dog - This function initialization the dog
 *
 * @ptr: My struct passed by poninter to initialization
 *
 * @name: dog's name input
 *
 * @age: dog's age input
 *
 * @owner: owner's name input
 *
 *  Return: (void).
*/

void init_dog(struct dog *ptr, char *name, float age, char *owner)
{
	if(ptr == NULL)
	{
		/* Nothing */
	}
	else
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}
}
