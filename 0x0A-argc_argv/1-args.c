#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the main function
 *
 * @argc : the number of paramaters
 * @argv : the pointers of array
 * Return: always zero.
 */
int main(int argc, char const *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
