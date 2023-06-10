#include "main.h"
/**
 * _print_rev_recursion - prints reverse of string.
 * @s: String to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{	_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
