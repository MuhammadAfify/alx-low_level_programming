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

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
