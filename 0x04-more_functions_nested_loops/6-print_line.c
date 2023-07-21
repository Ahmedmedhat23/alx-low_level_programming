#include "main.h"

/**
 * main - check the code
 *
 * Description:  print_line('n')
 * Return: Always 0.
 */

void print_line(int n);

{
	int lndash;

	if (n <= 0)
	{
		putchar('\n');
	}

	else
	{
		for (lndash = 1; lndash <= n; lndash++)
			putchar('_');
		putchar('\n');
	}
}
