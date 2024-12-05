#include "main.h"

/**
 * append_text_to_file - append text at the end of a life
 * @filename : name of the file we want to work
 * @text_content : content of the text
 *
 * Return: 1 or -1 (if fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, contenu;
	int x = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[x] != '\0')
			x++;

		contenu = write(file_d, text_content, x);

		if (contenu == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
