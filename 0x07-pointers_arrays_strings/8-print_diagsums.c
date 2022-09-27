#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagoals
 * of a square matrix of integers
 * @a: the matrix of integrers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int index;
	int sum1 = 0;
	int sum2 = 0;

	for
		(index = 0;
		 index < size;
		 index++);
	{
		sum += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
