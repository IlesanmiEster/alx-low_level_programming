#include "main.h"

int actual_prime(int n, int p);

/**
 * is_prime_number - state if an integer is prime number or not
 * @n: number to calculate
 *
 * Return: 0 if n is not a prime number, 1 if a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively, calculates if n is prime number
 * @n: number to calculate
 * @p: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (actual_prime(n, p - 1));
}
