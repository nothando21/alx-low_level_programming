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

	if (n <= 98)
{
	while (n > 98)
	
		printf("%d, ", n--);
	printf("%d\n",n);
}

else
{
	while (n < 98)

		printf("%d, ",n++);
	printf("%d\n",n);
}
}
