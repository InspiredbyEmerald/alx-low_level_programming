#include "main.h"
#include <unistd.h>
/**
  *main - Entry point
  *Return: Always 0 (Success)
  */

void print_alphabet(void);
{
	char d = 'a';

	while (d <= 'z')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}

