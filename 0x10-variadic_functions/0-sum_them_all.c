#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all parametrs
 *
 * @n : variodic inp
 * Return: return the final sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, const int);
	}
	va_end(ap);
}
