#include "main.h"

/**
 * print_rev - print_rev of string
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
		putchar(s[i]);
	}
	putchar('\n');
}
