#include <stdio.h>

/**
 * main - enety point
 *
 * Description:Inventing is a combination of brains and materials
 * The more brains you use, the less material you need
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n, m,

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
