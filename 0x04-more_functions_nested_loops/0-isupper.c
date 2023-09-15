#include "main.h"
/**
 * _isupper - checks if char is uppercase
 * @c: input char to be checked
 *
 * Return: returns 1 if uppercase or 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
