#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: if size = 0 or the memory allocation fails, return NULL
 * otherwise, return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
