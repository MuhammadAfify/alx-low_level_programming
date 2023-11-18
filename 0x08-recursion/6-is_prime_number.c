#include "main.h"
/**
 * div_available - check the num is divisible
 *
 * @num : num to check
 * @div : divisor
 * Return: 0 if divisible, -1 if not.
 */
int div_available(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (div_available(num, div + 1));
}
/**
 * is_prime_number - check the prime num
 *
 * @n : num to check
 * Return: return 0 if not, 1 if is prime.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);
	return (div_available(n, div));
}
