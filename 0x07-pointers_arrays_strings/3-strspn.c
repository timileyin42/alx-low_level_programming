#include "main.h"

/**
* _strspn - Getting the length of a prefix substring.
* @s: ponter to the source string.
* @accept: pointer to the contained accepted characters.
*
* Return: Numbers of bytes,containing the accepted charracters
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0; /* initiallising the length to 0 */

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		length++; /* increament the length for each accepted character */
		s++;
	}

	return (length); /* Return the length of the prefix substring */
}
