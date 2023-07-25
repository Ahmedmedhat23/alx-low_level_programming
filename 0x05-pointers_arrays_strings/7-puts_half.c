#include "main.h"

/**
 * _puts_half - half of string
 *
 * Description: print half of strings followed by new line
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

