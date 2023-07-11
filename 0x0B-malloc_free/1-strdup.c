#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter.
 *
 * @str: string to duplicate.
 *
 * Return: 0
*/


char *_strdup(char *str)

{
	char *a;
	unsigned int num1, num2;

	num1 = 0;
	num2 = 0;

	if (str == 0)
		return (0);

	while (str[num2])
		num2++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == 0)
		return (0);

	while ((a[num1] = str[num1]) != '\0')
		num1++;

	return (a);
}
