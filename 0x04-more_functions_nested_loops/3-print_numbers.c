#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: Null
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}

	_putchar('\n');
}
