#include "main.h"
/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{}
	return (l);
}
