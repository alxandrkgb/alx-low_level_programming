#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to search for
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	return (*s == c ? s : NULL);
}
