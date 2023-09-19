#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */

void puts_half(char *str)
{
	int i;
	int h = 0;

	if (_strlen(str) % 2 != 0)
	{
		h += 1;
	}
	for (i = (_strlen(str) + h) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
