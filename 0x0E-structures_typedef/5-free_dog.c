#include "dog.h"

/**
* free_dog - freeing the memory allocated for a dog_t structure.
* @d: A pointer to the dog_t structure to free.
*
* This function free the memory allocated for the name and owner of strings
* within the dog_t structure.
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}
