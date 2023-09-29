#include "main.h"
/**
 * factorial -  calcualtes the factorial of a number
 *
 * @n: given number
 * Return: 
 */

int factorial(int n)
{
	if (n <= 1)
	{
	return 1;
	}
	return n * factorial(n-1);
}
