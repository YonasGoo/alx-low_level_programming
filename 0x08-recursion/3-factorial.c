#include "main.h"
/**
 * factorial -  calcualtes the factorial of a number
 *
 * @n: given number
 * Return: 
 */

int factorial(int n)
{
	if n == 0
	return 1;
	return factorial(n) * factorial(n-1);
}
