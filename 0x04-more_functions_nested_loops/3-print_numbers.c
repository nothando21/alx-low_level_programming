#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints numbers
 * Return: returns nothing
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
