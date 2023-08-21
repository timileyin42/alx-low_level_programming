#include "main.h"
/**
* print_rev - printing strings in reverse order
* @s: String to be printed
* Return: (0)
*/

void print_rev(char *s)
{
	int x;
	int num = 0;

	for (x = 0; s[x] != '\0'; x++)
	num++;
	for (x = num - 1; x >= 0; x--)
	_putchar(s[x]);
	_putchar('\n');
}
