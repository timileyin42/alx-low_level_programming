#include "main.h"

/**
* cap_string - Capitalizes all words in a string.
* @str: The input string.
*
* Return: A pointer to the modified string.
*/

char *cap_string(char *str)
{
	bool new_word = true;
	unsigned int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] == ' ' || str[x] == '\t' || str[x] == '\n' ||
		str[x] == ',' || str[x] == ';' || str[x] == '.' ||
		str[x] == '!' || str[x] == '?' || str[x] == '"' ||
		str[x] == '(' || str[x] == ')' || str[x] == '{' ||
		str[x] == '}')
	{
		new_word = true;
	}

	else if (new_word && islower(str[x]))

	{
		str[x] = toupper(str[x]);
		new_word = false;
	}

	else

	{
		new_word = false;
	}

	x++;

	}

	return (str);
}
