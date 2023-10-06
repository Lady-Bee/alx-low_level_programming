#include <stdio.h>

/**
 * main - this prints a combination of two two-digit numbers
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	int n;

	for (i = 0; i < 100; i++)
	{
		for (n = 0; n < 100; n++)
		{
			if (i < n)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (i != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
