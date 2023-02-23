#include "main.h"

/**
 * print_diagonal - print diagonal lines n(x)
 *
 * @n: number of times to print
 * Return: Null
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
