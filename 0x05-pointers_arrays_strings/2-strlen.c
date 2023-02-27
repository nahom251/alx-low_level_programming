#include "main.h"
/**
 * _strlen - calculates lengt of string
 * @s- string
 * Returns: s
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

