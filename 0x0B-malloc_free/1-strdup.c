#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function returns pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0 (successful)
 */

char *_strdup(char *str)
{
	char *c;
	int s;
	int i = 0;

	if (str == NULL)
		return (NULL);
	s = 0;

	while (str[s] != '\0')
		s++;

	c = malloc(sizeof(char) * (s + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		c[i] = str[i];
	return (c);
}
