#include "main.h"

/**
 * puts_half -  Prints half a string
 * @str: input
 */
void puts_half(char *str);
{
	int i, j;

	for (i = 0; str[i] != 0; i++)
	;

	j = (i + 1) / 2;

	for (; str[j] != 0; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
