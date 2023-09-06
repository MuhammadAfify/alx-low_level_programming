#include <stdio.h>
#include<stdlib.h>
/**
 * main - the main code
 *
 * @argc : the no. of parameters
 * @argv : pointers of array
 * Return: the integer number
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
