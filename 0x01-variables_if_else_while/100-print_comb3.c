#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 *
 */

int main(void)
{
int a;
int b;

for (a = 1; a < 9; a++)
{

for (b = a + 1; b < 10; b++)
{
putchar(a);
putchar(b);

if (a != 8 || b != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);

}
