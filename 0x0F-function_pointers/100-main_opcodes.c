#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own function
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return:0 on success 1 || 2 if otherwise
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int x, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < nbytes; x++)
	{
		printf("%02x", opc[x] & 0xFF);
		if (x < nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
