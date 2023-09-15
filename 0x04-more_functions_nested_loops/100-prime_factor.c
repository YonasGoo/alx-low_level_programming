#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
    long int n = 612852475143;
    long int a;

    for (a = 2; a <= n; a++)
    {
        if (n % a == 0)
        {
            n /= a;
            a--;
        }
    }

    printf("%ld\n", a);
    return 0;
}

