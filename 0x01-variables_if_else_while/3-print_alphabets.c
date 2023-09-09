#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, then in uppercase,
 * followed by a new line
 * Return: always return 0 (successful)
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar (d);
			d++;
		}
	putchar('\n');
	return (0);
}
