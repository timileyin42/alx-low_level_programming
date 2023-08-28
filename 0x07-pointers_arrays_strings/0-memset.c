/**
* _memset - Filling of the n bytes of the memory pointed to.
* @s: Pointer to the memory area to be filled.
* @b: The constant byte to fill the memory with.
* @n: Number of bytes to fill.
*
* Return: Pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*ptr = b;
		ptr++;
	}

	return (s);
}
