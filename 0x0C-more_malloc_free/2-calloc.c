#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size of
 * Return: NULL if failed.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	t = malloc(nmemb * size);
	tmp = t;
	if (t == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
		t[a] = 0;
	return (tmp);
}
