#include <stdio.h>

/**
 * main - prints the value of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5] = {1, 2, 98, 4, 5};
	int *p;

	p = &a[5];

	/* your code goes here */
	printf("a[2] = %d\n", *(p));

	return (0);
}
