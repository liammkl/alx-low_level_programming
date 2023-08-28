#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: A pointer to the string to be searched.
 * @needle: A pointer to the substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;
		
		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		
		if (*needle_ptr == '\0')
			return haystack;
		
		haystack++;
	}
	
	return (*needle == '\0' ? haystack : NULL);
}
