#include "main.h"
#include <stdio.h>
/**
*cap_string - reverse array of integers
*
*@c: string letter
*@isLower: das
@isDelimiter: adadfg
*
* Return: Nothing
*/

int isLower(char c)
{
	return (c>= 97 && c <= 122);
}

int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"|)()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (2);
	return (0);
}

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)

	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
