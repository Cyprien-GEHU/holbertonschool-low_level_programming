#include "main.h"

/**
 * read_textfile - read a file and print on POSIX
 * @filename : name of the file we want read
 * @letters : we want to print
 *
 * Return: letters print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, n;
	char *buf[1024];

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	n = read(file, buf, letters);
	write(1, buf, n);
	return (n);
}