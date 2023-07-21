#include <unistd.h>
#include "main.h"

/**
 * _putchar - write yhe cjaracter c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *         On ERROR. -1 is returned. and error is set appropprately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
