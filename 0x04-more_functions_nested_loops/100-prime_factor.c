#include <stdio.h>
#include <main.h>

/**
 * main - prints the largest prime factor
 * of number 612852475143
 * Return: 0
 */
int main(void)
{
	int inc;
	long num = 612852475143;

	while (inc++ < number / 2)

	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}
		for (inc = 3, inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
				number /= inc;
		}
	}
			printf("%d\n", number);
			return (0);
}
