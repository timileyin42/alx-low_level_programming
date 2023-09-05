#include "main.h"

/**
* argstostr - Concatenation all the arguments of the program.
* @ac: the number of arguments (argc).
* @av: The array of argument strings (argv).
* Return: A pointer to the concatenated string or NULL if otherwise.
*/

char *argstostr(int ac, char **av)
{
	char *concat;
	int x, y;
	int length = 0;
	char *token;

	/* checking for invalid input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculating the length of concatenated string */
	for (x = 0; x < ac; x++)
	{
		token = strtok(av[x], " ");
			while (token != NULL)
			{
				for (y = 0; token[y]; y++)
					length++;
				token = strtok(NULL, " ");
			}
	}
	/* allocating of memory for concat string */
	concat = malloc((length + ac + 1) * sizeof(char));

	/* checking for memory failure */
	if (concat == NULL)
		return (NULL);
	/* concat the arguments with line char */
	for (x = 0, length = 0; x < ac; x++)
	{
		token = strtok(av[x], " ");
		while (token != NULL)
		{
			for (y = 0; token[y]; y++)
				concat[length++] = token[y];
			token = strtok(NULL, " ");
			concat[length++] = '\n';
		}
	}

	return (concat);
}
