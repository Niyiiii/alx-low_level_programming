#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, then in uppercase,
 * followed by a new line
 * Return: always return 0 (successful)
 */
int main(void)
{
	char a;
	char b;

	a = 'd';
	b = 'D';
	while
		(a <= 'e') {
			putchar(a);
			a++;
		}
	while
		(b <= 'E') {
			putchar (b);
			b++;
		}
	putchar('\n');
	return (0);
}
