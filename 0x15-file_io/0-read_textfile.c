#include "main.h"


/**
 * read_textfile - reads a text file and prints letter.
 *
 * @filename: namefile.
 *
 * @letters: letters.
 *
 * Return: It fails, returns 0.
 */


ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t op, ad, wt;
	char *nod;

	if (filename == NULL)
		return (0);

	nod = malloc(sizeof(char) * letters);
	if (nod == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	ad = read(op, nod, letters);
	wt = write(STDOUT_FILENO, nod, ad);

	if (op == -1 || ad == -1 || wt != ad)
	{
		free(nod);
		return (0);
	}
	free(nod);
	close(op);

	return (wt);
}
