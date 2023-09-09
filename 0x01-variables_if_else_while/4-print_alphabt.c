#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase, followed by
 * a new line
 * Return: always return 0
 */
int main(void)
{
	char c;

	c = 'd';
	while
		(c <= 'g') {
			if ((c != 'q' && c != 'e') && c <= 'g')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
