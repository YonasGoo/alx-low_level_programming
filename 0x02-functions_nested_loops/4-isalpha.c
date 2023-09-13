#include "main.h"
/**
 * _isalpha(int c)
 *
 * Return: return 1 if letter, return 0 otherwise
 *
 * c - character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);

}
