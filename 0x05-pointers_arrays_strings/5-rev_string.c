#include "main.h"
/**
* rev_string - reversing a string
* @s: string value to be reversed
* Return: (0)
*/

void rev_string(char *s)
{
	int x;
	char y;
	int num = 0;

	for (x = 0; s[x] != '\0'; x++)
		num++;
	for (x = 0; x < num / 2; x++)
	{
		y = s[x];
		s[x] = s[num - 1 - x];
		s[num - 1 - x - x] = y;
	}
}
