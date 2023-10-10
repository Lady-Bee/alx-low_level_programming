# include "main.h"
/**
 * jack_bauer - This function prints every minute in a 24 hour
 * Return: return is void
 */

void jack_bauer(void)
{
	int i;
	int t;

	for (i = 0 ; i < 24 ; i++)
	{
		for (t = 0 ; t < 60 ; t++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar('\n');
		}
	}

}
