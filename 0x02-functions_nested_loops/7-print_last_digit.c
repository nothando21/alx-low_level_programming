#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to be tested.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int x;;
	if (n < 0)
	n = -n;
	x = n % 10;

	_putchar(n + '0');
	return(n % 10);

}
