#include "main.h"

/**
 * _isdigit - determine if digit
 *
 * @c: char to be determined
 *
 * Return: return 1 if digit or 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
