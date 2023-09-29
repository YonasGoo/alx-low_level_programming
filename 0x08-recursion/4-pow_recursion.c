#include "main.h"
/**
 * _pow_recursion - calculates the power of two numbers
 *
 * @x: the base num
 * @y: the exponent num
 * Return: power of numbers
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	}
	else if (y > 0)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	else
	{
	return (-1);
	}
}
