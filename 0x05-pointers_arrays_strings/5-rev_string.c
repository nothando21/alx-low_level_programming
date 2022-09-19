#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string stdout in reverse
 * @s: String to reverse
 * Return: Nothing
 */
void rev_string(char *s);
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
