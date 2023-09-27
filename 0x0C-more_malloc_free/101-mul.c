#include "main.h"
#include <ctype.h>
/**
 * zero_check - check the number is zero
 *
 * @argv: argument vector
 */
void zero_check(char *argv[])
{
	int i, is1 = 1, is2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			is1 = 0;
			break;
		}
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			is2 = 0;
			break;
		}
	if (is1 == 1 || is2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}
/**
 * init_array - set memery to zero in a new array
 *
 * @array: char array
 * @len: length of the char array
 * Return: pointer of a char array.
 */
char *init_array(char *array, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
		array[i] = '0';
	array[len] = '\0';
	return (array);
}
/**
 * checknum - determines length of the number
 *
 * @argv: arguments vector
 * @n: row of the array
 * Return: length of the number.
 */
int checknum(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}
	return (ln);
}
/**
 * main - Entry point
 *
 * program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = checknum(argv, 1), ln2 = checknum(argv, 2);
	zero_check(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = init_array(nout, lnout);
	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = ln1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = init_array(nout, lnout);
			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
