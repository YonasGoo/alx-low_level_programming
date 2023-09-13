#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 * @n: the number to be evaluated
 *
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (_abs(n % 10));
}
