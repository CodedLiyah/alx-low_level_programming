#include <stdio.h>

/**
 * main - numbers of base 16.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
