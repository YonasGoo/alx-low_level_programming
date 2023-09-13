#include "main.h"
/**
 * _abs - main function
 *
 * @n: the integer value
 *
 * Return: less than 0 n, greater or equal to zero n times minus 1
 *
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
