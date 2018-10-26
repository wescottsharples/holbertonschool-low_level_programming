#include <stdio.h>

void tortoise(void) __attribute__ ((constructor));

/**
 * tortoise - Prints statement before the main function (hare) executes.
 *
 * Return: Nothing.
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");
}
