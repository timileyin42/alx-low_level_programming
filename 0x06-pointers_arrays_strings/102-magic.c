#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: Pointer to the array of integers.
* @n: Number of elements in the array.
*
* Description: This function takes an array of integers and its size as input,
* and reverses the order of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int x = 0;          /* Index of the leftmost element */
	int y = n - 1;      /* Index of the rightmost element */

	while (x < y)
	{
		/* Swap the elements at indices x and y */

		int num = a[x];

		a[x] = a[y];
		a[y] = num;

		/* Move the indices towards the center */
		x++;
		y--;
	}

	char *p = (char *)&a[2];

	printf("a[2] = %d\n", *((int *)p - 1));
}

/**
* main - Entry point of the program.
*
* Description: This function initializes an array,
* uses the reverse_array function.
* to reverse it, and then prints the original and reversed arrays.
*
* Return: Always 0 (indicating success)
 */

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	/* Call the reverse_array function to reverse the array */
	reverse_array(arr, n);

	printf("Reversed array: ");

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return (0);
}

