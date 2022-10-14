#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - This function prints out all types of specifiers
 * @format: The list of variable arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	char *str;
	const char t_arg[] = "cifs";
	unsigned int i = 0, j, c = 0;

	va_start(valist,format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			}j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c",va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d",va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f",va_arg(valist, double)) c = 1;
				break;
			case 's':
				str = ca_arg(valist, char *) c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
	}
}
