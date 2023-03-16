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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* set memory to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
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
