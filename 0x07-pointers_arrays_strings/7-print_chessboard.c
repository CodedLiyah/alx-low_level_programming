#include"main.h"
/**
 * print_chessboard - print the chessboard
 * @a: 2 array
 * Return : result
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int m;

	for (r = 0; r < 8; r++)
	{
		for (m = 0; m < 8; m++)
			_putchar (a[r][m]);
		_putchar('\n');
	}
}
