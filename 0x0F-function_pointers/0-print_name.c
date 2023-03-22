#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using the given function pointer
 * @name: the name to print
 * @f: the function pointer to use for printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
