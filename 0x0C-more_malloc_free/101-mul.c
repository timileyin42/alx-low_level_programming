#include "main.h"

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int x, isn1 = 1, isn2 = 1;

	for (x = 0; argv[1][x]; x++)
		if (argv[1][x] != '0')
		{
			isn1 = 0;
			break;
		}

	for (x = 0; argv[2][x]; x++)
		if (argv[2][x] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @length: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int length)
{
	int x = 0;

	for (x = 0; x < length; x++)
		ar[x] = '0';
	ar[length] = '\0';
	return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}

	return (ln);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int length1, length2, length;
	int sum, sum1;
	int x, y, z, ca;
	char *array;

	if (argc != 3)
		printf("Error\n"), exit(98);
	length1 = _checknum(argv, 1), length2 = _checknum(argv, 2);
	_is_zero(argv), length = length1 + length2, array = malloc(length + 1);
	if (array == NULL)
		printf("Error\n"), exit(98);
	array = _initialize_array(array, length);
	z = length - 1, x = length1 - 1, y = length2 - 1, ca = sum = 0;
	for (; z >= 0; z--, x--)
	{
		if (x < 0)
		{
			if (sum1 > 0)
			{
				sum = (array[z] - '0') + sum1;
				if (sum1 > 9)
					array[z - 1] = (sum / 10) + '0';
				array[z] = (sum % 10) + '0';
			}
			x = length1 - 1, y--, sum1 = 0, ca++, z = length - (1 + ca);
		}
		if (y < 0)
		{
			if (array[0] != '0')
				break;
			length--;
			free(array), array = malloc(length + 1), array = _initialize_array(array, length);
			z = length - 1, x = length1 - 1, y = length2 - 1, ca = sum1 = 0;
		}
		if (y >= 0)
		{
			sum = ((argv[1][x] - '0') * (argv[2][y] - '0')) + (array[z] - '0') + sum1;
			sum1 = sum / 10, array[z] = (sum % 10) + '0';
		}
	}
	printf("%s\n", array);
	return (0);
}
