#include "main.h"
/**
 * find_length - Finds the length of a string
 *
 * @s: The string to be measured
 * Return: The length of the string.
 */
int find_length(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * create_array - Creates an array of chars and initializes it
 *
 * @size: The size of the array to be initialized
 * Return: A pointer to the array.
 */
char *create_array(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';

	array[i] = '\0';

	return (array);
}
/**
 * iterate_zero - Iterates through a string of numbers containing
 *
 * @s: The string of numbers
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zero(char *s)
{
	while (*s && *s == '0')
		s++;
	return (s);
}
/**
 * get_digit - Converts a digit character to a corresponding int
 *
 * @c: The char to be converted
 * Return: The converted int.
 */
int get_digit(char ch)
{
	int digit = ch - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}
/**
 * get_prod - Multiplies a string of numbers by a single digit
 *
 * @prod: The buffer to store the result
 * @mult: The string of numbers
 * @digit: The single digit
 * @zero: The necessary number of leading zeroes
 */
void get_prod(char *prod, char *mult, int digit, int zero)
{
	int mult_len, num, tens = 0;

	mult_len = find_length(mult) - 1;
	mult += mult_len;
	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;
	while (zero--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}
/**
 * add_num - Adds the numbers stored in two strings
 *
 * @final_prod: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @next_len: The length of next_prod.
 */
void add_num(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}
/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = iterate_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = find_length(argv[1]) + find_length(argv[2]);
	final_prod = create_array(size + 1);
	next_prod = create_array(size + 1);
	for (index = find_length(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_num(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');
	free(next_prod);
	free(final_prod);
	return (0);
}
