#include "main.h"
/**
 * print_diagonal - draws diagonal line on terminal
 * @n:  the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int c;
	int c2;
	int c3;

	c2 = 0;
	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= n; ++c)
		{
			while (c2 < n)
			{
				for (c3 = 0; c3 <= c2; ++c3)
				{
					_putchar(32);
				}
				_putchar(92);
				_putchar('\n');
				c2++;
			}
		}
	}
}
