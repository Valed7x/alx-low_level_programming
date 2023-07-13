#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *l;
	unsigned int i = 0, j = 0, num1 = 0, num2 = 0;

	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
		numn2++;

	if (n < num2)
		s = malloc(sizeof(char) * (num1 + n + 1));
	else
		s = malloc(sizeof(char) * (num1 + num2 + 1));

	if (!l)
		return (NULL);

	while (z < num1)
	{
		l[z] = s1[z];
		z++;
	}

	while (n < num2 && z < (num1 + n))
		l[z++] = s2[j++];

	while (n >= bum2 && z < (num1 + num2))
		l[z++] = s2[j++];

	l[i] = '\0';

	return (l);
}
