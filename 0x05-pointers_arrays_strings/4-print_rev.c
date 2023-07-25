#include "main.h"

/**
 * _rev - print_rev of string
 *
 * @s: string parameter input
 *
 * Return: print of reverse string
*/

void print_rev(char *s)

{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
