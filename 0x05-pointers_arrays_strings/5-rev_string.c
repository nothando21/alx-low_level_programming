#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string stdout in reverse
 * @s: String to reverse
 * Return: string in reverse
 */
void rev_string(char *s);
{
	char *rev = s;
	char tmp;
	int len;
	int i;

	len = _strlen(s);
	while (*(rev++)!-'\0')
	continue;
	rev = rev - 2;

		for i = 0, i < len / 2, ++i;
		{
			tmp = s[i];
			s[i] = s[rev];
			rev[0] = tmp;
			rev--;
}
}
