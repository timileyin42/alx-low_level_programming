#include "main.h"

/**
*swap_int - swaping of two integers
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* Return: None.
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
