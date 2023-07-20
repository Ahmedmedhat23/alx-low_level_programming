#include "main.h"

/**
 * main - print_most_numbers from 0 to 9 except 2 & 4
 *
 * Description: numbers from 0 to 9
 *
 * Return: result
 *
*/

void print_most_numbers(void)

{

	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(c + 48);
	}
	_putchar('\n');
}
