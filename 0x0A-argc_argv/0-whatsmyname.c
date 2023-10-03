#include "main.h"
#include <stdio.h>

/**
 * main - program prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (successful)
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
