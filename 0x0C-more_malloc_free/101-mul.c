#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function to multiply
 *
 * @argc: the number of arguments
 * @argv: the strings
 * Return: the mulitipliction
 */
int main(int argc, char *argv[])
{
	int mul, i, j;

	mul = 0;
	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; i < argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
