#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the lowercase alphabets in reverse
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char mg;

	for (mg = 'z'; mg >= 'a'; mg--)
		putchar(mg);

	putchar('\n');

	return (0);
}
