#ifndef DOG_H
#define DOG_H
/**
 * struct dog - My Structure
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: owner's name
 *
 * Description: just a long dog struct in a big kitty world
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *ptr, char *name, float age, char *owner);
void print_dog (struct dog *ptr);
#endif
