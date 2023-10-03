#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: input
 * Return: converted int
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int len = 0;
	int dig = 0;

	while (s[len] != '\0')
	len++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++d;
		if (s[a] >= '0' && s[a] <= '9')
		{
			dig = s[a] - '0';
			if (b % 2)
				dig = -dig;
			c = c * 10 + dig;
			d = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (successful)
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
