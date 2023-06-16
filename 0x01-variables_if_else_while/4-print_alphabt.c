#include <stdio.h>

/**
 * main - enety point
 *
 * Description:When I was having that alphabet soup
 * I never thought that it would pay off
 *
 * Return: 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
