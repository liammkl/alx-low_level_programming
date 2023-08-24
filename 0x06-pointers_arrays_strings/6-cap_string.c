#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string to be capitalized.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	int i;
	bool new_word = true;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (new_word)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
			new_word = false;
		}
		if	(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			new_word = true;
		}
	}
	
	return str;
}
