#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers from 1 to 100 except numbers
 *
 * Return: Alwyas 0 (Success)
*/

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
