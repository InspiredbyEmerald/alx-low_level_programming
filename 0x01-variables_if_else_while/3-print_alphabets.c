#include <stdio.h>

/**
 *main - Prints Alphabets.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int k;

for (k = 0; k < 52; k++)
{
	putchar(alph[k]);
}
putchar('\n');
return (0);
}
