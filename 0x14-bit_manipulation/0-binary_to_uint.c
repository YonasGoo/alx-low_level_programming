#include "main.h"
/**
 * binary_to_unity - Convert a binary string to an unsigned int.
 * @b: A pointer to a string of '0' and '1' char.
 * Return: The converted unsigned int, or 0 if:
 *    - The string contains one or more char that are not '0' or '1'.
 *    - The input string 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			result = (result << 1) | 1;
		else if (*b == '0')
			result <<= 1;
		else
			return (0);
		b++
	}
	return (result);
}
