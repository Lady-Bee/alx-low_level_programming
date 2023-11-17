#include "lists.h"
#include <stdio.h>

/**
 * print_message - Function prints a message
 */

void print_message(void)
{
	char message[] = "You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n";

	int i = 0;

	for (; message[i] != '\0'; i++)
	{
		printf("%c", message[i]);
	}
}

