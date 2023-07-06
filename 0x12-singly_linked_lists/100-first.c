#include "lists.h"

void __attribute__((constructor)) Im_first(void);

/**
 * Im_first - Prints a string before the
 * main function is executed.
 * Return: nothing
 */

void Im_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
