#include <stdio.h>

/**
 * main - enety point
 *
 * Description:Patience, persistence and perspiration
 * make an unbeatable combination for success
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
