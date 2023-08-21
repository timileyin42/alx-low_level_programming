#include "main.h"

/**
* puts_half - printing the half of the string
* @str: string to be printed from
* Return: (void)
*/

void puts_half(char *str)
{
	int x, y, num = 0;

	for (x = 0; str[x] != '\0'; x++)
		num++;
	y = (num - 1) / 2;
	for (x = y + 1; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
