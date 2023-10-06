#include <stdio.h>

/**
 * main - this is function main
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	char n;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');

	for (n = 'a' ; n <= 'f' ; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
