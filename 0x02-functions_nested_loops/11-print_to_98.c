#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * , followed by a new line
 * @n: the number to begin with it
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n ; i < 98 ; i++)
		{
			printf("%d, ", i);
			if (i == 98)
				printf("%d\n", i);
		}
	printf("\n");
	}
	else if (n > 98)
	{
		for (j = n ; j > 98 ; j--)
		{
			printf("%d, ", j);
			if (j == 98)
				printf("%d\n", j);
		}
	printf("\n");
	}
	else
		printf("%d\n", n);
}
