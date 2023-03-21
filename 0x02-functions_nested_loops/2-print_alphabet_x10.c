#include "main.h"
/*
 * print_alphabet_x10 - prints alphabet x10.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
	c  = 'a';
	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
	}
}
