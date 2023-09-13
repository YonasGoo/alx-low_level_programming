#include "main.h"
/**
 * times_table - main function
 *
 * Return: 9 times table
 *
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (j == 0)
			{
				_putchar('0');
			} else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
		}
		_putchar('\n');
	}
}
