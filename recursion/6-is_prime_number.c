#include "main.h"
/**
 * prime - find if n is a prime number
 *
 * @i : factor number
 * @n : number
 *
 * Return: "0" if not prime number, "1" is a prime number
 */

int prime(int i, int n)
{
	if (n / i == 1)
		return (1);
	if (n - (i * i) == 0)
		return (0);
	return (prime(i + 1, n));
}

/**
 * is_prime_number - print if is a prime number
 * @n : the number
 *
 * Return: the value "n"
 */

int is_prime_number(int n)
{
	n = prime(1, n);
	return (n);
}
