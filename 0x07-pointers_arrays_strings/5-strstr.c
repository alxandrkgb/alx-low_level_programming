#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to locate
 *
 * Return: pointer to the begining of the located substrig
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle)
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j]; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (!needle[j])
				return (haystack + i);
		}
	}

	return (NULL);
}
