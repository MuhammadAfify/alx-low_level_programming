#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main func
 *
 * @argc : num of parametrs
 * argv : pointers of array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				sum += atoi(argv[i]);
			}
		}
	}
	else
		printf("%s\n", "Error");
	printf("%i\n", sum);
	return (0);
}
