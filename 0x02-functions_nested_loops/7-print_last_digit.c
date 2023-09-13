#include "main.h"
/**
 * print_last_digit - main function
 * @n: the number to be evaluated
 *
 * Return: alwyas 0
 *
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;print last digit of a number
	}

	_putchar(lastDigit + '0');
	return (0);
}
