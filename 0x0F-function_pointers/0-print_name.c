#include "function_pointers.h"

/**
* print_name - printing of a name.
* @name: name to be printed.
* @f: function pointers to the printing function.
*
* Return: (void)
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	return;
	f(name);
}

