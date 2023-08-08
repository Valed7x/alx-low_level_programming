#include "main.h"



/**
 * append_text_to_file - appends text at the end.
 *
 * @filename: namefile.
 *
 * @text_content: countent_text.
 *
 * Return: 1 if the file exists | -1 if the fails does.
 */


int append_text_to_file(const char *filename, char *text_content)

{
	int pn, wt, nod = 0;

	if (filename == NULL)

		return (-1);

	if (text_content != NULL)

	{
		for (nod = 0; text_content[nod];)

			nod++;

	}

	pn = open(filename, O_WRONLY | O_APPEND);

	wt = write(o, text_content, nod);

	if (pn == -1 || wt == -1)

		return (-1);

	close(pn);

	return (1);
}
