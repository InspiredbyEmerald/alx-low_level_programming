#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, cd;

	for (a = 0; a < 10; a++)
	{

		_putchar(48);
		for (b = 1; b < 10; b++)
		{
			cd = a * b;
			_putchar(44);
			_putchar(32);
			if (cd <= 9)
			{
				_putchar(32);
				_putchar(cd + 48);
			}
			else
			{
				_putchar((cd / 10) + 48);
				_putchar((cd % 10) + 48);
			}
		}
		_putchar('\n');
	}
}

