#include "main.h"

/**
* main - add positive number  and pass to the agruments.
* @argc: argument count.
* @argv: arguments passed to main as an array of strings.
*
* Return: 0 if success, 1 if otherwise.
*/

int main(int argc, char *argv[])
{
	int x;

	int sum = 0;

	/* checking if their is command line */
	if (argc < 1)
	{
		/* no number print and return */
		printf("0\n");
		return (0);
	}

	/* loopthrough arg from index */
	for (x = 1; x < argc; x++)
	{
		/* convert the argument to integers */
		int y = atoi(argv[x]);

		/* checking if there's error */
		if (y <= 0 || (y == 0 && argv[x][0] != '0'))
		{
			/* print error and return 1 */
			printf("Error\n");

			return (1);
		}

		/* adding of the int to the sum */
		sum += y;
	}

	/* print the sumof positive numbers */
	printf("%d\n", sum);

	return (0);
}

