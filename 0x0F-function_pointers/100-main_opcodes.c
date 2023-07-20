#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints its own opcodes.
 *
 * @argc: argument count.
 *
 * @argv: argument vector.
 *
 * Return: 0.
*/


int main(int argc, char *argv[])

{
	int z, w;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	z = atoi(argv[1]);

	if (z < 0)
	{
		printf("Error\n");

		return (2);
	}

	p = (unsigned char *)main;

	for (w = 0; w < z; w++)
	{
		printf("%02x", *(p + w));
		if (w != (z - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
