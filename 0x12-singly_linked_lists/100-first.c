#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * executeFirst - displays a message prior to the main
 * function being run
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
