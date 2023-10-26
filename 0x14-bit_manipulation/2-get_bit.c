#include "main.h"
/**
 * get_bit - Get the value of a bit at agiven index
 * @n: The unsigned long int
 * @index: The index to retrieve
 * Return: The value of the bit to retrieve
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
