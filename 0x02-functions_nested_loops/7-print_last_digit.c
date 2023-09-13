#include "main.h"
/**
 * print_last_digit - program that prints last digit of a number
 * Return: value of last digit of a number
 */
int print_last_digit(int p)
{
	int lastDigit;

	lastDigit = p % 10;
	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
