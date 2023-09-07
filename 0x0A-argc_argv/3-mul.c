#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 *
 * @argc : num of parametrs
 * @argv : pointers of array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
	printf("Error, it's must be three\n");
	return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	return (mul);
}
