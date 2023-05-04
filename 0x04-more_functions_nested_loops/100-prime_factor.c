#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int q;
	long int maximum;
	long int r;

	q = 612852475143;
	maximum = -1;

	while (q % 2 == 0)
	{
		maximum = 2;
		q/= 2;
	}

	for (r = 3; r <= sqrt(q); r = r + 2)
	{
		while (q % r == 0)
		{
			maximum = r;
			q = q / r;
		}
	}

	if (q > 2)
		maximum = q;

	printf("%ld\n", max);

	return (0);
}

