#include "main.h"

/**
 * swap_int - swap the values of two integres
 * using two input parameters
 * @a: input parmeter 1
 * @b: input parameter 2
 *
 * Return: Nithung
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
