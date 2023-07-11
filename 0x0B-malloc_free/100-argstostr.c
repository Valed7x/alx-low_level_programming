#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 *
 * @ac: argument count.
 *
 * @av: argument vector.
 *
 * Return: 0
*/


char *argstostr(int ac, char **av)

{
	char *call;
	int a, b, e, o;

	if (ac == 0)
		return (0);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == 0)
			return (0);

		for (e = 0; av[b][e] != '\0'; e++)
			a++;
		a++;
	}

	call = malloc((a + 1) * sizeof(char));

	if (call == 0)
	{
		free(call);
		return (0);
	}

	for (b = e = o = 0; o < a; e++, o++)
	{
		if (av[b][e] == '\0')
		{
			call[o] = '\n';
			b++;
			o++;
			e = 0;
		}
		if (o < a - 1)
			call[o] = av[b][e];
	}
	call[o] = '\0';

	return (call);
}
