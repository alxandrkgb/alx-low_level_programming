#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num1 = 0, num2, num3;

	while (num1 <= 7)
	{
	num2 = num1 + 1;

	while (num2 <= 8)
	{
	num3 = num2 + 1;

	while (num3 <= 9)
	{
	putchar(num1 + '0');
	putchar(num2 + '0');
	putchar(num3 + '0');
	if (num1 < 7 || num2 < 8 || num3 < 9)
	{
	putchar(',');
	putchar(' ');
	}
	num3++;
	}
	num2++;
	}
	num1++;
	}
	putchar('\n');
	return (0);
}
