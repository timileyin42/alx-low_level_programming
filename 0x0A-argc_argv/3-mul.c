#include "main.h"

/**
* main - program to multiplies two number and print the result.
* @argc: arguments count.
* @argv: arguments passed to main as an array of strings
*
* Return: 0 if success, return 1 if otherwise
*/

int main(int argc, char *argv[])
{
	int x;

	int result;

	if (argc != 3)
	{
		/* print an error if not the argument expected */
		printf("Error\n");

		return (1);
	}

	/* convert c-l-a to integers */
	x = atoi(argv[1]);

	/* multiply */
	result = x * atoi(argv[2]);

	/* printout the result */
	printf("%d\n", result);

	return (0);
}
