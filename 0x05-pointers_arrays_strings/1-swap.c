#include "main.h"

/**
 * swap_int - swaps numbers
 * @a: firts int
 * @b: second int
 * 
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
