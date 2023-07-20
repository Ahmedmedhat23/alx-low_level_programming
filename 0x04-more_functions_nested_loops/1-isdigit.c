#include "main.h"

/**
 * _isdigit - check if 'c' is digit
 *
 * Description: @c: input for alphabet if digit 'c' is upper or lower
 *
 * Return: 1 if _isgigit between 0 and 9, 0 if it not
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
