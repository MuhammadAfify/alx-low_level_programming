#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * @argc : no. parameters
 * @argv : pointers of array
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
