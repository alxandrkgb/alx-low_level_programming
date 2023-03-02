#include <stdio.h>

/**
 * main - prints the value of a pointer variable
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/* add your line of code here */
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);

	return (0);
}
