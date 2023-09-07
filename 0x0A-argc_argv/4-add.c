#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 *
 * @argc : num of parametrs
 * argv : pointers of array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum, ex;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
				return (1);
		}
		printf("%i\n", sum);
	}
	else
		printf("%s\n", "Error");
	return (0);
}
