#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - Prints a char.
 *
 * @arg: arguments pointing to char
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * print_int - Prints an int.
 *
 * @arg: arguments pointing to the integer.
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - Prints a float.
 *
 * @arg: arguments pointing to the float.
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}
/**
 * print_string - Prints a string.
 *
 * @arg: arguments pointing to the string.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
/**
 * print_all - Prints anything.
 *
 * @format: A string of characters.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].sym)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
