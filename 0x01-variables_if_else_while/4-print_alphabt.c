#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: always returns 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)

		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
