#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit and define if greater than 5,  less or zero
 *
 * Return - Always 0
 */

int main(void)
{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
	if (Last_digit > 5)
		printf("Last digit is %d and is greater than 5", Last_digit);
	else if (Last_digit = 0 && Last_digit<6)
		printf("%d and is Last digit", Last_digit);
	else
		printf("Last digit is %d and is less than 6 and not 0", Last_digit);
	return (0);
}
