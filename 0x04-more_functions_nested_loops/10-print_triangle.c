#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j < size - i - 1)
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
