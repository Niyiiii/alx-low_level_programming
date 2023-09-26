#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a sqaure matrix of
 * integers
 * @a: integer input
 * @size: integer input
 * Return 0 (sucessful)
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, x;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}

	for (x = size - 1; x > 0; x--)
	{
		sum2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
