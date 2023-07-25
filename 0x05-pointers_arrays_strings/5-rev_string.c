#include "main.h"

/**
 * rev_string - output thr string reverse
 *
 * @s: string parameter input
 *
 * Return: reverse string
*/

void rev_string(char *s)

{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; ++i)
		;
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
