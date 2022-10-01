#include "main.h"
#include <stdio.h>

/**
 *_strstr - This function locates a substring
 * @haystack: The string to search through
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the located string; Otherwise, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			while
				(haystack[i] == needle[i]);
		}
		haystack++;
	}

	return ('\0');
}
