#include <stdio.h>
#include "main.h"

/**
 * print_to_98  - prints every number from n to 98
 *		- seperated by a comma followed by a space.
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	else
		printf("%i", n);
	printf("\n");
}
