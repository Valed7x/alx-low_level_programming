#include "3-calc.h"

/**
 * main - performs simple operations.
 *
 * @argc: argument count.
 *
 * @argv: argument vector.
 *
 * Return:0 NULL.
*/


int main(int argc, char *argv[])

{
	int z, w;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");

		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");

		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == 0)
	{
		printf("Error\n");

		exit(99);
	}

	z = atoi(argv[1]);

	w = atoi(argv[3]);

	printf("%d\n", operation(z, w));
	return (0);
}
