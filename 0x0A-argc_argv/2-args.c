#include "main.h"

/**
* main - print all arguments it receives, including the name.
* @argc: argument count
* @argv: arguments passed to main as an array of strings.
*
* Return: always (0);
*/

int main(int argc, char *argv[])
{
	int x = 0;

	(void) argc;
	(void) argv;

	/* loop to iterate through all arguement and print */
	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
