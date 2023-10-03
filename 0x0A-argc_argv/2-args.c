#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array with argument
 *
 * Return: always 0
 */
int main(argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
