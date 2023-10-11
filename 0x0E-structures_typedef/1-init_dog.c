#include "dog.h"
/**
 *init_dog - intialization
 *@d: initalize the dog
 *@name: dog's name
 *@age: dog's age
 *@owner: owner's name
 *
 *Description: initalizing the dog variables
 *
 * Return: void.
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
