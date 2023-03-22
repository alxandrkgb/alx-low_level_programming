#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

/* function prototypes */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

/* putchar prototype */
int _putchar(char c);

#endif
