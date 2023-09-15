#include <stdio.h>

/**
 * main -  main function
 *
 * Return: (0) Success
 */

int main(void)
{
	long int n, a;

	n = 612852475143;
	for (a = 2; a <= n; a++)
	{
		if (n % a == 0)
		{
			n /= a;
			a--;
		}
	}
	printf("%ld\n", a);
	return (0);
}
