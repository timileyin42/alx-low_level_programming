#include "dog.h"

/**
* _strlen - calculating the length of string.
* @s: The input string.
*
* Return: The length of the string.
*/

unsigned int _strlen(char *s)
{
	unsigned int length = 0;

	while (s[length])
		length++;
	return (length);
}

/**
* _strcpy - copying of string t the destination buffer.
* @dest: The destination buffer.
* @src: The source string.
*
* Return:  A pointer to destination buffer.
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';

	return (dest);
}

/**
* new_dog - creating a new dog with the copies of name and owner.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: A pointer to the newley created dog_t structure.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCopy, *ownerCopy;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	nameCopy = _strcpy(malloc(_strlen(name) + 1), name);
	if (nameCopy == NULL)
	{
		free(newDog);
		return (NULL);
	}
	
	ownerCopy = _strcpy(malloc(_strlen(owner) + 1), owner);
	if (ownerCopy == NULL)
	{
		free(newDog);
		free(nameCopy);
		return (NULL);
	}
	/* _strcpy(ownerCopy, owner); */

	newDog->name = nameCopy;
	newDog->age = age;
	newDog->owner = ownerCopy;

	return (newDog);
}
