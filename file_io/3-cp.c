#include "main.h"
#define BUF_SIZE 1024
/**
 * copy_function - function copy
 * @fm : file source
 * @ft : file destination
 */

void copy_function(char *fm, char *ft)
{
	int f_from = open(fm, O_RDONLY);
	int f_to = open(ft, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ssize_t copy, wrote;
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
	while ((copy = read(f_from, b, BUF_SIZE)) > 0)
	{
		wrote = write(f_to, b, copy);
		if (copy != wrote)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", ft);
			exit(99);
		}
	}
	if (copy == -1)
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
 * @ac : number of argument
 * @av : argument
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_function(av[1], av[2]);

	return (0);
}
