#include "main.h"

/**
 * print_number - Prints an integer to the standard output
 *
 * @n: The integer to be printed
 *
 */

void print_number(int n)
{
    unsigned int absoluteValue, divisor, digit;

    if (n < 0)
    {
        _putchar('-');
        absoluteValue = -n;
    }
    else
    {
        absoluteValue = n;
    }

    divisor = 1;

    while (absoluteValue / divisor >= 10)
    {
        divisor *= 10;
    }

    while (divisor > 0)
    {
        digit = (absoluteValue / divisor) % 10;
        _putchar('0' + digit);
        divisor /= 10;
    }
}

