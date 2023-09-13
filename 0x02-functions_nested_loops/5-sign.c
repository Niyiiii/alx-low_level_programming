#include "main.h"
/**
 * print_sign - program that prints the sign of a number
 * @q: int input
 * Return: 1 if positive, -1 if negative, else 0
 */

int print_sign(int q)
{
	if (q > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (q < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

