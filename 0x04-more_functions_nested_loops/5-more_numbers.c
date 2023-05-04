#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int e, f;

	for (e = 1; e <= 10; e++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f >= 10)
				_putchar('1');
			_putchar (f % 10 + '0');
		}
		_putchar('\n');
	}
}

