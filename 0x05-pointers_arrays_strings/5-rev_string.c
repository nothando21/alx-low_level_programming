#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Prints a string stdout in reverse
 * @s: String to reverse
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	j = 0;

	for (i = 0; s[i] != 0; i++)
		;

	for (i = i - 1; j < i; i--)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
		j++;
	}
}
