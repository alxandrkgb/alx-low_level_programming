#include "main.h"

/**
 * more_numbers - prints 10x
 * Return: Null
 */
void more_numbers(void)
{
	int num1 = 0, num2 = 0;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 15)
		{
			if (num2 > 9)
			{
				_putchar((num2 / 10) + '0');
			}
			_putchar((num2 % 10) + '0');
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
