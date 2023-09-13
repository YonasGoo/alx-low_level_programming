#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 * 
 */

void print_alphabet_x10()
{
	char start = 'a';
	char end = 'z';
	int repeat = 10;

	for (int i = 0; i < repeat; i++)
	{
		for (char alpha = start; alpha <= end; alpha++)
		{
			_puchar(alpha);
		}
		_putchar('\n');
	
	}
}
