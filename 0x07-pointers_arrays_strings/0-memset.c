#include "main.h"

/**
 * memset - fills the first n bytes of the memory area
 * pointed by s with constant byte b
 * @s: a pointer memory to be filled
 * @b: memory to fill the memory with
 * @n: bytes to be filled
 * Return: The pointer to memory n
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
