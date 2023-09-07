#include "main.h"

/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The number of bytes from s2 to concatenate.
*
* Return: A pointer to the concatenated string.
*         If memory allocation fails, it returns NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2;
	unsigned int x, y;
	char *concat;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	/* Calculate the lengths of s1 and s2 */
	length1 = strlen(s1);
	length2 = strlen(s2);

	/* If n is greater than or equal to the length of s2, use the entire s2 */
	if (n >= length2)
		n = length2;

	/* Allocate memory for the concatenated string */
	concat = malloc(length1 + n + 1);

	/* Check for memory allocation failure */
	if (concat == NULL)
		return (NULL);

	/* Copy characters from s1 to concatenated */
	for (x = 0; x < length1; x++)
		concat[x] = s1[x];

	/* Copy the first n characters from s2 to concatenated */
	for (y = 0; y < n; y++)
		concat[x + y] = s2[y];

	/* Null-terminate the concatenated string */
	concat[x + y] = '\0';

	return (concat);
}

