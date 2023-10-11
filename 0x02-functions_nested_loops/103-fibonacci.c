#include <stdio.h>

/**
 * main - program to print sum of even-valued terms
 * Return: 0
 */
int main(void)
{
	int end = 4000000;
	int num1 = 1;
	int num2 = 2;
	int num;
	int sum = 2;

	while (num <= end)
	{
		num = num1 + num2;
		if (num % 2 == 0)
			sum = sum + num;
		num1 = num2;
		num2 = num;
	}
	printf("%d\n", sum);
	return (0);
}
