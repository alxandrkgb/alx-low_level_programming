#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *s;
	char sep = '\0';

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s ? s : "(nil)");
				break;
			default:
				sep = '\0';
				j = i;
				while (format[j] && !sep)
				{
					switch (format[j])
					{
						case 'c':
						case 'i':
						case 'f':
						case 's':
							sep = ',';
							break;
						default:
							j++;
							break;
					}
				}
				if (sep)
				{
					printf("%c ", sep);
					i--;
				}
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
