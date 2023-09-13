#include "main.h"
/**
 * times_table - main function
 *
 * Return: 9 times table
 *
 */

void times_table(void)
{
	char i;
	char j;
	char k;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			_putchar('0' + (k / 10));
			_putchar('0' + (k % 10));
			_putchar('\t');
			_putchar('\n');
		}
	}
}
