#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print two diagonals of a square matrix of integers
 * @a: Pointer to the square matrix
 * @size: size of the matrix
 * Return: result
 */
void print_diagsums(int *a, int size)
{
	int r, m, sum1 = 0, sum2 = 0;

	for (r = 0; r < size; r++)
	{
		for (m = 0; m < size; m++)
		{
			if (r == m)
				sum1 += *((a + r * size) + m);
			if ((r + m) == (size - 1))
				sum2 += *((a + r * size) + m);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
