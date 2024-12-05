#include "main.h"
#define BUF_SIZE 1024
/**
 * _copy - function copy
 * @fm : file source
 * @ft : file destination
 */

void _copy(char *fm, char *ft)
{
	int f_from = open(fm, O_RDONLY);
	int f_to = open(ft, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ssize_t text_copy, text_wrote;
	char b[BUF_SIZE];

	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fm);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", ft);
		exit(99);
	}
	while ((text_copy = read(f_from, b, BUF_SIZE)) > 0)
	{
		text_wrote = write(f_to, b, text_copy);
		if (text_copy != text_wrote)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", ft);
			exit(99);
		}
	}
	if (text_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fm);
		exit(98);
	}
	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_from);
		exit(100);
	}
	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_to);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc : number of argument
 * @argv : argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_copy(argv[1], argv[2]);
	return (0);
}
