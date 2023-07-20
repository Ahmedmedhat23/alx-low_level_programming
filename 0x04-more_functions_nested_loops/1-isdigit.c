#include "main.h"

/**
 * _isdigit - check if 'c' is digit
 *
 * Description: @c: input for alphabet if digit 'c'_isdigit between 0 and 9
 *
 * Return: 1 if _isgigit between 0 and 9, 0 if it not
 */

int _isdigit(int c);
{

	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
