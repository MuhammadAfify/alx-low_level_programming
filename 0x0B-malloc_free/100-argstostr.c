#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 *
 * @ac: integer type
 * @av: array pointer
 * Return: pointer of argument
 */
char *argstostr(int ac, char **av)
{
	int size, i, count1, count2 = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (count1 = 0; av[i][count1] != '\0'; count1++)
		{
			size += 1;
		}
	}
	ptr = malloc(size + 1 + ac * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (count1 = 0; av[i][count1] != '\0'; count1++)
		{
			ptr[count2] = av[i][count1];
			count2++;
		}
		ptr[count2] = '\n';
		count2++;
	}
	ptr[count2] = '\0';
	return (ptr);
}
