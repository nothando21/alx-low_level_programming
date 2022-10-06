#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one being passed
 * @s2: string two being passed
 * @n: size
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int a, b, c, d;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		t = malloc((a + b + 1) * sizeof(char));
	else
		t = malloc((a + n + 1) * sizeof(char));
	if (t == 0)
		return (NULL);
	for (c = 0; c < a; c++)
		t[c] = s1[c];
	for (d = 0; d < n && d < b; d++, c++)
		t[c] = s2[d];
	t[c] = '\0';
	return (t);
}
