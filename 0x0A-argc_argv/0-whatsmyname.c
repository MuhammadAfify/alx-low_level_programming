#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 *
 * @argc: no. elements
 * @argv: the array
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
