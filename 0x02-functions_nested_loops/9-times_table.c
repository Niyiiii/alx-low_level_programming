#include "main.h"
/**
 * times_table - program prints the 9 multiplication table beginning with 0
 * Return: 0 (sucessful)
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if ((z / 10) == 0)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(z + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
