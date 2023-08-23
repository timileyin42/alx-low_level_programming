#include "main.h"

/**
* _strncpy - Copy at most n characters from src to dest
* @dest: Destination string
* @src: Source string
* @n: Maximum number of characters to copy
*
* Return: Pointer to the destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int y = 0;

	/* Copying of characters from sources to destination */
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y]; /* Copying the currents character */
		y++;
	}

	/* fill the remaining space in destination with null characters */
	while (y < n)
	{
		dest[y] = '\0'; /* fill with null characters */
		y++;
	}

	return (dest); /* returning the modified destination string */
}
