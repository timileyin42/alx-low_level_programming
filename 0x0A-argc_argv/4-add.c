#include "main.h"

/**
* checkIfNumeric - Check if a string contains only digits.
* @str: The string to check.
*
* Return: 1 if the string contains only digits, 0 otherwise.
*/

int checkIfNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing command-line arguments
*
* Description: This program adds positive,
* numbers passed as command-line arguments,
* and prints the result, or 0 if no numbers are provided.
*
* Return: 0 if successful, 1 if otherwise.
*/

int main(int argc, char *argv[])
{
	int x;
	int sum = 0;

	/* Check if there are command-line arguments */
	if (argc == 1)
	{
		/* No numbers provided, print 0 and return */
		printf("0\n");
		return (0);
	}

	/* Loop through each argument starting from index 1 (skip program name) */
	for (x = 1; x < argc; x++)
	{
		/* Check if the argument is a positive integer */
		if (!checkIfNumeric(argv[x]) || atoi(argv[x]) <= 0)
		{
			/* Print an error message and return 1 for invalid input */
			printf("Error\n");
			return (1);
		}

		/* Add the positive number to the sum */
		sum += atoi(argv[x]);
	}

	/* Print the sum of positive numbers */
	printf("%d\n", sum);

	return (0);
}
