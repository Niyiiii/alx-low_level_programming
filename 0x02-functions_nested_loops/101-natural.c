#include <stdio.h>
/**
 * main - a program that calculates and prints the sum of all multiples of 3
 * or 5 below 1024
 * Return: 0 (successful)
 */

int main(void)
{
	unsigned long int sum3, sum5, sum;
	int c;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3) == 0)
		{
			sum3 = sum3 + c;
		}
		else
			if ((c % 5) == 0)
			{
				sum5 = sum5 + c;
			}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
