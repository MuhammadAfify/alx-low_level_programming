#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the result
 *
 * @argc : no. arguments
 * @argv : array of pointers
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *opt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	opt = argv[2];
	if (get_op_func(argv[2]) == NULL || argv[2][2] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opt == '/' || *opt == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opt)(num1, num2));
	return (0);
}
