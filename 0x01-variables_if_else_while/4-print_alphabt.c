#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase, followed by
 * a new line
 * Return: always return 0
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
