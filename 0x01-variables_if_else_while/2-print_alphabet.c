#include <stdio.h>

/**
 * main - Prints the the lower case alphabet
 *
 * Return: Always 0.
 */


int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar("%c\n ", c);

	return (0);
}
