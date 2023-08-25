#include "main.h"
/**
 * reverse_array - reverse the content of the array
 *
 * @a : the array
 * @n : the number of content
 */
void reverse_array(int *a, int n)
{
	int i, temp, k, *p;

	p = a;

	for (k = 1; k < n; k++)
	{
		p++;
	}
	for (i = 0; i < (k / 2); i++)
	{
		temp = a[i];
		a[i] = *p;
		*p = temp;
		p--;
	}
}
