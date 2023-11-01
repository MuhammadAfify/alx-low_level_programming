#include <stdlib.h>
#include <stdio.h>
/**
 * main - main func
 *
 * @argc: the no. elements
 * @argv: the array of content
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf ("Error\n");
		return (1);
	}
	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
