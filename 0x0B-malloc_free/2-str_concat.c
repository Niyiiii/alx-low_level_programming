#include "main.h"
#include <stdlib.h>

/**
 * st_concat - concatenates two strings
 * @s1: string input to be concatenated
 * @s2: string input to be concatenated
 * Return: s1 and s2 concatenation
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j;

	if (s1 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	c = malloc(sizeof(char) * (i + j + 1));

	if (c == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		c[i] = s2[j];
		i++, j++;
	}
	c[i] = '\0';
	return (c);
}
