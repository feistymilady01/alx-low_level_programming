#include <stdio.h>
/**
 * main -print three combination
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, c, e;

	for (i = 48; i <= 68; i++)
	{
		for (c = 49; c <= 69; c++)
		{
			for (e = 50; e <= 70; e++)
			{
				if (e > c && c > i)
				{
					putchar(i);
					putchar(c);
					if (i != 50 || c != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
