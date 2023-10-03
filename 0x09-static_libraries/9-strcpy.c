#include "main.h"

/**
 * _strcpy - function copies string pointed to by src
 * @dest: copy into
 * @src: copy from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
