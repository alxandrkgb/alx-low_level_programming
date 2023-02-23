#include "main.h"

/**
 * print_most_numbers - print all digits except 2 & 4
 *
 * Return: Null
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
		num++;
	}
	_putchar('\n');
}
