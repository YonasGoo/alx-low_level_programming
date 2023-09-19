#include "main.h"
/**
 * _strlen - gets character string
 * @s: string
 * return: length of string
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{}
	return (l);
}
