#include <stdio.h>

/**
 * main - enety point
 *
 * Description:I sometimes suffer from insomnia.
 * And when I can't fall asleep, I play what I call the alphabet game
 *
 * Return: 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
