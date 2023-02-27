#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}

/**
 * _strlen - checks length of a string
 *
 * @s: address of s
 * Return: Null
 */
int _strlen(char *s)
{
	int len = 0, index = 0;

	while (s[index] != '\0')
	{
		len++;
		index++;
	}
	return (len);
}
