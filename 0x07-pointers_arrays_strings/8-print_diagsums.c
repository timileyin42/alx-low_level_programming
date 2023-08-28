#include "main.h"

/**
* print_diagsums - Prints the sum of the two diagonals of a square matrix.
* @a: Pointer to the 2D array representing the square matrix.
* @size: Size of the matrix (number of rows or columns).
*
* Return (void)
 */
void print_diagsums(int *a, int size)
{
	int main_diag_sum = 0;
	int secondary_diag_sum = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		main_diag_sum += a[x * size + x];
		secondary_diag_sum += a[x * size + (size - x - 1)];
	}

	printf("%d\n", main_diag_sum);
	printf("%d\n", secondary_diag_sum);
}
