/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * This function takes an array of integers and its size as input,
 * and reverses the order of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int x = 0; /* Index of the leftmost element */
	int y = n - 1; /* Index of the rightmost element */

	while (x < y)
	{
		/* Swap the elements at indices left and right */
		int rev = a[x];

		a[x] = a[y];
		a[y] = rev;

		/* Move the indices towards the center */
		x++;
		y--;
	}
}

