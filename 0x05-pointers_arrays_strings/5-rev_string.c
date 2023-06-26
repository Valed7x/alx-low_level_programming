#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse the string
 *
 * @s: the variable of string
 *
 * Return: void 0
*/

void rev_string(char *s)

{
	char tmp;
	int a, num, num1;

	num = 0;
	num1 = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	num1 = num - 1;

	for (a = 0; a < num / 2; a++)
	{
		tmp = s[a];
		s[a] = s[num1];
		s[num1--] = tmp;
	}
}
