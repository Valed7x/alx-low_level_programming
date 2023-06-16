#include <stdio.h>

/**
 * main - enety point
 *
 * Description:alphABET
 *
 * Return: 0 (success)
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
