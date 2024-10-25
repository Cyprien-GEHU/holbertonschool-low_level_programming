#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, fd, ld;

	for (i = 1; i <= 89; i++)
	{
		fd = i / 10;
		ld = i % 10;
		if (i == 9)
			i += 2;
		if (i == 19)
			i += 3;
		if (i == 29)
			i += 4;
		if (i == 39)
			i += 5;
		if (i == 49)
			i += 6;
		if (i == 59)
			i += 7;
		if (i == 69)
			i += 8;
		if (i == 79)
			i += 9;

		putchar(fd + '0');
		putchar(ld + '0');
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
