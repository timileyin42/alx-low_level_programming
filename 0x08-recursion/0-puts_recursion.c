#include "main.h"

/**
* _puts_recursion - printing of a string with a new line.
* @s: the string to print.
*
* Return: (void)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n'); /* print a new line when the string reach the null bytes. */
		return;
	}

	putchar(*s); /* printing of the characters */
	_puts_recursion(s + 1); /* calling the function recursively */
}
