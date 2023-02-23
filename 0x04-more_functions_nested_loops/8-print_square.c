#include "main.h"

/**
 * print_square - print square n times
 *
 * @size: number
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (size > 0)
	{
		i = 0;
		while (i < j)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		size--;
	}
}
