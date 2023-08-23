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

	for (x = 0; str[x]; x++)
	{
		for (y = 0; ch[y]; y++)
		{
			if (str[x] == ch[y])
			{
				str[x] = num[y / 2];
				break;
			}
		}
	}

	return (str);
}

