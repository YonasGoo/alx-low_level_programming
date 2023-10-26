#include "main.h"
/**
 * set_bit - set the value
 * @n: A pointer to the unsigned long int
 * @index: the index of the bit to set to 1
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1UL << index);
	return (1);
}
