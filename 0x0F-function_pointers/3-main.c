#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Main function to perform simple operations
* @argc: The number of arguments count.
* @argv: The array of arguments.
*
* Return: 0 on success, error if otherwise.
*/

int main(int argc, char *argv[])
{
	int num, num1, sum;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num = atoi(argv[1]);
	num1 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	sum = func_ptr(num, num1);

	printf("%d\n", sum);

	return (0);
}
