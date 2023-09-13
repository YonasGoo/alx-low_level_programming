#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 * 
 */
void print_alphabet_x10(void)
{
	char s = 'a';
	char e = 'z';
	char r = '10';

	for (char i = 0; i < r; i++)
	{
		for (char j = s; j <= e; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	
	}
}
