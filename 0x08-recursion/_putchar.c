#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: char t be printed
 *
 * Return: On success 1
 * -1 is return, on error and the error is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
