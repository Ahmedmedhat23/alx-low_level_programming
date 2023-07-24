#include "main.h"

/**
 * _str - return the length of the string
 *
 * @s: string parameter input
 *
 * Return: Length of string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		*str++;
	}
	_putchar('\n');
}

