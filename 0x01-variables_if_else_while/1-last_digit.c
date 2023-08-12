#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit and define if greater than 5,  less or zero
 *
 * Return - Always zero
 *
 */

int main(void)
{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
	if (Last_digit > 5)
		printf("%d and is greater than 5", n);
	else if (Last_digit == 0)
		printf("%d and is 0", n);
	else
		printf("%d and is less than 6 and not 0", n);
	return (0);
}
