#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}

/**
 * memset - sets memory to a constant byte
 * @s: pointer to memory
 * @b: byte to set memory to
 * @n: number of bytes to set
 *
 * REturn: pointer to memory
 */
void *memset(void *s, int b, size_t n)
{
	char *p = s;

	while (n--)
		*p++ = (char)b;

	return (s);
}
