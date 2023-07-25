#include "main.h"

/**
 * _puts - return the length of the string
 *
 * @str: string parameter input
 *
 * Return: Length of string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		*str++;
	}
	putchar('\n');
}

