#include "main.h"
/**
* _print_rev_recursion - printing of a string in reverse mode.
* @s: the string to be printed in reverse.
*
* Return: (void)
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return; /* Base case: will stop when the string reach null bytes */

	_print_rev_recursion(s + 1); /* Recursive function modified */
	putchar(*s); /* Printing of the character after returning from recursion */
}
