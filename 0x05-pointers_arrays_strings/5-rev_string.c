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
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] !-'\0')
	counter++;

		for i = 0, i < counter, i++;
		{
			counter--;
			rev = s[i];
			s[i] = s[counter];
			s[counter] = rev;
}
}
