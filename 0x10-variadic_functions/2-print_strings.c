#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator : string to be printed between numbers
 * @n : number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	char *sep, *ptr;
	unsigned int i;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *)separator;
	va_start(ap, n);
	if (n > 0)
	{
		printf("%d", va_arg(ap, char *));
	}
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(ap, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%d", sep, ptr);
	}
	printf("\n");
	va_end(ap);
}
