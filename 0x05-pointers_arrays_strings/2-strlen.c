#include "main.h"
/**
 * _strlen - returns string length
 * @s: string 
 * return: length of strings
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{}
	return (l);
}
