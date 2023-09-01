#include "main.h"

/**
* _memcpy - Copying of n bytes from memory area src to memory area dest.
* @dest: pointer to the destination memory area.
* @src: pointer to the source memory area.
* @n: Number of bytes to be copy.
*
* Return: pointer to the destnation memory area.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ch = dest; /* storing of the original pointer */

	while (n > 0)

	{
		*dest = *src; /* coyping of the bytes from source to destination */
		dest++; /* moving of the byte to the destination */
		src++; /* copying of the bytes from the source pointer */
		n--; /* reducing the count of bytes left to copy */
	}

	return (ch);
}

