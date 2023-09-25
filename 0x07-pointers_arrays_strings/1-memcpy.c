#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory copied to
 * @src: memory copied from
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int s = n;

	for (; d < s; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
