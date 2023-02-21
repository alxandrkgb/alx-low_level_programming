#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is %s\n", n, (n > 0) ? "positive" : (n < 0) ? "negative" : "zero");
	return (0);
}
