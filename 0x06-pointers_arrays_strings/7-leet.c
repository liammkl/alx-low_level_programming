#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	char *letters = "AEOTLaeotl";
	char *leet_chars = "43071";
	int i, j;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j];
				break;
			}
		}
	}
	
	return str;
}

