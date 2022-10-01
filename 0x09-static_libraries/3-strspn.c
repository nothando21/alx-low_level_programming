#include "main.h"
#include <stdio.h>

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: The string to search through
 * @accept: The string to search from
 * Return: The number of bytes in the initial segment of s
 * consists of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}
