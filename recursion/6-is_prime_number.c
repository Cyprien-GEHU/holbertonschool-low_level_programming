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
	if (n == i)
		return (1);
	if (n % i == 0)
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
	if (n <= 1)
		return (0);
	n = prime(2, n);
	return (n);
}
