#include "main.h"

/**
 * _puts - function prints a string to the standard output
 * @str: string
 * _putchar prints a new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
