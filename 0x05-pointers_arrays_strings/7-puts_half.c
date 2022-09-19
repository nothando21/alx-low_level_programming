#include "main.h"

/**
 * puts_half -  Prints half a string
 * @str: input
 * Return: second half the input
 */
void puts_half(char *str);
{
	int j
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i] != '\0')
	{
		j = str[i];
		i++;
			_putchar(j);
	}
	_putchar('\n');
}
