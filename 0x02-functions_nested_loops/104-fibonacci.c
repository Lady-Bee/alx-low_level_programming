#include <stdio.h>

/**
 * main - program to print first 98 fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int num;
	int i;

	printf("%lu, %lu, ", num1, num2);

	for (i = 2; i < 98; i++)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;

		printf("%lu, ", num);
	}
	printf("%lu\n", num);
	return (0);
}

