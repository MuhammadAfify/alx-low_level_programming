#include <stdio.h>
/**
 * print_msg  - print message
 *
 */
void __attribute__((constructor)) print_msg(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
