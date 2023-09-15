#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print_numbers
 *
 * @separator : string to be printed between numbers
 * @n : number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	char *sep;
	unsigned int i;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *)separator;
	va_start(ap, n);
	if (n > 0)
	{
		printf("%d", va_arg(ap, unsigned int));
	}
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(ap, unsigned int));
	printf("\n");
	va_end(ap);
}
