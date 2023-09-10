#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b : size of memory
 * Return: return pointer to the address of the block
 */
void *malloc_checked(unsigned int b)
{
	void *tst;

	tst = malloc(b);
	if (tst == NULL)
	{
		exit(98);
	}
	return (tst);
}
