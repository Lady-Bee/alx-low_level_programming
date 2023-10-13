#include <stdio.h>
/**
 * main - function prints the largest prime factor
 *		of the number 612852475143.
 * Return: returns 0
 */

int main(void)
{
	long num = 612852475143;
	long i;

	while (i < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
		}

		for (i = 3; i < (num / 2); i += 2)
		{
			if ((num % i) == 0)
			{
				num /= i;
			}
		}
	}

	printf("%ld\n", num);
	return (0);
}
