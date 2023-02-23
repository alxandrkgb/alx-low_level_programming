#include "main.h"

/**
 * print_line - print '-' n times
 *
 * @n: number of times to print -
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
