/**
 * main - Prints the the lower case alphabet
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
	    putchar("%c ", c);
    return 0;
}
