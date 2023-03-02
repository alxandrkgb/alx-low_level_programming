#include "main.h"
#include <stdio.h>

void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
			}
			else
			{
				printf("  ");
			}
			if (j % 2)
			{
				printf(" ");
			}
		}
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
			{
				printf(" ");
			}
			else
			{
				c = b[j];
				if (c >= ' ' && c <= '-')
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
