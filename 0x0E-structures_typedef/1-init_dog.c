#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - Initializes a variable of type struct dog
 *@d: The Pointer of the dog structure
 *@name: name of the dog
 *@age: of the dog
 *@owner: owner of the dog
 *
 * Return: Nothing
 */

void init_dog(dog *d, char *name, float age, char *owner)
{
	if (d !== NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

