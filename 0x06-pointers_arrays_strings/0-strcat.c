#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: The destination string
* @src: The source string to be append to dest
* Return: A pointer to the resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	char *concat = dest; /* declaring dest as my concat variable */

	while (*dest != '\0')
		dest++;

	while (*src != '\0')

	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (concat);


}
