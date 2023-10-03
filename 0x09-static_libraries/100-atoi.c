#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string input
 * Return: integer
 */

int _atoi(char *s)
{
	int h = 1, i = 0;
	unsigned int j = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			h *= -1;
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		j = (j * 10) + (s[i] - '0');
		i++;
	}

	j *= h;
	return (j);
}
