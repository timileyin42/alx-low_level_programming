#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string in which to check for substring
* @needle: substring to locate
*
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int x, y, start;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		start = x;
		y = 0;
		while (needle[y] != '\0' && haystack[x] == needle[y])
		{
			x++;
			y++;
		}
		if (needle[x] == '\0')
		{
			return (haystack + start);
		}
		x = start + 1;
	}
	return (NULL);
}
