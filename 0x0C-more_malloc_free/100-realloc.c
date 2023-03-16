#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: pointer to the reallocated memory block, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* if new size is zero, free the memory block and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* if ptr is NULL, allocate a new memory block and return the pointer */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	/* if new size is equal to old size, do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* allocate a new memory block with new_size bytes */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* copy the contents of the old memory block to the new memory block */
	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	/* free the old memory block */
	free(ptr);

	return (new_ptr);
}
