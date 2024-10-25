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
	int fn, mn, ln;

		for (fn = 0; fn < 10; fn++)
		{
			for (mn = fn + 1; mn < 10; mn++)
			{
				for (ln = mn + 1; ln < 10; ln++)
				{
					putchar(fn + '0');
					putchar(mn + '0');
					putchar(ln + '0');
					if (fn == 7 && mn == 8 && ln == 9)
					{
						putchar('\n');
						return (0);
					}
					putchar(',');
					putchar(' ');
				}

			}
		}
	return (0);
}
