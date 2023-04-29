#include <stdio.h>
/**
 * main - entry point
 * Return:0
 */
int main(void)
{
	int x, y, z;

	for (y = '0'; y <= '9'; y++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			for (x = '0'; x <= '9'; x++)
			{
				if (y < z && z < x)
				{
					putchar(y);
					putchar(z);
putchar(x);
					if (y == '7' && z == '8' && x == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
				return (0);
}

