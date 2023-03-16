#ifndef MAIN_H
#define MAIN_H

void _puts(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
<<<<<<< HEAD
void errors(void);
int _strlen(char *s);
int is_digit(char *s);

/* putchar prototype */
=======
>>>>>>> 86122041c057f45dc0a8a6366837763efd542f61
int _putchar(char c);
int _atoi(const char *s);
void print_int(unsigned long int n);


#endif