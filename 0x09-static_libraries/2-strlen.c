#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: input
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
