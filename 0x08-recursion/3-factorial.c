#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: the number to determine the factorial of
 * Return: factorial number
 */
int factorial(int n)
{
	int new;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	new = factorial(n - 1);
	return (n * new);
}
