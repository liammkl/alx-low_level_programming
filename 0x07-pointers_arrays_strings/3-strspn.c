#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing acceptable bytes.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	
	while (*s != '\0')
	
	{
		found = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}
		if (found == 0)
			break;
		
		count++;
		s++;
		accept = accept - count + 1;
	}
	
	return count;
}
