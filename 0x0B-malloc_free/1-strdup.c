#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int a = 0;
	char *b;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	b = malloc(sizeof(char) * a + 1);

	if (b == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		b[i] = str[i];

	return (b);

}
