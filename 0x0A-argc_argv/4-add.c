#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - main function to get add
 *
 * @argc: no. arguments
 * @argv: pointers to the arguments
 * Return: return the add
 */
int main(int argc, char *argv[])
{
	int add = 0, i, j;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	}
	}
	printf("%d\n", add);
	return (0);
}
