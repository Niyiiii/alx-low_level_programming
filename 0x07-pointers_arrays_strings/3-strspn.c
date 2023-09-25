#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string input
 * @accept: char input
 * Return: 0 (successful)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int un = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				un++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (un);
		}
		s++;
	}
	return (un);
}
