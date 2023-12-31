#include "main.h"


/**
 * create_file - program creates a files.
 *
 * @filename: namefile.
 *
 * @text_content: writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */


int create_file(const char *filename, char *text_content)

{
	int op, wt, nod = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)

		for (nod = 0; text_content[nod]; nod++)
			;

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, nod);

	if (op == -1 || wt == -1)

		return (-1);
	close(op);

	return (1);
}
