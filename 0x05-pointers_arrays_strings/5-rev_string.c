#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char e;
	while (s[length] != '\0')
	{
		length++;
	}
	length -= 1;
	while (start < length)
	{
		e = s[start];
		s[start] = s[length];
		s[length] = e;
		start++;
		length--;
	}
}
