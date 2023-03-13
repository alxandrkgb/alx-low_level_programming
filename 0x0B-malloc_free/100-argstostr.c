#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: arguments array
 *
 * Return: pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '0'; j++)
			len++;
		len++;
	}

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}
		str[pos] = '\n';
		pos++;
	}
	str[pos] = '\0';

	return (str);
}
