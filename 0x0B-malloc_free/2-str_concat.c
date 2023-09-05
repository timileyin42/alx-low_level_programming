#include "main.h"

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* Return: A pointer to the concatenated strin,  or null if otherwise.
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int a;
	unsigned int b;

	/* checking the null string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculating the lengths of s1 and s2 */
	while (s1[x])
		x++;
	while (s2[y])
		y++;

	/* allocating memory for the concatenated string */
	concat = malloc((x + y + 1) * sizeof(char));

	/*check for memmory allocation failure */
	if (concat == NULL)
		return (NULL);

	/* copy the contents of s1 to concat */
	for (a = 0; a < x; a++)
		concat[a] = s1[a];

	/* copy the contents of s2 to concat */
	for (b = 0; b < y; b++)
		concat[a + b] = s2[b];

	/* null- terminate the concat string */
	concat[a + b] = '\0';

	return (concat);
}
