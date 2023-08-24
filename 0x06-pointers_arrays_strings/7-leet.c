#include "main.h"

/**
* leet - encodes a string into 1337
* @str: the string to encode
*
* Return: the encoded string
*/

char *leet(char *str)
{
	char ch[] = "aAeEoOtTlL";
	char num[] = "4300711";

	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == ch[y])
				str[x] = num[y];
		}
	}

	return (str);
}

