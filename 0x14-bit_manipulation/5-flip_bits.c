#include "main.h"
/**
 * flip_bits - count the num of bits
 * @n: The first num
 * @m: the second num
 * Return: the num of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
