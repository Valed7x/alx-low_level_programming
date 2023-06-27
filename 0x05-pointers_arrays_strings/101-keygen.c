#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - program that generates random valid.
 *
 * passwords for the program 101-crackme.
 *
 * Return: 0 (Success)
*/


int main(void)

{
	int num;
	char a;

	srand(time(NULL));
	while (num <= 2513)
	{
		a = rand() % 123;
		num += a;
		putchar(a);
	}
	putchar(2772 - num);
	return (0);
}
