#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * count_word - helper function to count the number.
 *
 * @s: string to evaluate.
 *
 * Return: 0
*/


int count_word(char *s)

{
	int g, z, l;

	g = 0;
	l = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] == ' ')
			g = 0;
		else if (g == 0)
		{
			g = 1;
			l++;
		}
	}

	return (l);
}


/**
 * **strtow - splits a string into words.
 *
 * @str: string to split.
 *
 * Return: 0
*/


char **strtow(char *str)

{
	char **call, *bat;
	int a, n = 0, mol = 0, ds, s = 0, t, end;

	while (*(str + mol))
		mol++;
	ds = count_word(str);
	if (ds == 0)
		return (0);

	call = (char **) malloc(sizeof(char *) * (ds + 1));
	if (call == 0)
		return (0);

	for (a = 0; a <= mol; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (s)
			{
				end = a;
				bat = (char *) malloc(sizeof(char) * (s + 1));
				if (bat == 0)
					return (0);
				while (t < end)
					*bat++ = str[t++];
				*bat = '\0';
				call[n] = bat - s;
				n++;
				s = 0;
			}
		}
		else if (s++ == 0)
			t = a;
	}

	call[n] = 0;

	return (call);
}
