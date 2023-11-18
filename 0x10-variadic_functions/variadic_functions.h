#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print - A new struct type.
 *
 * @sym: A symbol representing a data type.
 * @print: A function pointer to a function
 */
typedef struct print
{
	char *sym;
	void (*print)(va_list arg);

} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
