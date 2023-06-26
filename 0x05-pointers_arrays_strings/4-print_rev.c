#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse the string
 *
 * @s: the string
 *
 * Return: void 0
*/

void rev_string(char *s)
{
	char tmp;
	int a, num1, num2;

	num1 = 0;
	num2 = 0;

	while (s[nim1] != '\0')
	{
		num1++;
	}

	num2 = num1 - 1;

	for (a = 0; a < num1 / 2; a++)
	{
		tmp = s[a];
		s[a] = s[num2;
		s[len1--] = tmp;
	}
}
