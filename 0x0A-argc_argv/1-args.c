#include "main.h"

/**
* main - print the number of arguments passed into it.
* @argc: argument count
* @argv: arguments passed to main as an array of strings
*
* Return: always (0)
*/

int main(int argc, char *argv[])
{
	(void) argc; /* to be compileable */
	(void) argv; /* ;; */
	printf("%d\n", argc - 1);

	return (0);
}
