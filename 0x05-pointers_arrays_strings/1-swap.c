#include "main.h"
/**
 * swap_int - swap two integer number
 * @a : the first number.
 * @b : the second number.
 */
void swap_int(int *a, int *b)
{
	int *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
