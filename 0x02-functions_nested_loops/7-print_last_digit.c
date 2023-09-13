#include "main.h"
/**
 * print_last_digit - main function
 * @n: the number to be evaluated
 *
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
		_putchar(lastDigit + '0');
	}
	return (n % 10);
}
