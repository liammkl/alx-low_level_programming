#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
       	while (*s != '\0')
	{
		char *accept_ptr = accept;
		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
				return s;
			accept_ptr++;
		}
		s++;
	}
	return NULL;
}
