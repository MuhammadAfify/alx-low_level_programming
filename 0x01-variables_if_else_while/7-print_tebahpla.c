#include <stdio.h>
/**
 * main - Prints the the lower case alphabet except q and e
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
