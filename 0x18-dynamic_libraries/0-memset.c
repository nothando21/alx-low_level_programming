#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area
 * @s: a pointer memory to be filled
 * @b: memory to fill the memory with
 * @n: bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		s[i] = b;

		return (s);
	}
}
