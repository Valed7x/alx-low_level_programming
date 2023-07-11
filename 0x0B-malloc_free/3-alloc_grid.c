#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array.
 *
 * @width: width of the matrix.
 *
 * @height: height of the matrix.
 *
 * Return: 0
*/


int **alloc_grid(int width, int height)

{
	int **arr;
	int a, b;

	if (height <= 0 || width <= 0)
		return (0);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == 0)
		return (0);

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *) malloc(sizeof(int) * width);
		if (arr[a] == 0)
		{
			free(arr);
			for (b = 0; b <= a; b++)
				free(arr[b]);
			return (0);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}
