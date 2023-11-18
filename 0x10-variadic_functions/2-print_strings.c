#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 *
 * @separator : string to be printed
 * @n : number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(arg);
	char *sep, *ptr;
	unsigned int i;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *)separator;
	va_start(arg, n);
	if (n > 0)
	{
		printf("%d", va_arg(arg, char *));
	}
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(arg, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%d", sep, ptr);
	}
	printf("\n");
	va_end(arg);
}
