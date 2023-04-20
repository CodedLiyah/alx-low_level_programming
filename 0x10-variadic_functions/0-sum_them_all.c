#include  "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of parameters
 * @n: the number of paprameters passed to the function
 * @..: a variable number of parameters to calculate the sum of
 *
 * Return: if n == 0 - 0
 * otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
