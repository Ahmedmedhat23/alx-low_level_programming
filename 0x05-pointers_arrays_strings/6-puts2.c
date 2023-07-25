#include "main.h"

/**
 * puts2 - print even integers
 *
 * @str: string parameter input
 *
 * Return: print of eveni string
*/

void puts2(char *str)

{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)

			putchar(str[i]);
	}
	putchar('\n');
}
