#include "main.h"

/**
 * main - prints the min num of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: the program calculates minimu number of coins
 * needed to make change
 *
 * Return: 0 if successful 1 if otherwise.
 */

int main(int argc, char *argv[])
{
	int x, y = 0;

	if (argc != 2)
	{
		/* print an error message if not required argument */
		printf("Error\n");
		return (1);
	}
	/* convert the argument to an int */
	x = atoi(argv[1]);

	/* calculating the minimum number of coins */
	while (x > 0)
	{
		y++;
		if ((x - 25) >= 0)
		{
			x -= 25;
			continue;
		}
		if ((x - 10) >= 0)
		{
			x -= 10;
			continue;
		}
		if ((x - 5) >= 0)
		{
			x -= 5;
			continue;
		}
		if ((x - 2) >= 0)
		{
			x -= 2;
			continue;
		}
		x--;
	}
	/* print the minimum number of coins */
	printf("%d\n", y);
	return (0);
}
