#include "main.h"

/**
 * puts_half -  Prints half a string
 * @str: input
 * Return: second half the input
 */
void puts_half(char *str);
{
	int j, i = 0;

	while (*(str + 1))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while
		(j < i)
	{
			_putchar(*(str + j));
				j++;
		}
	_putchar('\n')
}
