#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @x:First argument to be swapped.
 * @y:second argument to be swapped.
 *
 * Return:void.
 */

void swap_int(int *x, int *y)
{
	int p = *x;
	*x = *y;
	*y = p;
}

