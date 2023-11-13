#include "main.h"

/**
* _strcpy - functions that copy	the string
* @dest: place to paste the copying file
* @src: file origination
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);

}
