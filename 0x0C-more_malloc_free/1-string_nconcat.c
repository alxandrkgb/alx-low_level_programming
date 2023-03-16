#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the maximum number of bytes of s2 to concatenate
 *
 * Return: if memory allocation fails, NULL
 * otherwise, a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	while (*s1)

		concat[i++] = *s1++;
	i = 0;
	while (i < n)
		concat[len1 + i] = s2[i], i++;
	concat[len1 + i] = '\0';

	return (concat);
}
