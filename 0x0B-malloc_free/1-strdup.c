#include "main.h"

/**
* _strdup - Duplicate a string.
* @str: The input string to duplicate.
*
* Return: A pointer to the duplicate string, or Null if otherwise.
*/

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int x;

	/* checking the null input */
	if (str == NULL)
		return (NULL);

	/* Calculate the lenght of the input string */
	while (str[length] != '\0')
		length++;

	/* allocating of memory for the duplicate string */
	duplicate = malloc((length + 1) * sizeof(char));

	/* check for memory failure */
	if (duplicate == NULL)
		return (NULL);

	/* copying the contents of the input string to duplicate string */
	for (x = 0; x <= length; x++)
		duplicate[x] = str[x];

	return (duplicate);
}
