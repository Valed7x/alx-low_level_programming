#include "main.h"


/**
 * read_textfile - reads a text file and prints letter.
 *
 * @filename: file.
 *
 * @letters: letters.
 *
 * Return: returns 0.
 */


ssize_t read_textfile(const char *filename, size_t letters)

{
	int lok;

	ssize_t nod, lis;

	char *ou;

	if (!filename)
		return (0);

	lok = open(filename, O_RDONLY);

	if (lok == -1)
		return (0);

	ou = malloc(sizeof(char) * (letters));
	if (!ou)
		return (0);

	nod = read(lok, ou, letters);
	lis = write(STDOUT_FILENO, ou, nod);

	close(lok);

	free(ou);

	return (lis);
}
