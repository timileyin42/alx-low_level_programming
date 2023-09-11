#include "dog.h"

/**
* init_dog - Initializing a dog structure.
* @d: A pointer to the structure of the dog initialized.
* @name: The dog name.
* @age: The age of the dog.
* @owner: the owner of the dog.
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* checking if the pointer to struct is NULL */
	if (d != NULL)
	{
		/* initializing the struct members */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
