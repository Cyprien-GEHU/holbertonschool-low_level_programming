#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char size_char;
	int size_int;
	long int size_long_int;
	double long size_long_long_int;
	float size_float;

	printf("Size of a char: %ld byte(s)\n", sizeof(size_char));
	printf("Size of an innt: %ld byte(s)\n", sizeof(size_int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(size_long_int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(size_long_long_int));
	printf("Size of a float: %ld byte(s)\n", sizeof(size_float));

	return (0);
}
