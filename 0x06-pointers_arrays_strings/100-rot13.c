#include "main.h"

/**
* rot13 - Encodes a string using ROT13 cipher.
* @str: The input string to be encoded.
*
* Return: A pointer to the encoded string.
*/

char *rot13(char *str)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotated[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; ch[y] != '\0'; y++)
		{
			if (str[x] == ch[y])
			{
				str[x] = rotated[y];
				break;
			}
		}
	}

	return (str);
}

