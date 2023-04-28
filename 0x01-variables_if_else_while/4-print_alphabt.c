#include <stdio.h>

/**
 *main - Print alphabets without q and e
 *Return: Always 0 (Success)
 */
int main(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		if (g == 'e' || g == 'q')
			continue;
		putchar(g);
	}
	putchar('\n\);
	return (0);
}

