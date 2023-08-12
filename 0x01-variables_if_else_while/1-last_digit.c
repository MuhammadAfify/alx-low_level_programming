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
	int n, LstDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LstDgt = n % 10;
	if (LstDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LstDgt);
	}
	else if (LstDgt != 0 && LstDgt < 6)
	{
		printf("The Last digit of %d is %d and is laess than 6 and not 0\n", n, LstDgt);
	}
	else
	{
		printf("Last digit is %d", LstDgt);
	}
	return (0);
}
