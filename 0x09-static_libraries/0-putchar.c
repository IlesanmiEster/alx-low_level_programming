#include <unistd.h>


/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error,return -1, and errno sets appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

