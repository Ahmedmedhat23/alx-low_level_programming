#include "main.h"

/**
 * _isupper - check if 'c' is upper
 *
 * Description: @c: input for alphabet if char 'c' is upper or lower
 *
 * Return: 1 if _isupper case, 0 if it not
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	return (1);

	else
	return (0);
}
