# include "main.h"
/**
 * print_sign-check the sign of a number.
 *
 * @j:Number whose sign is to be checked.
 * Return:1-if j is greater than 0: 0- if j equals 0:-1-if j is less than 0
 */

int print_sign(int j)
{
	if (j > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (j < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

