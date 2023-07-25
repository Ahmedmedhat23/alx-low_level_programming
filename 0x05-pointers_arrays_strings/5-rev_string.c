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
        int i = 0;
        while (s[i])
                i++;
        while (i--)
        {       
                _putchar(s[i]);
        }       
        _putchar('\n');
}


{
