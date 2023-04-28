#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry pint
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char hd;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (hd = 'a'; hd <= 'f'; hd++)
		putchar(hd);
	putchar('\n');

	return (0);
}
