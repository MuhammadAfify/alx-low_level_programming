#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 *
 * @argc: no. elements
 * @argv: the array
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%i\n", (argc - 1));
	return (0);
}
