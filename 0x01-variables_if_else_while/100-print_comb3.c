#include <stdio.h>

/**
 * main - this program prints all possible combinations of two digits
 *
 * Return: always returns 0
 */

int main(void)
{
	int num1;
	int num2;

	for (num2 = '0'; num2 <= '9'; num2++)
	{
		for (num1 = '0'; num1 <= '9'; num1++)
		{
			if (!((num1 == num2) || (num2 > num1)))
			{
				putchar(num2);
				putchar(num1);
				if (!(num1 == '9' && num2 == '8'))
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
