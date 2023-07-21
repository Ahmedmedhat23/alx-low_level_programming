#include "main.h"

/**
 * void print_diagonal(int n)
 *
 * @n: number of times char '\' should be printed
 *
 * Description: print_diagonal
 * Return: return result
*/
void print_diagonal(int n);
{
	int postn, space;

	if (n <= 0)
		_putchar('\n')
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; spcae <= postn; space++)
				_putcahr(' ');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
