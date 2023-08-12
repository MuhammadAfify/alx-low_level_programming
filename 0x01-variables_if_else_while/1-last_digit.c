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
	int n, LstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LstDigit = n % 10;
	if (LstDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LstDigit);
	}
	else if (LstDigit != 0 && LstDigit < 6)
	{
		printf("The Last digit of %d is %d and is laess than 6 and not 0\n", n, LstDigit);
	}
	else
	{
		printf("Last digit is %d", LstDigit);
	}
	return (0);
}
