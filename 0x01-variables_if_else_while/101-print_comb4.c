#include <stdio.h>
/**
 * main -print three combination
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, c, e;

	for (i = 0; i <= 6; i++)
	{
		for (c = i + 1; c <= 7; c++)
		{
			for (e = c + 1; e <= 8; e++)
			{
				putchar((i % 10) + '0');
				putchar((c % 10) + '0');
				putchar((e % 10) + '0');
				if (i == 6 && c == 7 && e == 8)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
