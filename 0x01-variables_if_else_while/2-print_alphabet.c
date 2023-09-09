#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, followed by a new
 * line
 * Return: always 0 (sucessful)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
