#include "main.h"
#include <stdio.h>

/**
 * main - program prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
