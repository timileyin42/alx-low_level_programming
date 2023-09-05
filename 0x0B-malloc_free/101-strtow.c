#include "main.h"

/**
* strtow - Splits a string into words.
* @str: The input string to split.
*
* Return: A double pointer to an array of strings.
*/

char **strtow(char *str)
{
	int x;
	int count = 0;
	char **result;
	char *token;

	if (!str || !*str)
		return (NULL);

	/* Count the number of words in the string */
	for (x = 0; str[x]; x++)
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
			count++;

	result = (char **)malloc((count + 1) * sizeof(char *));

	if (!result)
		return (NULL);

	token = strtok(str, " ");

	for (x = 0; x < count; x++)
	{
		/* allocating of memory */
		result[x] = (char *)malloc((strlen(token) + 1) * sizeof(char));
		if (!result[x])
			return (NULL);
		strcpy(result[x], token);
		token = strtok(NULL, " ");
	}

	result[count] = NULL;

	return (result);
}
