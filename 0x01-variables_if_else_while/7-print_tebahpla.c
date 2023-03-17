#include <stdio.h>

/**
 * main - lowercase reverse alphabet.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
