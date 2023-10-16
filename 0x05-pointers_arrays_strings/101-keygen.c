#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	int pass[100];
	int i, sum, a;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			a = 2772 - sum - '0';
			sum += a;
			putchar(a + '0');
			break;
		}
	}

	return (0);
}

