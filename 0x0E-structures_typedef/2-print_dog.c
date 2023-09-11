#include "dog.h"

/**
* print_dog - print the details of a structure dog.
* @d: A pointer to the structure of the dog to print.
*
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %1f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
