#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum amount of coins to make change for an
 * amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (successful)
 */

int main(int argc, char **argv)
{
	int f;
	int y;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	f = atoi(argv[1]);
	result = 0;

	if (f < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && f >= 0; y++)
	{
		while (f >= coins[y])
		{
			result++;
			f -= coins[y];
		}

	}
	printf("%d\n", result);
	return (0);
}

