#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar((i % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
