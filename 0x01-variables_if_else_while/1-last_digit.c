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
	int n, LDt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LDt = n % 10;
	if (LDt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LDt);
	}
	else if (LDt < 6 && LDt != 0)
	{
		printf("The Last digit of %d is %d and is laess than 6 and not 0\n", n, LDt);
	}
	else
	{
		printf("Last digit is %d", LDt);
	}
	return (0);
}
