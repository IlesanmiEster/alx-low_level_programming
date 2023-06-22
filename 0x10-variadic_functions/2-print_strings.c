#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints the strings, then follow by a new line.
* @separator: String printed between the strings.
* @n: Number of strings passed to the function.
* @...: The variable number of strings to be printed.
*
* Description: It is not printed, If the separator is NULL
* If any one of the strings if NULL, (nil) is printed.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;


	va_start(strings, n);


	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);


		if (str == NULL)
			printf("(nil)");
		else
				printf("%s", str);


		if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
	}


	printf("\n");


	va_end(strings);
}
