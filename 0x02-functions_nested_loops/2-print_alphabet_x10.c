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
	int r = 10;

	for (i = 0; i < r; i++)
	{
		for (alpha = s; alpha <= e; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	
	}
}
