#include "main.h"

/**
* _strncat - Concatenate two strings, using most n byte from src
* @dest: pointer to the destination string
* @src: pointer to the source string
*@n: maximum number of bytes to copy from src
*
* Return: pointer to the concatinated string (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	char *y = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}


	*dest = '\0';

	return (y);
}
