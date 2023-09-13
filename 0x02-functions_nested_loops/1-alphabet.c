#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 * 
 */
void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z'){
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

