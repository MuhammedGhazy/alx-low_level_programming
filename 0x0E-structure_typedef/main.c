#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct dog obj;

	init_dog(&obj, "poppy", 2.5, "joun");
	printf("My Name is %s, And My Age is %0.1f, And My Friend Name Is %s\n", obj.name, obj.age, obj.owner);
	print_dog(&obj);

	return (0);
}
