#include "main.h"
/**
 * _abs - program that calculates the absolute value of an integer
 * @p: function to be calculated
 * Return: absolute value of integer, else return 0
 */

int _abs(int p)
{
	if (p < 0)
	{
		int abs_val;

		abs_val = p * -1;
		return (abs_val);
	}
	return (p);
}
