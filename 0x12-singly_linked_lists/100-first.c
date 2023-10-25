#include "lists.h"

void tortoise(void)__attribute__ ((constructor));

/**
 * tortoise - Function that run before the main function runs
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
