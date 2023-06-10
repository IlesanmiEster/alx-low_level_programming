#include "main.h"

int actual_sqrt_recursion(int n, int p);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root
 *
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to get the natural
 * square root of number
 * @n: number to calculate sqaure root
 * @p: iterator
 *
 * Return: resulting square root
 */
int actual_sqrt_recursion(int n, int p)
{
	if (p * p > n)
		return (-1);
	if (p * p == n)
		return (p);
	return (actual_sqrt_recursion(n, p + 1));
}
