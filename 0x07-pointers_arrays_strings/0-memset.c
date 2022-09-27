#include "main.h"
#include <stdio.h>

/**
 * memset - fills the first n bytes of the memory area
 * pointed by s with constant byte b
 * @s: a pointer memory to be filled
 * @b: memory to fill the memory with
 * @n: bytes to be filled
 * Return: The pointer to memory n
 */
void *_memset(void *s, int b, size_t n);
{
	unsigned int index;
	unsigned char *memory = s, value = b;
	
	for (index = 0; index < n;index++)
		memory[index] = value;

		return (memory);
}
