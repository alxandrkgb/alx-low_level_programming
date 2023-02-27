#include "main.h"

void change_char(char *a, char *b);
/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int i = 0;

	while (len > i)
	{
		change_char(s + len, s + i);
		len--;
		i++;
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

/**
 * change_char - change address of char
 * @: char 1
 * @b: char 2
 * Return: Null
 */
void change_char(char *a, char *b)
{
	char temp = *b;
	*b = *a;
	*a = temp;
}
