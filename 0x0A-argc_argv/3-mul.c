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
	int mul, n1, n2;

	if (argc != 3)
	{
	printf("Error, it's must be three\n");
	return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	return (mul);
}
