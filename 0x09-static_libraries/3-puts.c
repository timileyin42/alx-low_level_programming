#include "main.h"
/**
* _puts - printing of a string
* @str:String to be printed
* Return: void
*/

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	_putchar(str[x]);
	_putchar('\n');
}
