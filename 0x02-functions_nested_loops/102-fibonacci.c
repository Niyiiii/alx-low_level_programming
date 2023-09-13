#include <stdio.h>
/**
 * main - program that prints the first 50 fibonacci numbers,
 * starting with 1 and 2
 * Return: 0 (successful)
 */

int main(void)
{
	long int x, y, z, next;

	y = 1;
	z = 2;

	for (x = 1; x <= 50; x++)
	{
		if (y != 20365011074)
		{
			printf("%1d, ", y);
		}
		else
		{
			printf("%1d\n", y);
		}
		next = y + z;
		y = z;
		z = next;
	}
	return (0);
}
