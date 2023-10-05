#include <stdio.h>

/**
 * main - This is the main fuction
 *
 * Return: Always returns 0
 */

int main(void)
{
	printf("Size of char: %lu bytes", sizeof(char));
	printf("Size of int: %lu bytes", sizeof(int));
	printf("Size of long int: %lu bytes", sizeof(long int));
	printf("Size of long long int: %lu bytes", sizeof(long long int));
	printf("Size of float: %lu bytes", sizeof(float));

	return (0);
}
