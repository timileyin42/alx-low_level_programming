#include "main.h"

/**
* print_array - printing n elements of arrays integers
* @a: array to print from
* @n: numbers of elements to be printed
* Return: (0)
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		printf(", ");
	}
	printf("\n");
}
