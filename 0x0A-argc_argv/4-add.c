#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks for digits in strings
 * @str: input
 * Return: 0 (successful)
 */

int check_num(char *str)
{
	unsigned int f;

	f = 0;

	while (f < strlen(str))
	{
		if (!isdigit(str[f]))
		{
			return (0);
		}
		f++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of argument
 * Return: 0 (successful)
 */

int main(int argc, char **argv)
{
	int a = 1;
	int b;
	int sum = 0;

	while (a < argc)
	{
		if (check_num(argv[a]))
		{
			b = atoi(argv[a]);
			sum += b;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
